#include <iostream>
using namespace std;

int main() {
    string firstName, lastName;
    int scores[5];
    // Ex1
    cout << "Enter first name: ";
    getline(cin, firstName);
    cout << "Enter last name: ";
    getline(cin, lastName);
    string fullName = firstName + ' ' + lastName; 
    cout << "Full name: " << fullName << endl; 
    cout << "Name length: " << fullName.length() << endl; 
   
    return 0;
}
