#include <stdio.h>
#include "crc32.h"

int main() {
	unsigned char data[] = "halloweeks";
	
	unsigned int crc = crc32_compute(data, 10);
	
	printf("CRC: %08x\n", crc);
	
	return 0;
}
