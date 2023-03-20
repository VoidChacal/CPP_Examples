#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

char* concatenateString(const char szSrc1[], const char szSrc2[]){
    
    // aloca uma variedade suficiente de temanho
    int nTargetSize = strlen(szSrc1) + strlen(szSrc2) + 1;
    char* pszTarget = new char[nTargetSize];
    
    // copia a primeira string paro o Target
    int nT;
    for(nT = 0; szSrc1[nT] != '\0'; nT++){
        pszTarget[nT] = szSrc1[nT];
    }
    
    // copia a segunda string para o fim da primeira
    for(int nS = 0; szSrc2[nS] != '\0'; nT++, nS++){
        pszTarget[nT] = szSrc2[nS];
    }
    
    // adiciona um terminador para o pszTarget
    pszTarget[nT] = '\0';
    
    // retorna o resultado para o chamador
    return pszTarget;
}

int main(int nNumberofArgs, char* pszArgs[])
{
    cout << "This program accepts two string\n"
        << "from the keyboard and outputs them\n"
        << "concatenated together. \n" << endl;
        
    // coloca duas strings
    cout << "Enter first string: ";
    char szString1[256];
    cin.getline(szString1, 256);
    
    cout << "Enter the second string: ";
    char szString2[256];
    cin.getline(szString2, 256);
    
    // agora concatena uma para o fim da outra
    cout << "concatenateString"
        << endl;
    char * pszT = concatenateString(szString1, szString2);
        
    // e mostra o resultado
    cout << "Result <"
        << pszT
        << ">" << endl;
        
    // retornar a memória para a pilha
    delete[] pszT;
    pszT = NULL;
    
    system("PAUSE");
    return 0;
}
