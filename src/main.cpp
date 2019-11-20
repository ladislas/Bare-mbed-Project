#include "mbed.h"
#include "HelloWorld.h"

HelloWorld hello;

int main(void) {

	hello.start();

	while (true) {
		printf(hello.world);
		rtos::ThisThread::sleep_for(1000);
	}

	return 0;
}
