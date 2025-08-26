#include <iostream>
using namespace std;

int compare(int num[], int size){
    for(int i=0; i<size; i++){
        if(num[i] > num[i+1]){
            return num[i];
        } else {
            return num[i+1];
        }
    }
}


int main(){
    int number[2];
    for(int i=0; i<2; i++){
        cout << "Enter the number: ";
        cin >> number[i];
    }
    int largest = 0;
    largest = compare(number, 2);
    cout << "The largest: " << largest << endl;

    return 0;
}