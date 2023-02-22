#include <iostream>
#include "BunnyLib.hpp"
#include "BunnyLibPriv.hpp"

void BunnyLib::HelloWorld(const char * s)
{
    BunnyLibPriv *theObj = new BunnyLibPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void BunnyLibPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

