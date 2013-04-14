/*
 * File: CoinFlipSimulatorTest.cpp
 * --------------------------
 * Name: Eric Beach
 * Section: SCPD, Aaron Broder <abroder@stanford.edu>
 * Copyright 2013 Eric Beach <ebeach@google.com>
 * This file tests the functions in the CoinFlipSimulator class.
 *
 * This file lightly linted using:
 * http://google-styleguide.googlecode.com/svn/trunk/cpplint/cpplint.py
 */

#include "CoinFlipSimulatorTest.h"
#include <iostream>

using namespace std;

/*
 * Run test suite.
 */
void CoinFlipSimulatorTest::runTests() {
    testDetermineNumFlipsRequired();
    testSimulateCoinFlip();
}

/*
 * Compare whether two ints are equal for testing purposes.
 */
bool CoinFlipSimulatorTest::assertEquals(int expected, int received) {
    if (expected == received) {
        return true;
    } else {
        cout << "TEST FAILURE -- Expected: " << expected << ", Received: " <<
        received << endl;
        return false;
    }
}

/*
 * Test the method that simulates a coin flip.
 */
void CoinFlipSimulatorTest::testSimulateCoinFlip() {
    CoinFlipSimulator simulator = CoinFlipSimulator();
    simulator.setFlipSeed(10);
    assertEquals(TAILS, simulator.simulateCoinFlip());
    assertEquals(HEADS, simulator.simulateCoinFlip());
    assertEquals(TAILS, simulator.simulateCoinFlip());
    assertEquals(TAILS, simulator.simulateCoinFlip());
}

/*
 * Test the method that calculates the number of flips required to
 *   obtain 3 heads in a row.
 */
void CoinFlipSimulatorTest::testDetermineNumFlipsRequired() {
    CoinFlipSimulator simulator = CoinFlipSimulator();
    simulator.setFlipSeed(9);
    simulator.determineNumFlipsRequired();
    assertEquals(16, simulator.getNumFlipsRequired());
    simulator.determineNumFlipsRequired();
    assertEquals(30, simulator.getNumFlipsRequired());
}
