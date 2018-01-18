#include <iostream>  
#include <bitset>  
using namespace std;  
int a[10] = {8, 15, 23, 30, 7, 2, 10, 13, 6, 5};
  
int main() 
{
    int k;
    for(int i = 0; i < 10; i++)
    {
        k = i;
        for(int j = i + 1; j < 10; j++)
        {
            if(a[j] > a[k])
                k = j;
            if(k != i)
            {
                int m;
                m = a[i];
                a[i] = a[k];
                a[k] = m;
            }
        }
    }  
    cout << a[0] << endl;
    //cout == 30
    return 0;
} 