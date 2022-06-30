#include <iostream>
#include <cstdio>
#include <thread>

using namespace std;

void cout2file();
void test_cout();

void printf2file();
void test_printf();



int main()
{
    cout2file();
    test_cout();

    //printf2file();
    //test_printf();
    


    this_thread::sleep_for(2s);
    return 0;
}

