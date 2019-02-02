#include <iostream>
using namespace std;
int main()
{
    float f, c;
    cout << "Enter the temperature in fahrenheit: ";
    cin >> f;
    c = (f -32) * 5/9;
    cout << "The temperature in celcius is: " << c;
    return 0;
}
