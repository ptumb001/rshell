#ifndef __SEMICOLON_H__
#define __SEMICOLON_H__

#include "connector.h"

class Semicolon : public Connector {
  public:
    string value = ";";
    Semicolon() : Connector() {};
    Semicolon(Base* left, Base* right);
    
    bool execute();
};
#endif
