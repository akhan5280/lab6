/**
*	@file IntListTester.h
*	@author Adam Khan
*	@date 10/31/18
*	@brief Implements IntListTester methods
*/
#include "IntListTester.h"
#include <iostream>
using namespace std;

void IntListTester::runTests() {
  cout << "Running tests....\n";
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();
  test8();
  test9();
  test10();
  test11();
  test12();
  test13();
  test14();
  test15();
  test16();
  test17();
  test18();
  test19();
  test20();
  cout << "Finished\n";
}

IntListTester::IntListTester() {
}

void IntListTester::printList(vector<int> list) {
  for (int i=0;i<list.size();i++) {
    cout << "(" << list[i] << ") -> ";
  }
  cout << "nullptr\n";
}

void IntListTester::test1() {
  bool isPassed = false;
  LinkedListOfInts testList;
  isPassed = testList.size()==0;
  cout << "Test 1: size of empty list is zero: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test2() {
  bool isPassed = false;
  LinkedListOfInts testList;
  isPassed = testList.isEmpty();
  cout << "Test 2: isEmpty returns true for empty list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test3() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(5);
  testList.addFront(6);
  testList.addFront(7);
  testList.addFront(5);
  isPassed = !testList.isEmpty();
  cout << "Test 3: isEmpty returns false for nonempty list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test4() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(5);
  isPassed = testList.size()==1;
  cout << "Test 4: addFront increments size by 1: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test5() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(5);
  testList.addFront(4);
  isPassed = testList.toVector()[0] == 4;
  cout << "Test 5: addFront adds value to front of list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test6() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront('a');
  testList.addFront(true);
  testList.addFront(2.4);
  isPassed = testList.toVector().size() == 0;
  cout << "Test 6: addFront only accepts ints: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test7() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addBack(5);
  isPassed = testList.size()==1;
  cout << "Test 7: addBack increments size by 1: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test8() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addBack(5);
  testList.addBack(4);
  testList.addBack(7);
  isPassed = testList.toVector()[0] == 5;
  cout << "Test 8: addBack adds value to back of list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test9() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addBack('a');
  testList.addBack(true);
  testList.addBack(2.4);
  isPassed = testList.toVector().size() == 0;
  cout << "Test 9: addBack only accepts ints: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test10() {
  bool isPassed = false;
  LinkedListOfInts testList;
  isPassed = !testList.removeBack();
  cout << "Test 10: removeBack returns false on empty list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test11() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(4);
  isPassed = testList.removeBack();
  cout << "Test 11: removeBack returns true on nonempty list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test12() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(4);
  testList.addFront(6);
  isPassed = testList.toVector()[0]==6 && testList.toVector().size()==1;
  cout << "Test 12: removeBack removes value from back of list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test13() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(4);
  testList.addFront(6);
  isPassed = testList.size()==1;
  cout << "Test 13: removeBack decrements size by 1: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test14() {
  bool isPassed = false;
  LinkedListOfInts testList;
  isPassed = !testList.removeFront();
  cout << "Test 14: removeFront returns false on empty list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test15() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(4);
  isPassed = testList.removeFront();
  cout << "Test 15: removeFront returns true on nonempty list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test16() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(4);
  testList.addFront(6);
  isPassed = testList.toVector()[0]==4;
  cout << "Test 16: removeFront removes value from front of list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test17() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(4);
  testList.addFront(6);
  isPassed = testList.size()==1;
  cout << "Test 17: removeFront decrements size by 1: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test18() {
  bool isPassed = false;
  LinkedListOfInts testList;
  isPassed = !testList.search(3);
  cout << "Test 18: search returns false for empty list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test19() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(3);
  isPassed = testList.search(3);
  cout << "Test 19: search returns true when value is in list: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}

void IntListTester::test20() {
  bool isPassed = false;
  LinkedListOfInts testList;
  testList.addFront(5);
  isPassed = !testList.search(5.7);
  cout << "Test 20: search only accepts ints: ";
  if (isPassed) {
    cout << "PASSED\n";
  }
  else cout << "FAILED\n";
}








//printList(testList.toVector());
