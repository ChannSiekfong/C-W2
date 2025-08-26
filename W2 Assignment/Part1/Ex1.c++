#include <iostream>
#include <fstream>
using namespace std;

// Function to calculate average
double calculateAverage(int arr[], int size) {
    int sum = 0;
    // TODO: Loop through array to calculate sum
    // sum += ...
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum/size; // TODO: return the correct average
}

int main() {
    string firstName, lastName;
    int scores[5];

    // Step 1: Get name
    cout << "Enter first name: ";
    // TODO: use getline() to read first name
    getline(cin, firstName);
    cout << "Enter last name: ";
    // TODO: use getline() to read last name
    getline(cin, lastName);
    // Step 2: Combine and display 
    // TODO: concatenate firstName and lastName
    string fullName = firstName + ' ' + lastName;
    // TODO: print full name
    // TODO: print length
    cout << "Full name: " << fullName << endl; 
    cout << "Name length: " << fullName.length() << endl; 

    // Step 3: Get scores
    cout << "\nEnter your scores:\n";
    // TODO: loop to input scores
    for(int i=0; i<5; i++){
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
    }

    // Step 4: Pointer example - change first score
    int* ptr = &scores[0]; 
    // TODO: point to the first score
    // TODO: increase the first score using the pointer
    *ptr = 100;
    cout << "Increase the first score to 100." << endl;

    // Step 5: Calculate average
    double avg = 0; 
    // TODO: call calculateAverage()
    // TODO: print average
    avg = calculateAverage(scores, 5);
    cout << "Average score: " << avg << endl; 

    // Step 6: Save to file
    ofstream outFile("student.txt");
    if(!outFile){
        cout << "Error" << endl;
        return 1;
    }
    // TODO: write full name, scores, and average to file
    outFile << "Name: " << fullName << endl;
    for(int i=0; i<5; i++){
        outFile << "Score: ";
        outFile << scores[i] <<endl;
    }
    outFile << "Average: " << avg << endl;
    outFile.close();

    // Step 7: Read from file
    ifstream inFile("student.txt");
    string line;
    if(!inFile){
        cout << "Error" << endl;
        return 1;
    }
    cout << "\nReading from file:" << endl;
    // TODO: loop to read and print file content
    while(getline(inFile, line)){
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
