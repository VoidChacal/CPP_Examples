#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int nNumberoofArgs, char* pszArgs[]){
    cout << "This program multiplies the numbers\n"
        << "enter by the user. enter a negative\n"
        << "number to exit. Zeroes are ignored. \n"
        << endl;
        
    int nProduct = 1;
    while (true){
        int nValue;
        cout << "Enter a number to multiply: ";
        cin >> nValue;
        if (nValue < 0){
            cout << "Exiting." << endl;
            break;
        }
        if (nValue == 0){
            cout << "Ignoring zero." << endl;
            continue;
        }
        
        cout << nProduct << " * " << nValue;
        nProduct *= nValue;
        cout << " is " << nProduct << endl;
    }
    
    system("PAUSE");
    return 0;
}
