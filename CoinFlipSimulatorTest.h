/*
 * File: CoinFlipSimulatorTest.h
 * --------------------------
 * Name: Eric Beach
 * Section: [TODO: enter section leader here]
 * Copyright 2013 <Eric Beach>
 * Header file containing prototype information for the CoinFlipSimulatorTes
 * class.
 *
 * This file lightly linted using:
 * http://google-styleguide.googlecode.com/svn/trunk/cpplint/cpplint.py
 */

#ifndef COINFLIPSIMULATORTEST_H_
#define COINFLIPSIMULATORTEST_H_

#include "CoinFlipSimulator.h"

/*
 * Class to test the methods of CoinFlipSimulator.
 */
class CoinFlipSimulatorTest {
 public:
    // Method to execute the tests in this test suite.
    void runTests();
 private:
    // Helper method to test whether two integers equal.
    bool assertEquals(int expected, int received);

    // Test the CoinFlipSimulator::simulateCoinFlip() method.
    void testSimulateCoinFlip();

    // Test the CoinFlipSimulator::determineNumFlipsRequired() method.
    void testDetermineNumFlipsRequired();
};

#endif  // COINFLIPSIMULATORTEST_H_
