import serial
import time

# Configure the serial port
serial_port = '/dev/ttyUSB0'  # Adjust this to match your ESP32's serial port
baud_rate = 115200
ser = serial.Serial(serial_port, baud_rate, timeout=1)

# Wait for the ESP32 to initialize
time.sleep(2)

# Send the command to request the recorded data
ser.write(b'R')

# Read the data from the serial port
file_data = b''
while True:
    data = ser.read(1024)
    if not data:
        break
    file_data += data

# Close the serial port
ser.close()

# Save the received data to a file on your computer
with open('recording.txt', 'wb') as f:
    f.write(file_data)

print("File saved as 'recording.txt'")

