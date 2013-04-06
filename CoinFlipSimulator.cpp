//
//  CoinFlipSimulator.cpp
//  Consecutive Heads
//
//  Created by Eric Beach on 4/6/13.
//
//

#include <iostream>
#include <vector>
#include "CoinFlipSimulator.h"
#include "random.h"
#include "console.h"

using namespace std;

CoinValue CoinFlipSimulator::simulateCoinFlip() {
    if (randomInteger(0, 1) == 1) {
        return HEADS;
    } else {
        return TAILS;
    }
}
    
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
    
void CoinFlipSimulator::setFlipSeed(int seed) {
    setRandomSeed(seed);
}