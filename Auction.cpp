#include "Auction.h"
#include <iostream>
using namespace std;
#include <cstring>


Auction::Auction() {

}
Auction::Auction(int aId, char adescription, int aquantity, Registered_users* Rsu) {

    auctionID = aId;
    description = adescription;
    quantity = aquantity;
    Ruser = Rsu;
}
void Auction::creatauction() {

}
void Auction::updateauction() {

}
void Auction::deleteauction() {

}
Auction::~Auction() {

}
