#include <iostream>
using namespace std;

const int SEQUENCELENGTH = 20;

int minInArray(int arr[], int arrSize) {
    
    int minVal = arr[0];

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] <= minVal)
            minVal = arr[i];
    }
    
    return minVal;
}

int main() {

    int arr[SEQUENCELENGTH], minVal;

    cout << "Please enter " << SEQUENCELENGTH << " integers separated by a space:" << endl;
    for (int i = 0; i < SEQUENCELENGTH; i++) {
        cin >> arr[i];
    }
    
    minVal = minInArray(arr, SEQUENCELENGTH);
    cout << "The minimum value is " << minVal << ", and it is located in the following indices: ";
    for (int i = 0; i < SEQUENCELENGTH; i++) {
        if (arr[i] == minVal)
            cout << i << " ";
    }

return 0;

}