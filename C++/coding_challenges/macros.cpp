#include <iostream>
using namespace std;

// Define a macro to multiply two numbers
#define MULTIPLY(a, b) ((a) * (b))

void solve() {
    int T; // Number of test cases
    cout << "Enter number of tests: ";
    cin >> T;

    while (T--) {
        int a, b;
        cout << "Enter value of int a: ";
        cin >> a;  // Read the value of 'a'

        cout << "Enter value of int b: ";
        cin >> b;  // Read the value of 'b'

        // Use the macro to print the product
        cout << "Product of a * b = "<< MULTIPLY(a, b) << endl;
    }
}

int main() {
    solve(); // Call the solve function to process the input and output
    return 0;
}