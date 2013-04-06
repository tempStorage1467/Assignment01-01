/*
 * File: ConsecutiveHeads.cpp
 * --------------------------
 * Name: Eric Beach
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the Consecutive Heads problem.
 */

#include <iostream>
#include "console.h"
#include "CoinFlipSimulator.h"

using namespace std;

int main() {
    CoinFlipSimulator simulator = CoinFlipSimulator();
    simulator.determineNumFlipsRequired();
    simulator.printSimulation();
    return 0;
}
