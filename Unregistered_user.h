// Unregistered user class
#include <iostream>
using namespace std;

class Unregistered_user
{
protected:
    char name[];
    char email[] ;
public:
    Unregistered_user();
    Unregistered_user(char unname[], char unemail[]);
    void singup();
    void browse();
    ~Unregistered_user();
};