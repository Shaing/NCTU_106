/* F(0) = 0, F(1) = 1, F(n) = F(n-3) + (2 * F(n - 2)), n > 1. */

#include <iostream>
using namespace std;

int func(int x)
{
    // cout << x << endl;
    if(x <= 0)
        return 0;
    else if(x == 1)
        return 1;
    else
        return func(x - 3) + func(x - 2) + func(x - 2);
}


int main(int argc, char* argv[])
{
    cout << func(atoi(argv[1])) << endl;
    //cout == 33
    return 0;
}
//this is main.cpp

