target_sum = 0x46c6f48

# Open a text file for writing
with open('output.txt', 'w') as file:
    # Iterate through all possible combinations of 4 characters
    for c1 in range(256):
        for c2 in range(256):
            for c3 in range(256):
                for c4 in range(256):
                    current_sum = c1 + c2 + c3 + c4

                    # Check if the current combination matches the target sum
                    if current_sum == target_sum:
                        # Convert ASCII values to characters
                        word = chr(c1) + chr(c2) + chr(c3) + chr(c4)

                        # Write the found word to the file
                        file.write(f"Found a word: {word}\n")

# Print a message indicating the completion
print("Output written to 'output.txt'")
