#include <iostream>
using namespace std;

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for(int i=0;i<size; i++){
        sum += arr[i];
    }
    return sum / size; 
}

int main(){
    int scores[5];
    cout << "\nEnter 5 scores:\n";
    for(int i=0; i<5; i++){
        cout << "Enter you score: ";
        cin >> scores[i];
    }

    double avg = 0;
    avg = calculateAverage(scores, 5);
    cout << "Average: " << avg << endl;

    return 0;
}