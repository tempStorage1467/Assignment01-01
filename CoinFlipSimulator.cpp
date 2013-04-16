/*
 * File: CoinFlipSimulator.cpp
 * --------------------------
 * Name: Eric Beach
 * Section: SCPD, Aaron Broder <abroder@stanford.edu>
 * Copyright 2013 Eric Beach <ebeach@google.com>
 * Assignment 1 - Pt. 1 - Consecutive Heads
 * This file contains the methods for CoinFlipSimulator.
 *
 * This file lightly linted using:
 * http://google-styleguide.googlecode.com/svn/trunk/cpplint/cpplint.py
 */

#include <iostream>
#include <vector>
#include "CoinFlipSimulator.h"
#include "random.h"
#include "console.h"

using namespace std;

/*
 * Simulate the flipping of a coin and return CoinValue to represent the
 *   outcome.
 */
CoinValue CoinFlipSimulator::simulateCoinFlip() {
    if (randomInteger(0, 1) == 1) {
        return HEADS;
    } else {
        return TAILS;
    }
}

/*
 * Get the number of times the coin had to be flipped before there were
 *   a total of DESIRED_NUM_CONSECUTIVE_HEADS heads in a row.
 */
int CoinFlipSimulator::getNumFlipsRequired() {
    return numFlipsRequired;
}

/*
 * Determine the number of times a coin needs to be flipped in order to
 *   obtain DESIRED_NUM_CONSECUTIVE_HEADS heads in a row.
 */
void CoinFlipSimulator::determineNumFlipsRequired() {
    flipOutcomes.clear();
    int consecutiveHeads = 0;
    while (consecutiveHeads < DESIRED_NUM_CONSECUTIVE_HEADS) {
        CoinValue flipResult = simulateCoinFlip();
        flipOutcomes.push_back(flipResult);
        if (flipResult == HEADS) {
            consecutiveHeads++;
        } else {
            consecutiveHeads = 0;
        }
        numFlipsRequired++;
    }
}

/*
 * Print the results of the most recent coin flipping simulation
 *   to the console.
 */
void CoinFlipSimulator::printSimulation() {
    for (int i = 0; i < flipOutcomes.size(); i++) {
        if (flipOutcomes[i] == HEADS) {
            cout << "heads" << endl;
        } else {
            cout << "tails" << endl;
        }
    }
    cout << "It took " << numFlipsRequired << " flips to get "
        << DESIRED_NUM_CONSECUTIVE_HEADS << " consecutive heads." << endl;
}

/*
 * Set the random number seed that controls the coin flip simulation.
 *    This is useful for testing.
 */
void CoinFlipSimulator::setFlipSeed(int seed) {
    setRandomSeed(seed);
}
