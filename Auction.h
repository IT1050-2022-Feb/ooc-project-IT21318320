//Auction class
class Auction 
{
private:
    int auctionID;
    string description;
    int quantity;
    Registered_users* Ruser;
public:
    Auction();
    Auction(int aId,char adescription,int aquantity, Registered_users* Rsu);
    void creatauction();
    void updateauction();
    void deleteauction();
    ~Auction();
};
