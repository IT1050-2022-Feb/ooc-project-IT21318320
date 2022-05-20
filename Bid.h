//Bid class
#include <iostream>
using namespace std;

class Bid 
{
private:
    int bidId;
    float bidAmount;
    Registered_user* Ruser;
public:
    Bid();
    Bid(int bid,float bAmount,Registered_user*Rsu);
    void creatBid();
    void updateBid();
    void deleteBid();
    ~Bid();
};