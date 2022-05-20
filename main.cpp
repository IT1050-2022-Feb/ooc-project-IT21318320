#include <iostream>
using namespace std;

int main(){
  // Create object of class Unregistered_user.
  Unregistered_users unu1;

  // Create object of class Registered_users.
  Registered_users regUser1;

  // Create object of class Admin.
  Admin admin1;

  // Create object of class Custmor_Support.
  Custmor_Support support1;

  // Create object of class Category.
  Category category1;

  // Create object of class Auction.
  Auction auction1;

  // Create object of class Item.
  Item item1;

  // Create object of class Bid.
  Bid bid1;
  
  // Create object of class Message.
  Message msg1;

  // Create object of class Issue.
  Issue issue1;

  // Create object of class Feedback.
  Feedback feedback1;

  // Create object of class Invoice inside the the class Payment.
  Payment *payment1;

  payment1 = new Payment(1);
  payment1 -> displayInvoice();

  return 0;
}