#include "pch.h"
#include "Time.h"
#include <iostream>
#include <chrono>

Time::Time()
{
}


Time::~Time()
{
}


using namespace std;
using namespace std::chrono;

void Time::start() {
	startingTime = high_resolution_clock::now();
}

void Time::stop() {
	endingTime = high_resolution_clock::now();
}

long Time::time() {

	return duration_cast<nanoseconds>(Time::endingTime - Time::startingTime).count();

}