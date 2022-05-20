#include 'Bid.h'
#include <iostream>
using namespace std;

Bid::Bid() {

}
Bid::Bid(int bid, float bAmount, Registered_users* Rsu) 
{
    bidId = bid;
    bidAmount = bAmount;
    Ruser = Rsu;
}
void Bid::creatBid() {

}
void Bid::updateBid() {

}
void Bid::deleteBid() {

}
Bid::~Bid() {

}
