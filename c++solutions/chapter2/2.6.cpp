#include <iostream>
using namespace std;
class temp
{
    float f, c;
    public:
        void getdata(void);
        void putdata(void);
};
void temp :: getdata(void)
{
    cout << "Enter the temperature in fahrenheit: ";
    cin >> f;
    c = (f - 32) * 5/9;
}
void temp :: putdata(void)
{
    cout << "The temperature in celcius is: " << c;
}
int main()
{
    temp t;
    t.getdata();
    t.putdata();
    return 0;
}
