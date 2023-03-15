
#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

// retorna algumas series de numeros 
// digitados pelo usuario e sai da loop
// quando entra um numero negativo
int sumSequence (){

    // cria uma variavel que será adicionado os numeros digitados pelo usuario
    int nAccumulator = 0;

    for(;;){

        // le outra variavel digitada pelo usuario
        int nValue;
        cout << "Next: ";
        cin >> nValue;

        // sai se a nValue for negativa
        if (nValue < 0){
            break;
        }

        // adiciona a variavel entrada para avariavel acumulada
        nAccumulator += nValue;
    }

    // retorna a variave comulada para o caller
    return nAccumulator;

}

int main(int nNumberofArgs, char* pszArgs[]){
    cout << "This program sums sequences of numbers. \n"
        << "Enter a series of numbers. Entering a\n"
        << "print the sum and start over with a new\n"
        << "sequence. "
        << "Enter two negative in a row to ende the\n"
        << "program." << endl;

    // fica em uma loop pegando input do usuario
    // ate ele entra com numero negativo
    for(;;){

        // acumula a sequencia
        int nSum = sumSequence();

        // se o sum é zero...
        if(nSum == 0){

            // ... então sai do programa
            break;
        }

        // mostra o resultado
        cout << "Sum = " << nSum << endl;
    }

    // espera até o usuario estiver pronto antes de terminar o programa
    // permite o usuario a ver o resultado do programa
    system("PAUSE");
    return 0;
}
