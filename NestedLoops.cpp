#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int nNumberoofArgs, char* pszArgs[]){
    int nColumn = 0;
    cout << "  ";
    while (nColumn < 10){
        
        // Aumenta o tamanho para dois characters
        cout.width(2);
        
        // Mostra o numero
        cout << nColumn << "  ";
        
        // Aumenta a int
        nColumn++;
    }
    cout << endl;
    
    // agora vai para o loop atravez das rows
    int nRow = 0;
    
    while(nRow < 10){
        
        // começa com o valor da row
        cout << nRow << " - ";
        
        // agora vai em cada row, com a column 0 e
        // vai entre 10 column
        nColumn = 0;
        while(nColumn < 10){
            
            // usa dois characters emsmo que o produto e um digito
            cout.width(2);
            cout << nRow * nColumn << " ";
            
            // vai para proxima nColumn
            nColumn++;
            
        }
        
        // vai para nRow
        nRow++;
        cout << endl;
    }
    system("PAUSE");
    return 0;
}