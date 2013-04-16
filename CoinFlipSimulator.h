/*
 * File: CoinFlipSimulator.h
 * --------------------------
 * Name: Eric Beach
 * Section: SCPD, Aaron Broder <abroder@stanford.edu>
 * Copyright 2013 Eric Beach <ebeach@google.com>
 * Assignment 1 - Pt. 1 - Consecutive Heads
 * This file prototypes the CoinFlipSimulator class.
 *
 * This file lightly linted using:
 * http://google-styleguide.googlecode.com/svn/trunk/cpplint/cpplint.py
 */

#ifndef COINFLIPSIMULATOR_H_
#define COINFLIPSIMULATOR_H_

#include <vector>
using namespace std;

/*
 * Enum to store whether a coin is facing up (heads) or down (tails).
 */
enum CoinValue {
    HEADS,
    TAILS
};

/*
 * Class to simulate repetitive flipping of a coin in search of a
 *   desired sequence of results.
 */
class CoinFlipSimulator {
 public:
    // determine the number of flips of the coin required in order to
    //    have DESIRED_NUM_CONSECUTIVE_HEADS heads in a row.
    void determineNumFlipsRequired();

    // print the output of the coin flip simulation
    void printSimulation();

    // return the number of coin flips required to have
    //     DESIRED_NUM_CONSECUTIVE_HEADS heads in a row.
    int getNumFlipsRequired();

    // visible for testing
    CoinValue simulateCoinFlip();

    // used for testing
    void setFlipSeed(int seed);

 private:
    // number of coin flips required to reach DESIRED_NUM_CONSECUTIVE_HEADS
    int numFlipsRequired = 0;
    const int DESIRED_NUM_CONSECUTIVE_HEADS = 3;
    
    // results of current simulation of coin flips
    vector<CoinValue> flipOutcomes;
};

#endif  // COINFLIPSIMULATOR_H_
