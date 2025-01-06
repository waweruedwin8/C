#include <bits/stdc++.h>
using namespace std;

//a program that checks if a set of 3 digits is an armstrong number or not (a number whose each digit cubed and all the cubed digit are summed is to the original number) if so it returs true or false respectively as output

// Outer class to handle the number input and digit processing
class armstrong_number {
public:
    armstrong_number(int n) {
        cout << "The number N you Enterd is: " << n << endl;
    }

    class digitprocessor {
    public:
      
       // Innermost nested class to check if a number is an Armstrong number or not
        class is_armstrong_number_or_not {
        public:
            void Result(int cube, int n) {
                if (cube == n) {
                    cout << "True" << endl;
                    cout << n << ": is a narmstrong number!"<< endl;
                } else {
                    cout << "False" << endl;
                    cout << n <<": is not a narmstrong number!"<< endl;
                }
            }
        };
        
        // Function to calculate the sum of cubes of digits in a three-digit number
        int three_digit_processor(int n) {
            int a = n / 100;
            int b = (n / 10) % 10;
            int c = n % 10;
            return (a * a * a) + (b * b * b) + (c * c * c); // Sum of cubes
        }
    };
};

int main() {
    int n;
    while(true) {
    cout << "Enter a three-digit number N: ";
    cin >> n;
    
    // Check if the input is valid (integer and within the valid range)
        if (cin.fail() || n < 100 || n > 999) {
            // Handle the error
            cout << "Invalid input! Please enter a three-digit number." << endl;

            // Clear the error flag and ignore the invalid input
            cin.clear(); // Clears the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discards invalid input

            // Continue the loop to ask for input again
            continue;
        }
        armstrong_number num(n);  // Pass the number to the constructor
         // Exit the loop when a valid number is entered
         break; 
    }
    // Create an instance of the innermost nested class
    armstrong_number::digitprocessor::is_armstrong_number_or_not checker;

    // Create an instance of the digitprocessor and get the cube of the digits
    armstrong_number::digitprocessor dp;
    int cube = dp.three_digit_processor(n); // Calculate the sum of cubes of digits

    // Check if the number is an Armstrong number
    checker.Result(cube, n);

    return 0;
}