#include <stdio.h>
#include "crc32.h"

int main() {
	unsigned char data[] = "halloweeks";
	
	unsigned int crc = crc32(data, 10);
	
	printf("%08x\n", crc);
	return 0;
}
