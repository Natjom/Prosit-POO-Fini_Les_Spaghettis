#include <iostream>
#include <fstream>
#include <string>

#include "code.h"

using namespace std;

int main()
{
    int choixED, choixCX, c, x;
    string fileName;

    cout << "Bonjour.\n1 = Encoder\n2 = Decoder" << endl;
    cin >> choixED;
    // choixED = 2;
    cout << endl;

    cout << "Nom du fichier ?" << endl;
    cin >> fileName;
    // fileName = "test.txt";
    cout << endl;

    cout << "Encoder.\n1 = Cesar\n2 = XOR\n3 = Cesar + XOR" << endl;
    cin >> choixCX;
    // choixCX = 1;
    cout << endl;

    if (choixCX == 1 || choixCX == 3)
    {
        cout << "Clef cesar ?" << endl;
        cin >> c;
        // c = 5;
    }
    if (choixCX == 2 || choixCX == 3)
    {
        cout << "Clef xor ?" << endl;
        cin >> x;
        // x = 5;
    }

    cout << endl;

    Code code(fileName, c, x);

    if (choixCX == 1 || choixCX == 3)
    {
        if (choixED == 1)
        {
            cout << "Cesar Encode" << endl;
            code.CesarEncode();
        }
        else if (choixED == 2)
        {
            cout << "Cesar Decode" << endl;
            code.CesarDecode();
        }
    }

    if (choixCX == 2 || choixCX == 3)
    {
        if (choixED == 1)
        {
            cout << "Xor Encode" << endl;
            code.XorEncode();
        }
        else if (choixED == 2)
        {
            cout << "Xor decode" << endl;
            code.XorDecode();
        }
    }

    return 0;
}