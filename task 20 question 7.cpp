#include <stdio.h>

// Define a bit-field structure for a byte (8 bits)
struct Byte {
    unsigned int bits : 8;
};

// Define a union to access a 4-byte unsigned integer as 4 separate bytes
union UIntToHex {
    unsigned int value;
    struct Byte bytes[4];  // access each byte individually
};

int main() {
    union UIntToHex converter;

    // Input an unsigned int
    printf("Enter a 4-byte unsigned integer: ");
    scanf("%u", &converter.value);

    // Display hexadecimal representation (little endian order)
    printf("\nHexadecimal representation (byte by byte):\n");
    for (int i = 3; i >= 0; i--) {
        printf("Byte %d: 0x%02X\n", 3 - i, converter.bytes[i].bits);
    }

    // Display full value in hex
    printf("\nFull Hex: 0x%08X\n", converter.value);

    return 0;
}

