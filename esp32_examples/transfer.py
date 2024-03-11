import struct
import wave

# Read signal data from the file
file_path = "exported_file.txt"
with open(file_path, "r") as file:
    signal_data = [float(line.strip()) for line in file]

# Scale the signal data to fit within the range of a 16-bit signed integer
min_val = min(signal_data)
max_val = max(signal_data)
scale_factor = 32767 / max(abs(min_val), abs(max_val))
scaled_signal_data = [int(sample * scale_factor) for sample in signal_data]

# Open a WAV file for writing
output_file = "output.wav"
with wave.open(output_file, "w") as wav_file:
    # Set WAV file parameters
    channels = 1  # Mono
    sample_width = 2  # 16-bit signed integer
    framerate = 44100  # Sample rate
    num_frames = len(scaled_signal_data)

    # Set WAV file parameters
    wav_file.setnchannels(channels)
    wav_file.setsampwidth(sample_width)
    wav_file.setframerate(framerate)
    wav_file.setnframes(num_frames)

    # Write the signal data to the WAV file
    for sample in scaled_signal_data:
        packed_sample = struct.pack('<h', sample)
        wav_file.writeframes(packed_sample)

print("WAV file created successfully.")

