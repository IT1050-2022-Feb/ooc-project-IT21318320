//Class definition of the invoice class.
class Invoice {
  private:
    int invoiceNumber;
    float paidamount;
    int itemID;
    int userId;

  public:
    Invoice();
    Invoice(int no);
    void setInvoiceDetails(float ppaidamount, int pitemID, int puserId);
    void printInvoice();
    void display();
    ~Invoice();
};