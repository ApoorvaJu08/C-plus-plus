#include <iostream>
using namespace std;

class sample
{
    int data1;
    char data2;
    public:
        void set(int i, char c)
        {
            data1 = i;
            data2 = c;
        }
        void display(void)
        {
            cout << "Data1 = " << data1 << "\n";
            cout << "Data2 = " << data2 << "\n";
        }
};

int main()
{
    sample *s;
    try
    {
        s = new sample;
    }

    catch(bad_alloc ba)
    {
        cout << "Bad allocation occured....the program will terminate now..";
        return 1;
    }

    s->set(25,'A');
    s->display();

    delete s;
}
