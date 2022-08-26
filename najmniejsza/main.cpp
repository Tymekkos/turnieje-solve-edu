#include<iostream>
#include<cmath>
#include <algorithm>

using namespace std;
int main()
{
    long long num;
	cin >> num;
	long long a = num;

    int len = 1;
    if (a > 0) {

        for (len = 0; a > 0; len++) {
            a = a / 10;
        }
    }

	int array[len];
    for (int i = len-1; i >= 0; i--) {
        array[i] = num % 10;
        num /= 10;
    }

    sort(array, array + len);

    for (int i = 0; i < len; i++) {
        if((array[0])==0 && (array[i]>0))
        {
            swap(array[0], array[i]);
        }
    }

    for (int i = 0; i < len; i++) {
        cout << array[i];
    }
	return 0;
}

