#include <iostream>
#include <fstream>
#include <string>

#include "code.h"
#include "interface.h"

using namespace std;

int main()
{
    while (1) 
    {
    Interface interface;
    interface.Ask();
    interface.Interpretation();
    }

    return 0;
}