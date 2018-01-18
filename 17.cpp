#include <iostream>
using namespace std;
int x = 5;
float y = 2;

int func(int x, float y)
{
    return x + y;
}

int func(float x, int y)
{
    return x - y;
}

int main(int argc, char* argv[])
{
    cout << func(x,y) + func(y,x) << endl;
    // cout == (7 + (-3) = 4)
    return 0;
}

