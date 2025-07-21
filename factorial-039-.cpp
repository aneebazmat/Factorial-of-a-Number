#include <iostream>
using namespace std;
int main ()
{
    
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int factorial = 1;

   if (num < 0)
   {
    cout << "Invalid Statement: Enter positive Integar. " << endl;
   }
   else
        if (num == 0)
        {
            cout << "The Factorial of the num is 1." << endl;
        }
    else 
    if (num > 0)
    {
        while (num > 0)
        {
            factorial = factorial * num;
            num--;
        }
    }

    cout << "The Factorial of number  = " << factorial << endl;
    return 0;
}