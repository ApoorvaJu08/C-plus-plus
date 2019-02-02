#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if (num1 > num2)
    {
        cout << "First number is greater than second number";
    }
    else
    {
        cout << "Second number is greater than first number";
    }
    return 0;
}
