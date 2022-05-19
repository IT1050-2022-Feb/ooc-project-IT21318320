#include "message.h"

//Class definition of the feedback class.
class Feedback :public Message
{
  private:
    char rating[20];
  
  public:
    Feedback();
    Feedback(int cMessageID, char cMessageType[], char prating[]);
    void saveRating();
    void displayRating();
    ~Feedback();
};