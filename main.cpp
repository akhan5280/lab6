/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "IntListTester.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	IntListTester tester;    //TestSuite myTester;
	tester.runTests();       //myTester.runTests();

	return (0);

}
