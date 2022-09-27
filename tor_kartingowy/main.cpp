/*
#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    for(long long i=1; i<=a; i++){
        for(long long j=1; j<=b; j++){
            long long torA = a*j;
            long long torB = b*i;
            if(torA == torB && torA != 0 && torB != 0){
                cout << torA;
                return 0;
            }
        }
    }
    return 0;
}
*/
#include<iostream>
using namespace std;

int NWW(long long a, long long b)
{
	long long pom;

  	while(b!=0)
	{
    	pom = b;
    	b = a%b;
    	a = pom;
  	}
    return a;
}

int main()
{
	long long a, b;

	cin>>a>>b;
    if(a==0||b==0){
        return 0;
    }
	cout<<a/NWW(a, b)*b;

	return 0;
}

