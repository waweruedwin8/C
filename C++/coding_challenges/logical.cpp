#include <bits/stdc++.h>
using namespace std;

void logicOp(int a, int b)
{
    // Perform logic operations on a and b
    // Output (a && b), (a || b), and ((!a) && (!b)) separated by spaces
    cout << (a && b) << " " << (a || b) << " " << ((!a) && (!b)) << endl;
}

int main() {
    int t;
    cout << "Enter the number of times to loop: ";
    cin >> t;

    while (t--) {
        int a, b;
        cout << "Enter int a: ";
        cin >> a ;
        cout<< "Enter int b: ";
        cin >> b;

       cout<< "logical operation of a and b: "<<endl;
        logicOp(a, b);

        cout << "~" << "\n";
    }
    return 0;
}