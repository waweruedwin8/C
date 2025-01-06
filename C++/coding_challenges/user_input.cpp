#include <iostream>
using namespace std;

class Solution {
       private:
        int a;
        string b;
  public:
    void inputData() {
        cout<<"Input value of int a:";
        cin>>a;
        cout<<"Input value of string b:";
        cin>>b;
    }
   void OutputData() {
       //cout<< a<<b;
       cout << "Value of a: " << a << ", Value of b: " << b << endl;

   }
   };
   int main() {
        Solution obj;
        obj.inputData();
        obj.OutputData();
        return 0;
   }