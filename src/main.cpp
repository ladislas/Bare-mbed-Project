#include "mbed.h"
#include "HelloWorld.h"

HelloWorld hello;

int main(void) {

	hello.start();

	while (true) {
		printf("Hello, World!\n");
		rtos::ThisThread::sleep_for(1000);
	}

	return 0;
}
