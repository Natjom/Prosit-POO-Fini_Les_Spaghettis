#ifndef CODE_H
#define CODE_H

#include <string>
using namespace std;

class Code
{
private:
    string code;
    string fileName;
    int key_cesar;
    int key_xor;

public:
    Code() {}
    Code(string fileName, int key_cesar, int key_xor)
    {
        this->fileName = fileName;
        this->key_cesar = key_cesar;
        this->key_xor = key_xor;
    }
    ~Code() {};

    void GetCode();
    void SetCode();
    void PrintCode();
    void CesarEncode();
    void CesarDecode();
    void XorEncode();
    void XorDecode();
};

#endif // CODE