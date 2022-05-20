#include "Registered User.h"
#include <iostream>
using namespace std;
#include <cstring>

Registered_users::Registered_users() {

}
Registered_users::Registered_users(int uid, char uname, char upassword, Bid* B, Message* M)
{
    userid = uid;
    username = uname;
    password = upassword;
    bid =  B;
    msg = M;
}
void Registered_users::login() {

}
void Registered_users::updateProfile() {

}
Registered_users::~Registered_users() {

}

