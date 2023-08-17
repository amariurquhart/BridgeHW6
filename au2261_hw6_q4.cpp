#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int PIN_NUM_LENGTH = 10;
const int REALPIN[5] = {3, 4, 5, 6, 7};

void assignNumbers(int arrRand[]) {

    int x;
    srand(time(0));
    
    cout << "NUM:\t";
    for(int i = 0; i < PIN_NUM_LENGTH; i++) {
        x = (rand() % 3) + 1;
        arrRand[i] = x;
        cout << arrRand[i] << " ";
    }
    cout << endl;
}

void createPassword(int arrRand[], int NEWPIN[]) {

    for(int i = 0; i < 5; i++)
        NEWPIN[i] = arrRand[REALPIN[i]];
}

bool passwordIsCorrect(int NEWPIN[], int userInput[]) {

    for (int i = 0; i < 5; i++) {
        if (NEWPIN[i] != userInput[i])
            return false;
    }
    return true;
}

int main() {
   
    int arrRand[PIN_NUM_LENGTH], NEWPIN[5], userInput[5], i = 4;
    string userInputString;
    bool boo;

    cout << "Please enter your PIN according to the following mapping:\nPIN:\t0 1 2 3 4 5 6 7 8 9\n";

    assignNumbers(arrRand);

    createPassword(arrRand, NEWPIN);
    cin >> userInputString;
    for (int i = 0; i < 5; i++)
        userInput[i] = (((int) userInputString[i]) - 48);
 
    boo = passwordIsCorrect(NEWPIN, userInput);
    if(boo == true)
        cout << "Your PIN is correct";
    else if(boo == false)
        cout << "Your PIN is not correct";

    return 0;
}