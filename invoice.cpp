#include "invoice.h"
#include <iostream>
using namespace std;

// Implementation of the methods of the class invoice.
Invoice::Invoice(){
  invoiceNumber = 0;
  paidamount = 0;
  itemID = 0;
  userId = 0;
}

Invoice::Invoice(int no) {
  invoiceNumber = no;
}

void Invoice::setInvoiceDetails(float ppaidamount, int pitemID, int puserId){
  paidamount = ppaidamount;
  itemID = pitemID;
  userId = puserId;
}

void Invoice::printInvoice() {}

void Invoice::display() {}

Invoice::~Invoice() {}