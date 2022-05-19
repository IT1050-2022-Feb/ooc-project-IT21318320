#include <iostream>
using namespace std;

int main(){
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