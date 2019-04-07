#pragma once
#include <iostream>
#include <chrono>


using namespace std;
using namespace std::chrono;

class Time {
	
	
	
	public:
	high_resolution_clock::time_point startingTime;
	high_resolution_clock::time_point endingTime;

	Time();

	~Time();

	void start();

	void stop();

	long time();
};
