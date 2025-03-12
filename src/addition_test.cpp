/*
* addition_test.cpp: Run simple unit test
* Copyright (C) 2025 Jean-Marc Berthommé
*/

#include "CppUnitLite/TestHarness.h"
#include <iostream>

int Addition(int a, int b) {
    return a + b;
}

TEST(testAdd, test1) {
    CHECK_EQUAL(5, Addition(2, 3));
    CHECK_EQUAL(0, Addition(-2, 2));
}

TEST(testAdd, test2) {
    CHECK_EQUAL(3, Addition(2, 1));
    CHECK_EQUAL(-1, Addition(-2, 1));
}

/* ************************************************************************* */
int main() { TestResult tr; return TestRegistry::runAllTests(tr);}
/* ************************************************************************* */