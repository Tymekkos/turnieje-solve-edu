#include <iostream>

using namespace std;
/*
int cyfry(int x)
{
    if(x >= 10)
       cyfry(x / 10);

    int digit = x % 10;
    int a=0;
    if(digit>5){
        a=a+1;
    }
    return a;
}
*/
int main()
{
    int num;
    int a=0;
    short temp = 0;
    cin>>num;

    while(num!=0){
        temp = num%10;
        if(temp<5){
            a++;
        }
        num /= 10;
    }
    if(a==3){
        cout << "TAK";
    }else{
        cout << "NIE";
    }
}
