#include <iostream>
using namespace std;

void reverseArray(int arr[], int arrSize){

    int temp = 0, j = (arrSize - 1);

    for(int i = 0 ;i < (arrSize / 2); i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void removeOdd(int arr[], int& arrSize){

    int temp = -1, tempSize = arrSize;

    for (int i = 0; i < tempSize; i++){
        if (arr[i] % 2 == 0) {
            arr[temp + 1] = arr[i];
            temp++;
        }
        else if (arr[i] % 2 == 1)
            arrSize--;
    } 
}

void splitParity(int arr[], int arrSize){

    int i = 0, j = (arrSize - 1), temp;

    while(i < j) {
        if((i < j) && ((arr[i] % 2) == 1))
            i++;
        if((i < j) && ((arr[j] % 2) == 0))
            j--;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void printArray(int arr[], int arrSize){
    int i;
    
    for (i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
   
void printArray(int arr[], int arrSize);
int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    
    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    
    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);
    
    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);
    
    return 0;
}
