#include <iostream>
using namespace std; 
//Item class
class Item
{
private:
    int itemId;
    string itemDescription;
    Auction* Au;
public:
    Item();
    Item(int IId,string iDescription);
    void additem();
    void updateItem();
};