#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <string>

using namespace std;

enum ThreadType {
	PRODUCER,
	CONSUMER
};

class Thread {
private:
	static mutex locker;
	static condition_variable untilReady;
	static bool ready;
	static queue<int> appQueue;
	thread *pThread;
	ThreadType threadType;
	bool stopped;
	string name;

	void run();
public:
	Thread(ThreadType typeOfThread);
	~Thread();
	void start();
	void stop();
	void join();
	void detach();
};
