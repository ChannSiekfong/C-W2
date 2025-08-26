#include <iostream>
using namespace std;

int main(){
    string sentences;
    cout << "Enter your sentences:\n";
    
    for(int i=0; i<3; i++){
        cout << "Sentences (" << i+1 << "): ";
        getline(cin, sentences);
        cout << "The size of the (" << i+1 <<"): " << sentences.length() << endl;
    }
    
    return 0;
}