//
//  CoinFlipSimulator.h
//  Consecutive Heads
//
//  Created by Eric Beach on 4/6/13.
//
//

#ifndef __Consecutive_Heads__CoinFlipSimulator__
#define __Consecutive_Heads__CoinFlipSimulator__

#include <vector>
using namespace std;

enum CoinValue {
    HEADS,
    TAILS
};

class CoinFlipSimulator {
public:
    void determineNumFlipsRequired();
    void printSimulation();
    
    // used for testing
    void setFlipSeed(int seed);
    
private:
    int numFlipsRequired = 0;
    const int DESIRED_NUM_CONSECUTIVE_HEADS = 3;
    vector<CoinValue> flipOutcomes;
    CoinValue simulateCoinFlip();
};

#endif /* defined(__Consecutive_Heads__CoinFlipSimulator__) */
