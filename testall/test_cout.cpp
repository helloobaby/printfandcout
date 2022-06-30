#include <cstdio>
#include <thread>
#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

void cout2file() {
	ofstream file("cout.txt");
	cout.rdbuf(file.rdbuf());
}

void thread_proc() {
	while (1) {
		cout << "111111111111111111111111111111" << endl;
	}
}

void thread_proc2() {
	while (1) {
		cout << "222222222222222222222222222222" << endl;
	}
}

void test_cout() {
	thread t1(thread_proc);
	//thread t2(thread_proc2);
	t1.detach();
	//t2.detach();
}