#include<bits/stdc++.h>
using namespace std;

void getLineAndIgnore(){
    string a, d;
    int b;

    // Read first string (including spaces)
    cout << "Enter the first string (with spaces): ";
    getline(cin, a);
   

    cout << "Enter an integer: ";
    cin >> b; // Read integer

    cin.ignore(); // To ignore the newline character after reading

   // Read second string (including spaces)
    cout << "Enter the second string (with spaces): ";
    getline(cin, d);

   //output results
    cout << "Output:\n";
    cout << a << endl;
    
    cout << b << endl;
        
    cout << d << endl;
}
int main(){
    int T;
    cout << "Enter number of test cases: ";
    cin >> T; //read number of Test cases
    cin.ignore();  // To discard the newline left by the integer input

   // Run the getLineAndIgnore function for each test case
    for (int i = 0; i < T; ++i) {
        getLineAndIgnore();
    }
    
    return 0;// Return 0 to indicate successful execution
}