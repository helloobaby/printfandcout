#include <cstdio>
#include <thread>
#include <iostream>

using namespace std;

void printf2file() {
	freopen("printf.txt", "w", stdout);
}

void thread_procs() {
	while (1) {
		printf("111111111111111111111111111111\n");
	}
}

void thread_proc2s() {
	while (1) {
		printf("222222222222222222222222222222\n");
	}
}

void test_printf() {
	thread t1(thread_procs);
	thread t2(thread_proc2s);
	t1.detach();
	t2.detach();
}