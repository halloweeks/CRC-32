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


