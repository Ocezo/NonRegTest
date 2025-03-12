/*
* multiply_test.cpp: Run simple unit test
* Copyright (C) 2025 Jean-Marc Berthommé
*/

#include "CppUnitLite/TestHarness.h"
#include <iostream>

double Multiply(double a, double b) {
    return a * b;
}

TEST(testMult, test1) {
    CHECK_EQUAL(8, Multiply(2, 4));
    DOUBLES_EQUAL(1, Multiply(2, 1.0/2), 1e-10);
}

TEST(testMult, test2) {
    CHECK_EQUAL(9, Multiply(3, 3));
    CHECK_EQUAL(0, Multiply(2, 0));
}

/* ************************************************************************* */
int main() { TestResult tr; return TestRegistry::runAllTests(tr);}
/* ************************************************************************* */