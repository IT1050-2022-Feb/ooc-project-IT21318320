#include "invoice.h"

//Class definition of the payment class.
class Payment {
  private:
    int paymentId;
    float payamount;
    char type[20];
    int cardnumber;
    int expdate;
    char cardholdername[50];
    Invoice* invoiceNo[100];

  public:
    Payment(); 
    Payment(int no1);
    void setpaymentDetails(int ppaymentId, float ppayamount, char ptype[], int pcardnumber, int pexdate, char pcardholdername[]);
    void displayDetails();
    void validateDetails();
    void authorizePayment();
    void displayInvoice();
    ~Payment();
};

