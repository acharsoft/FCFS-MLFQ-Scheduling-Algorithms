#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class process
{
public:
	int CPUBurstAndIO[100];
	int currentCPUBurst;
	int currentIO;
	int currentState; //Waiting, Executing, IO, Completed
};

class Algorithm
{
public:
	Algorithm();
	void run();
	void print();
private:
	process *next;//use only one pointer
};

Algorithm::Algorithm() {

	next = 0;
	process p1{ {4, 15, 5, 31, 6, 26, 7, 24, 6, 41, 4, 51, 5, 16, 4}, 0, 0, 0 };
	process p2{ {9, 28, 11, 22, 15, 21, 12, 28, 8, 34, 11, 34, 9, 29, 10, 31, 7}, 0, 0, 0 };
	process p3{ {24, 28, 12, 21, 6, 27, 17, 21, 11, 54, 22, 31, 18}, 0, 0, 0 };
	process	p4{ {15, 35, 14, 41, 16, 45, 18, 51, 14, 61, 13, 54, 16, 61, 15}, 0, 0, 0 };
	process p5{ {6, 22, 5, 21, 15, 31, 4, 26, 7, 31, 4, 18, 6, 21, 10, 33, 3}, 0, 0, 0 };
	process p6{ {22, 38, 27, 41, 25, 29, 11, 26, 19, 32, 18, 22, 6, 26, 6}, 0, 0, 0};
	process p7{ {4, 36, 7, 31, 6, 32, 5, 41, 4, 42, 7, 39, 6, 33, 5, 34, 6, 21, 9}, 0, 0, 0 };
	process p8{ {5, 14, 4, 33, 6, 31, 4, 31, 6, 27, 5, 21, 4, 19, 6, 11, 6}, 0, 0, 0 };
}

void Algorithm::run() {
	
}

void Algorithm::print() {
	cout << "Current Time: " << endl;
	cout << "Now Running: " << endl;
	cout << "------------------------------------" << endl;
	cout << "Ready Queue: Process Burst" << endl;
	cout << "------------------------------------" << endl;
	cout << "Now in I/O: Process Remaining I/O Time" << endl;
	cout << "*********************************************************" << endl;
}

int main() {
	Algorithm FCFS;
	FCFS.run();
	FCFS.print();
	return 0;
}