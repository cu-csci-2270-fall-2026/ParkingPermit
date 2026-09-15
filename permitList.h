#ifndef INT_PERMIT_LIST_H
#define INT_PERMIT_LIST_H

#include <vector> 
#include "parkingPermit.h"
using namespace std;

class PermitList {
private:
    vector<ParkingPermit*> permits;
    void PrintPermit();

    bool getLongestHeldPermit();
    void cleanUpList();

public:
    PermitList();
    ~PermitList();

    void addNew(int permitNumber, string studentName, char zone, int daysHeld = 0);

    int getCount();

    void PrintAll();

    string runRewards();

};
#endif // INT_PERMIT_LIST_H