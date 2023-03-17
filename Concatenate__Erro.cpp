#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;



// concatenateString - concatenar uma string no final de outra
void concatenateString(char szTarget[], const char szSource[]){
    // Encontre o fim do alvo string
    int nT;
    for(nT = 0; szTarget[nT] != '\0'; nT++){
        
    }
    // agora copia o conteudo da fonte da string no
    // alvo da string, começando na 'nT'
    for(int nS = 0; szSource[nS] != '\0'; nT++, nS++){
        szTarget[nT] = szSource[nS];
    }
    
    // adiciona um terminador para szTarget
    szTarget[nT] = '\0';
}

int main(int nNumberofArgs, char* pszArgs[]){
    cout << "This program accepts two strings\n"
        << "from the keyboard and outpouts the\n"
        << "concatenated together.\n" << endl;
        
    // entrada de duas strings
    cout <<"Enter first string: ";
    cout szString1[256];
    cin.getline(szString1, 256);
    
    // agora concatena um com o fim do outro
    cout << "Concatenate first string into the second"
        <<endl;
    concatenateString(szString1, szString2);
    
    // e mostra o resultado
    cout << "Result: <"
        << szString1
        << ">" << endl;
        
    system("PAUSE");
    return 0;
}