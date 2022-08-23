#include <iostream>

using namespace std;

string tab[] = {"no", "pa", "re", "ci", "vo", "mu", "xa", "ze", "bi", "so"};

int main()
{
    int n;
    cin >> n;
    int b = n;
    int len = 1;
    if (b > 0) {
        for (len = 0; b > 0; len++) {
            b = b / 10;
        }
    }

    string tab2[len];
    int s = 0;
    for(int i=0; i<len; i++){
        s = n%10;
        string c = tab[s];
        tab2[i] = c;
        n = n/10;
    }
   for(int i=len-1; i>=0; i--){
        cout << tab2[i];
    }

    return 0;
}
