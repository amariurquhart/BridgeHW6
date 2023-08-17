#include <iostream>
using namespace std;

void formatLastName(string lastName){
    cout << lastName << ", ";
}

void formatFirstName(string firstName){
    cout << firstName << " ";
}

void formatMiddleName(string middleName){
    char middleInitial;

    middleInitial = middleName[0];
    cout << middleInitial << ".";
}

int main(){

    string userInput1, userInput2, userInput3;

    cout << "Enter your first name, middle name/initial, and last name: ";
    cin >> userInput1 >> userInput2 >> userInput3;

    formatLastName(userInput3);
    formatFirstName(userInput1);
    formatMiddleName(userInput2);

    return 0;
}