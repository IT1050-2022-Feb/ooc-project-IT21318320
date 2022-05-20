#include "customer support.h"
#include <iostream>
using namespace std;
//Customer Support class
class Customer_Support
{
private:
    int representativeId;
public:
    Customer_Support();
    Customer_Support(int repID);
    void solveproblem(Issue*Is);
    ~Customer_Support();
};