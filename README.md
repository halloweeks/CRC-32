# CRC-32
A C language implementation of the CRC-32 algorithm using the polynomial 0xEDB88320. Includes a pre-computed lookup table for efficient checksum computation.

## Example 
```c
#include <stdio.h>
#include "crc32.h"

int main() {
	unsigned char data[] = "halloweeks";
	
	crc32_t crc = crc32(data, sizeof(data) - 1);
	
	printf("crc: %08x\n", crc);
	return 0;
}
```

## Example 2
```c
#include <stdio.h>
#include "crc32.h"

int main() {
	unsigned char data1[] = "hallo";
	unsigned char data2[] = "weeks";
	
	crc32_t crc = crc32_init();
	
	crc = crc32_update(crc, data1, 5);
	crc = crc32_update(crc, data2, 5);
	
	crc = crc32_final(crc);
	
	printf("crc: %08x\n", crc);
	return 0;
}
```

## CRC32 Table Generator 
```c
unsigned int crc32_table[256] = {0};

void make_crc_table(unsigned int crcTable[]) {
    const unsigned int POLYNOMIAL = 0xEDB88320;

    for (unsigned int b = 0; b < 256; ++b) {
        unsigned int remainder = b;
        for (unsigned int bit = 0; bit < 8; ++bit) {
            if (remainder & 1)
                remainder = (remainder >> 1) ^ POLYNOMIAL;
            else
                remainder >>= 1;
        }
        crcTable[b] = remainder;
    }
}
```

