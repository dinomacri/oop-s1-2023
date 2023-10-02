// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed! e" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed! e" << std::endl;
        }
    }

    void testMixtureOfBoth() {
      Addition addition;
      if (addition.add(-1, 1) != 0) {
          std::cout << "Test 3 failed!" << std::endl;
      }
    }

    void testZeros() {
      Addition addition;
      if (addition.add(0, 0) != 0) {
          std::cout << "Test 4 failed!" << std::endl;
      }
    }
    void testBigPositive() {
      Addition addition;
      if (addition.add(10000000, 10000000) != 20000000) {
          std::cout << "Test 5 failed!" << std::endl;
      }
    }
    void testBigNegative() {
      Addition addition;
      if (addition.add(-10000000, -10000000) != -20000000) {
          std::cout << "Test 5 failed!" << std::endl;
      }
    }

    // Add other test functions here
};
