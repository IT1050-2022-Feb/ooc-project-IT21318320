#include "message.h"

//Class definition of the issue class.
class Issue :public Message
{
  private:
    char status[10];

  public:
    Issue();
    Issue(int cMessageID, char cMessageType[], char pstatus[]);
    void saveIssueType();
    void displayStatus();
    ~Issue();
};