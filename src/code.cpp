#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include <filesystem>

#include "code.h"

using namespace std;

void Code::GetCode()
{
    string l;
    ifstream fichier(fileName);
    while (getline(fichier, l))
    {
        code += l;
    }
    fichier.close();
};

void Code::SetCode()
{  
    filesystem::remove(fileName);
    ofstream fichier(fileName);
    if (fichier.is_open())
    {
        fichier << code;
        fichier.close();
    }
};

void Code::CesarEncode()
{
    Code::GetCode();
    
    if (!code.empty())
    {
        string tmp = "";
        for (char c : code)
        {
            tmp += bitset<8>((c + key_cesar) % 256).to_string();
            tmp += " ";
        }
        code = tmp;
    }

    Code::SetCode();
};



void Code::CesarDecode() 
{
    Code::GetCode();
    string tmp = "";
    size_t start = 0;
    while (start < code.size()) {
        string byte = code.substr(start, 8);  // Lire 8 bits
        tmp += static_cast<char>(bitset<8>(byte).to_ulong()) - key_cesar;  // Applique le décalage inverse
        start += 9;  // Décale de 8 pour passer à la prochaine séquence binaire
    }
    code = tmp;
    Code::SetCode();
};



void Code::XorEncode()
{
    Code::GetCode();
    if (!code.empty())
    {
        string tmp = "";
        for (char c : code)
        {
            tmp += bitset<8>(c ^ key_xor).to_string();
            tmp += " ";
        }
        code = tmp;
    }
    Code::SetCode();
};


void Code::XorDecode() 
{    
    Code::GetCode();
    string tmp = "";
    size_t start = 0;
    while (start < code.size()) {
        string byte = code.substr(start, 8); // Lire 8 bits
        // cout << byte << endl;
        tmp += static_cast<char>(bitset<8>(byte).to_ulong()) ^ key_xor;
        start += 9;
    }
    code = tmp;
    Code::SetCode();
};

void Code::PrintCode()
{
    cout << code << endl;
};