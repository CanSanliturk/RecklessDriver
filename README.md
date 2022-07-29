# Reckless Driver

This is a repository which I use for practicing Object Oriented Analysis, Design, and Programming concepts using amazing lecture of Umar Lone, [and this is the course link](https://www.udemy.com/course/oo-analysis-design-programming/).

## Diagrams

This will be added

## How to compile

I don't know why would you like to do something like that, but you might want to compile this project. Right now, I am too lazy to write a makefile, but you can find the command I use to compile this project below. You can copy-paste the first line for compiling the source code with -O3 optimization flag using C++ 20 with g++, and manually write the second one for calling the executable. Or write the first one manually, it's your call.

	* g++ -std=c++20 -O3 -o main.o src/FireHydrant.cpp src/GameManager.cpp src/Player.cpp src/PlayerVehicle.cpp src/Sedan.cpp src/SideObject.cpp src/TrafficCar.cpp main.cpp

	* ./main.o