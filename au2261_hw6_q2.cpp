#include <iostream> 
using namespace std;

bool isPalindrome(string str){

    string reverseStr;
    char letter;

    for (int i = (str.length() - 1); i >= 0; i--){
        letter = str[i];
        reverseStr += letter;
    }
    if (reverseStr == str)
        return true;
    else
        return false;
}

int main(){

    string str;
    bool palindrome;

    cout << "Please enter a word: ";
    getline(cin, str);
    palindrome = isPalindrome(str);
    if (palindrome == true)
        cout << str << " is a palindrome";
    else   
        cout << str << " is not a palindrome";

    return 0;
    
}