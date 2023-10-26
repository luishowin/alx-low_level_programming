#include <stdio.h>

unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;
    
    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '\0'; i++) {
        char c = b[i];
        
        if (c == '0') {
            // Shift the result to the left and add 0
            result <<= 1;
        } else if (c == '1') {
            // Shift the result to the left and add 1
            result = (result << 1) | 1;
        } else {
            // Invalid character (not '0' or '1')
            return 0;
        }
    }
    
    return result;
}

int main() {
    const char *binary_str = "101010"; // Replace with your binary string
    unsigned int decimal_value = binary_to_uint(binary_str);
    
    if (decimal_value == 0 && binary_str[0] != '0') {
        printf("Invalid binary string.\n");
    } else {
        printf("Binary: %s is equivalent to Decimal: %u\n", binary_str, decimal_value);
    }
    
    return 0;
}
