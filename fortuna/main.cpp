#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int tab[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};
    int a,P, i;
    cin >> a;
    int suma=0;
    i=0;
    while (a>0)
    {
        if (a >= tab[i])
        {
            P=a/tab[i];
            a=a-(tab[i]*P);
            suma+=P;
        }
        i++;
    }
    cout << suma;
    return 0;
}
