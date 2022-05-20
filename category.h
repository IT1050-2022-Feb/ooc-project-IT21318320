#include <iostream>
using namespace std; 
//Category class
class Category 
{
private:
    int categoryId;
    string categorydescription;
    Item* item[2];
public:
    Category();
    Category(int caId, string cdescription,Item*it1, Item*it2);
    void addcategory();
    void updatecategory();
    void delectcategory();
};
