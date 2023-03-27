/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

// Armazena o nome e o numero de segurança social
class Person{
    public:
    char szFisrtName[128];
    char szLastName[128];
    int nSocialSecurityNumber;
};

// le o objeto Person do teclado e retorna uma copia para o caller
Person getPerson(){
    
    Person person;
    
    cout << "\nEnter another Person\n"
        << "First name: ";
    cin >> person.szFirstName;
    
    cout << "Last name: ";
    cin >> person.szLastName;
    
    cout << "Social Security number: ";
    cin >> person.nSocialSecurityNumber;
    
    return person;
    
}


int getPeople(Person people[], int nMaxSize){
    
    // continua ate o operador ter digitado o necessario
    // ou ate ficar sem espa
    int index;
    for(index = 0; index < nMaxSize; index++){
        char cAnswer;
        cout << "Enter another name? (Y or N):";
        cin >> cAnswer;
        
        if (cAnswer != 'Y' && cAnswer != 'y'){
            break;
        }
        
        people[index] = getPerson    
        
    }
    return index;
}

//mostra a pessoa no display default
void displayPerson(Person person){
    cout << "First name: " << person.szFirstName << endl;
    cout << "Last name: " << person.szLastNmae << endl;
    cout << "Social Security number: " << person.nSocialSecurityNumber << endl;
}

vooid displayPeople(Person people[], int nCount){
    for(int index = 0; index < nCout; index++){
        displayPerson(people[index]);
    }
}

void sortPeople(Person people[], int nCount){
    
}
int main()
{
    cout<<"Hello World";

    return 0;
}
