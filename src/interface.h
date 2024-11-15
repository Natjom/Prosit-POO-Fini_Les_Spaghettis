#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include "code.h"

using namespace std;


class Interface
{
private:
    int choixED;
    int choixCX;
    int c;
    int x;
    string fileName;
    Code code;
public:
    Interface();
    void Ask();
    void Interpretation();

};

#endif // INTERFACE