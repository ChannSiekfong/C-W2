
#include <iostream>
using namespace std;

int main(){
    int scores[5];
    for(int i=0; i<5; i++){
        cout << "Enter your score: ";
        cin >> scores[i];
    }
    int* ptr = &scores[0]; 
    *ptr += 10;
    cout << "Updated array:\n";
    for (int i = 0; i < 5; i++){
        cout << scores[i] << endl;
    } 

    return 0;
}