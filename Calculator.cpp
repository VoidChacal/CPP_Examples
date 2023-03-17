#include <iostream>
using namespace std;

// prototipo de declarações
int calculator(char cOperator, int nOper1, int nOper2);

int main(int nNumberofArgs, char* pszArgs[]){

int nOper1;
int nOper2;
char cOperator;
cout << "Enter 'value1 op value2'\n"
    << "where op is +, -, *, / or %:" << endl;
cin >> nOper1 >> cOperator >> nOper2;

//ecoar oque o usuario entrou seguido pelo
// resultado da operação
cout << nOper1 << " "
    << cOperator << " "
    << nOper2 << " = "
    << calculator(cOperator, nOper1, nOper2)
    << endl;

// espera ate o usuario estiver pronto antes de terminar o programa
// permite o usuario ver o resultado do programa
system("PAUSE");
return 0;    
}

// calculador - returna o resutado de cOperator
//          operação perfomada na nOper1 e nOper2
int calculator(char cOperator, int nOper1, int nOper2){
    int nResult = 0;
    switch(cOperator){
        case '+':
            nResult = nOper1 + nOper2;
            break;
        case '-':
            nResult = nOper1 - nOper2;
            break;
        case '*':
            nResult = nOper1 * nOper2;
            break;
        case 'x':
            nResult = nOper1 * nOper2;
            break;
        case 'X':
            nResult = nOper1 * nOper2;
            break;
        case '/':
            nResult = nOper1 / nOper2;
            break;
        case '%':
            nResult = nOper1 % nOper2;
            break;
        default:
            // não entendeu o operador
            cout << " is not understood";
    }
    return nResult;
}