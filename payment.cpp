#include "payment.h"
#include <iostream>
using namespace std;
#include <cstring>

// Implementation of the methods of the class payment.
Payment::Payment() {
  invoiceNo[0] = new Invoice(001);
  invoiceNo[1] = new Invoice(002);
}

Payment::Payment(int no1){
  invoiceNo[2] = new Invoice(no1);
}

void Payment::setpaymentDetails(int ppaymentId, float ppayamount, char ptype[], int pcardnumber, int pexdate, char pcardholdername[]) {
  paymentId = ppaymentId;
  payamount = ppayamount;
  strcpy(type, ptype);
  cardnumber = pcardnumber;
  expdate = pexdate;
  strcpy(cardholdername, pcardholdername);
}

void Payment::displayDetails() {}

void Payment::validateDetails() {}

void Payment::authorizePayment(){}

void Payment::displayInvoice(){
  for(int count=0; count < 100; count++)
    {
      invoiceNo[count] -> display();
    }
}

Payment::~Payment(){
  for(int count=0; count < 100; count++)
    {
      delete invoiceNo[count];
    }
}