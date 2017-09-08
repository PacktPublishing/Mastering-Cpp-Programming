#include "Thread.h"

int main ( ) {

	Thread producer( ThreadType::PRODUCER );
	Thread consumer( ThreadType::CONSUMER );

	producer.start();
	consumer.start();

	producer.join();
	consumer.join();

	return 0;
}
