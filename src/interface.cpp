#include <fstream>
#include "interface.h"

Interface::Interface() 
{
    int choixED;
    int choixCX;
    int c;
    int x;
    string fileName;
    Code code;
}

void Interface::Ask()
{
    cout << "Bonjour.\n1 = Encoder\n2 = Decoder" << endl;
    cin >> choixED;
    cout << endl;
    cout << "Nom du fichier ?" << endl;
    cin >> fileName;
    cout << endl;
    cout << "Encoder.\n1 = Cesar\n2 = XOR\n3 = Cesar + XOR" << endl;
    cin >> choixCX;
    cout << endl;
    if (choixCX == 1 || choixCX == 3)
    {
        cout << "Clef cesar ?" << endl;
        cin >> c;
    }
    if (choixCX == 2 || choixCX == 3)
    {
        cout << "Clef xor ?" << endl;
        cin >> x;
    }
    cout << endl;
}

void Interface::Interpretation() 
{
    code = Code(fileName, c, x);


    if (choixCX == 1)
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

    else if (choixCX == 2)
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

    else if (choixCX == 3)
    {
        if (choixED == 1)
        {
            cout << "Both Encode" << endl;
            code.CesarEncode();
            code.XorEncode();
        }
        else if (choixED == 2)
        {
            cout << "Both decode" << endl;
            code.XorDecode();
            code.CesarDecode();
        }
    }
    cout << "\n\n\n\n\n\n\n\n" << endl;
    
}


