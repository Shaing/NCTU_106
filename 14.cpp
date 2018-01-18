#include <iostream>
using namespace std;
int a[10] = { 8, 15, 23, 30, 7, 2, 10, 13, 6, 5 };
void func(int s, int e)
{
    int i, r;
    r = a[s]; 
    for(i = s * 2; i <= e; i *= 2)
    {
        if(i < e && a[i] < a[i + 1]) i++;  
        if(r > a[i]) break;
        a[i / 2] = a[i];  
    }
    a[i / 2] = r; 
}

int main(int argc, char* argv[])
{
    for(int i = 4; i >= 1; i--) 
        func(i, 9);
    cout << a[1] << endl;
    return 0;
}

