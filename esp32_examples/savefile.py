import serial

# Serial port configuration
serial_port = '/dev/ttyUSB0'  # Change this to your ESP32's serial port
baud_rate = 115200
timeout = 5  # Adjust timeout as needed

# File path to save the exported file
exported_file_path = 'exported_file.txt'

# Open serial connection to ESP32
with serial.Serial(serial_port, baud_rate, timeout=timeout) as ser:
    # Send command to ESP32 to initiate file transfer
    ser.write(b'E\n')  # Assuming 'E' is the command to export the file

    # Read file data from ESP32 and save it locally
    with open(exported_file_path, 'wb') as file:
        while True:
            data = ser.read(1024)  # Adjust buffer size as needed
            if not data:
                break
            file.write(data)

print(f'Exported file saved as {exported_file_path}')

