import serial
import time

# Define the serial port and baud rate
serial_port = '/dev/ttyUSB0'  # Update with your ESP32 serial port
baud_rate = 115200

# Open the serial port
ser = serial.Serial(serial_port, baud_rate)

# Wait for the serial port to initialize
time.sleep(2)

# Send the "r" command
ser.write(b'r')

time.sleep(5)

ser.write(b's')

# Close the serial port
ser.close()

