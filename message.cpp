#include "message.h"
#include <cstring>

// Implementation of the methods of the class message.
Message::Message(){
  messageID = 0;
  strcpy(messageType, "");
}

Message::Message(int pmessageID, char pmessageType[], Registered_user *pRuser){
  messageID = pmessageID;
  strcpy(messageType, pmessageType);
  Ruser = pRuser;
}

void Message::saveMessage() {}

void Message::diplayMessage() {}

Message::~Message() {}