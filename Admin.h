#include "Admin.h"
#include <iostream>
using namespace std;
//Admin class
class Admin 
{
private:
    int adminID;
public:
    Admin();
    Admin(int aId);
    void newFeedback(Feedback*F);
    void manageBid();
    void manageauction();
    void manageusers();
    ~Admin();
};