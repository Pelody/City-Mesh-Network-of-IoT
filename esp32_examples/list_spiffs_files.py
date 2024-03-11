import serial
import time

# Serial port configuration
serial_port = '/dev/ttyUSB0'  # Update this with the correct serial port
baud_rate = 115200

# Open serial port
ser = serial.Serial(serial_port, baud_rate, timeout=1)

if not ser.is_open:
    print(f"Failed to open serial port {serial_port}")
    exit()

try:
    # Wait for ESP32 to initialize
    time.sleep(2)

    # Send command to list SPIFFS files
    ser.write(b"L\n")

    # Read and print the response
    response = ser.readlines()
    for line in response:
        print(line.decode().strip())

finally:
    ser.close()

