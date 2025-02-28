#include <stdint.h>

typedef union {
	uint32_t Val;
	uint16_t w[2];
	uint8_t v[4];
} IPV4_ADDR;

typedef struct __attribute__((packed)) {
	IPV4_ADDR netIPAddress;
	IPV4_ADDR netMaskAddress;
	IPV4_ADDR netGatewayAddress;
} APP_CONFIG;

typedef struct {
	char netDHCP;
	APP_CONFIG config;
} APP_DATA;


void functiontest(IPV4_ADDR* a) {
	
}


int main() {

	APP_DATA data;

	functiontest(&data.config.netIPAddress);
	return 0;
}
