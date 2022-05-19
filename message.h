//Class definition of the message class.
class Message
{
  protected:
    int messageID;
    char messageType[50];
    Registered_user* Ruser;

  public:
    Message();
    Message(int pmessageID, char pmessageType[], Registered_user *pRuser);
    void saveMessage();
    void diplayMessage();
    ~Message();
};