#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// toUpper - converte cada caracterio na ASCIIZ string
//         Para uppercase(Caixa superior)
void toUpper(char szTarget[], int nTargetSize){
    for(int nT = 0; nT < ( nTargetSize - 1) && szTarget[nT] != '\0'; nT++){
        szTarget[nT] = toupper(szTarget[nT]);
    }
}

int main(int nNumberofArgs, char* pszArgs[]){
    cout << "This program accepts a string\n"
        << "from the keyboard and echos the\n"
        << "string in all caps.\n" << endl;
        
    // entrada de duas strings
    cout << "Enter string: ";
    char szString[256];
    cin.getline(szString, 256);
    
    // agora converte a string pela toda uppercase
    toUpper(szString, 256);
    
    // e mostra o resultado
    cout << "All caps version: <"
        << szString
        << ">" << endl;
        
    system("PAUSE");
    return 0;
}