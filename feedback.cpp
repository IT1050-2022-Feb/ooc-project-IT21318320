#include "feedback.h"
#include <cstring>

// Implementation of the methods of the class feedback.
Feedback::Feedback() {
  messageID = 0;
  strcpy(messageType, "");
  strcpy(rating, "");
}

Feedback::Feedback(int cMessageID, char cMessageType[], char prating[]) {
  messageID = cMessageID;
  strcpy(messageType, cMessageType);
  strcpy(rating, prating);
}

void Feedback::saveRating() {}

void Feedback::displayRating() {}

Feedback::~Feedback() {}