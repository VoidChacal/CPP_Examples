#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

// Armazena o nome e o numero de segurança social
class Person{
    public:
    char szFirstName[128];
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
        
        people[index] = getPerson();    
        
    }
    return index;
}

//mostra a pessoa no display default
void displayPerson(Person person){
    cout << "First name: " << person.szFirstName << endl;
    cout << "Last name: " << person.szLastName << endl;
    cout << "Social Security number: " << person.nSocialSecurityNumber << endl;
}

void displayPeople(Person people[], int nCount){
    for(int index = 0; index < nCount; index++){
        displayPerson(people[index]);
    }
}

void sortPeople(Person people[], int nCount){
    int nSwaps = 1;
    while(nSwaps != 0){
    
      nSwaps = 0;
      for(int n = 0; n < (nCount - 1); n++){
        
        if(people[n].nSocialSecurityNumber > people[n+1].nSocialSecurityNumber){
          Person temp = people[n+1];
          people[n+1] = people[n];
          people[n] = temp;
          nSwaps++;
        }
      }
    }
}
int main()
{
  Person people[128];
  cout << "Read name/social security information\n";
  int nCount = getPeople(people, 128);
  
  sortPeople(people, nCount);
  
  cout << "\nHere is the list sorted by "
    << "social security number" << endl;
   displayPeople(people, nCount);
  
    return 0;
}
