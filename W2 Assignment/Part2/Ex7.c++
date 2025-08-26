#include <iostream>
#include <fstream>
using namespace std;

double calculateTotal(double Price[], int Size){
    double sum = 0;
    for(int i=0; i<Size; i++){
        sum += Price[i];
    }
    return sum;
}

int main(){
    int size = 3;
    double price[size];
    string products[size];

    for(int i=0; i<size; i++){
        cout << "Enter product ("<< i+1 << "): ";
        cin >> products[i];
        cout << "Enter price (" << i+1 << "): $";
        cin >> price[i];
    }
    
    double *ptrPrice = &price[1];
    *ptrPrice += 5;

    double Total = calculateTotal(price, size);

    cout << "\nUpdate second price by using pointer.\n";

    ofstream outFile("products.txt");
    if(!outFile){
        cout << "Error writing file.";
        return 1;
    }
    for(int i=0; i<size; i++){
        outFile << i+1 << ". " << products[i] << " - $" << price[i] << endl;
    }
    outFile << "Total price: $" << Total;
    outFile.close();

    ifstream inFile("products.txt");
    if(!inFile){
        cout << "Error reading file.";
        return 1;
    }
    string line;
    cout << "Product list:" << endl;

    while(getline(inFile, line)){
        cout << line << endl;
    }
    inFile.close();

    return 0;
}