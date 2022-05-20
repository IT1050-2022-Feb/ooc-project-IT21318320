// Registered users class
class Registered_users :public Unregistered_users
{
private :
    int userid;
    char username;
    char password;
    Bid* bid;
    Message* msg;
public:
    Registered_users();
    Registered_users(int uid,char uname,char upassword, Bid* B, Message* M);
    void login();
    void updateProfile();
    ~Registered_users();
};
