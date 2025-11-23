#include <stdio.h>
#include "crc32.h"

int main() {
	unsigned char data[] = "halloweeks";
	
	crc32_t crc = crc32(data, 10);
	
	printf("%08x\n", crc);
	return 0;
}

