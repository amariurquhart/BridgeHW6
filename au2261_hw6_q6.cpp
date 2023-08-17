#include <iostream>
using namespace std;

/*
*/
bool isOnlyNumbers(string word){
    
    int n = word.length(), m = 0;
    for(int i = 0; i < n; i++)
        if (word[i] >= 48 && word[i] <= 57 ){
            m++;
            if(m == n)
                return true;
        }
    return false;    
}

string convertNumbers(string word){
    
    int n = word.length();
    for(n = n; n >= 0; n--)
        word[n] = 120;
    return word;
}

void parseWords(string str){
    
    int n = str.length();
    string word = "";
    bool boo;

    for(int i = 0; i <= n; i++){
        if((str[i] == 32) || (i == n)){
            boo = isOnlyNumbers(word);
            if(boo == true){
                word = convertNumbers(word);
                cout << word << " ";
                }
            else
                cout << word << " ";
            word = "";
        }
        else
            word += str[i];
    }

}

int main(){

    string str;

    cout << "Please enter a line of text:" << endl;
    getline(cin, str);
    parseWords(str);

    return 0;

}