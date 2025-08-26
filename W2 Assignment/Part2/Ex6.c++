#include <iostream>
using namespace std;

void max_min(int num[], int size, int &maxNum, int &minNum){
    maxNum = minNum = num[0];
    for(int i=0; i<size; i++){
        if(num[i] > maxNum){
            maxNum = num[i+1];
        } 
        if(num[i] < minNum){
            minNum = num[i+1];
        }
    }
}

int main(){
    int number[5];
    for(int i=0; i<5; i++){
        cout << "Enter your number: ";
        cin >> number[i];
    }

    int min, max;
    max_min(number, 5, max, min);
    cout << "The maximum is: "<< max << endl;
    cout << "The minimum is: "<< min << endl;

    return 0;
}