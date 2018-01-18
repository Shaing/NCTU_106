#include <iostream>
using namespace std;

static int n = 0;
class A
{
    public:
        A(){ n++; }
        ~A(){ n++; }
};

void func()
{
    A a;
}

int main(int argc, char* argv[])
{
    A a;
    func();
    cout << n << endl;
    // cout == 3
    return 0;
}

