#include "issue.h"
#include <cstring>

// Implementation of the methods of the class issue.
Issue::Issue() {
  messageID = 0;
  strcpy(messageType, "");
  strcpy(status, "");
}

Issue::Issue(int cMessageID, char cMessageType[], char pstatus[]) {
  messageID = cMessageID;
  strcpy(messageType, cMessageType);
  strcpy(status, pstatus);
}

void Issue::saveIssueType() {}

void Issue::displayStatus() {}

Issue::~Issue() {}