#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// fn(int, int) - demonstra a função que pega dois argumentos
//              e modifica seus valores
void fn(int nArg1, int nArg2){
    
    // modifica o valor dos argumentos
    nArg1 = 10;
    nArg2 = 20;
}

// fn(int*, int*) - essa função pega seus argumentos
//                  pela sua referencia
void fn(int* pnArg1, int* pnArg2){
    
    // modifica o valor dos argumentos
    *pnArg1 = 10;
    *pnArg2 = 20;
}

int main(int nNumberofArgs, char* pszArgs[]){
    
    // inicializa duas variaveis e mostra seus valores
    int nValue1 = 1;
    int nValue2 = 2;
    cout << "The value of nArg1 is " << nValue1 << endl;
    cout << "The value of nArg2 is " << nValue2 << endl;
    
    // agora tente modifica-los  atravez de suas functions
    cout << "Calling fn(int, int)" << endl;
    fn(&nValue1, &nValue2);
    cout << "The value of nArg1 is " << nValue1 << endl;
    cout << "The value of nArg2 is " << nValue2 << endl;
    
    // tenta chamar denovo a function que pega
    // endereços como argumentos
    cout << "Calling fn(int*, int*)" << endl;
    fn(&nValue1, &nValue2);
    cout << "Returned from fn(int*, int*)" << endl;
    cout << "The value of nArg1 is " << nValue1 << endl;
    cout << "The value of nArg2 is " << nValue2 << endl;
    
    system("PAUSE");
    return 0;
 }