#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int nNumberoofArgs, char* pszArgs[]){
    int nTarget;
    cout << "This program calculates factorial. \n"
        << "Enter a number to take factorial of: ";
    cin >> nTarget;
    
    int nAccumulator = 1;
    int nValue = 1;
    while (nValue <= nTarget){
        cout << nAccumulator " * "
            << nValue << " equals ";
        nAccumulator = nAccumulator * nValue;
        cout << nAccumulator << endl;
        nValue ++;
    }
    
    cout << nTarget << " factorial is "
        << nAccumulator << endl;
    
    system("PAUSE");
    return 0;
}