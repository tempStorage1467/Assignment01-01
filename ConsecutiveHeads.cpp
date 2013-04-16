/*
 * File: ConsecutiveHeads.cpp
 * --------------------------
 * Name: Eric Beach
 * Section: SCPD, Aaron Broder <abroder@stanford.edu>
 * Copyright 2013 Eric Beach <ebeach@google.com>
 * Assignment 1 - Pt. 1 - Consecutive Heads
 * This file is the starter project for the Consecutive Heads problem.
 * This file can run a test suite for the project and then execute
 * the coin flip simulation, printing out the result.
 *
 * This file lightly linted using:
 * http://google-styleguide.googlecode.com/svn/trunk/cpplint/cpplint.py
 */

#include <iostream>
#include "console.h"
#include "CoinFlipSimulator.h"
#include "CoinFlipSimulatorTest.h"

using namespace std;

/*
 * Execute test suite.
 */
void runTests() {
    CoinFlipSimulatorTest testSuite = CoinFlipSimulatorTest();
    testSuite.runTests();
}

/*
 * Optionally execute test suite, then execute coin flip simulation.
 * Print out the results of the simulation.
 */
int main() {
    // runTests() is turned off by default as it removes the randomness
    //   of the simulation. Uncomment in order to run the tests it contains.
    // runTests();

    CoinFlipSimulator simulator = CoinFlipSimulator();
    simulator.determineNumFlipsRequired();
    simulator.printSimulation();
    return 0;
}
