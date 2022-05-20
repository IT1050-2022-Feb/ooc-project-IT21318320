#include 'category.h'
#include <iostream>
using namespace std;
Category::Category() {

}
Category::Category(int caId, string cdescription, Item* it1, Item* it2) {
    categoryId = caId;
    categorydescription = cdescription;
    item[0] = it1;
    item[1] = it2;
}
void Category::addcategory() {

}
void Category::updatecategory(){

}
void Category::delectcategory() {

}
