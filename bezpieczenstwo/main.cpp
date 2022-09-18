#include <iostream>

using namespace std;

int main()
{
    string txt;
    cin >> txt;
    bool a, b, c, d;
    for(int i=0; i<txt.size(); i++){
        if(txt[i]>='0' && txt[i]<='9'){
            b = true;
        }else if(txt[i] >= 'A' && txt[i] <= 'Z'){
            c = true;
        }else if(txt[i] >= 'a' && txt[i] <= 'z'){
            d = true;
        }else if(txt[i]=='@' || txt[i]=='$' || txt[i]=='#' || txt[i]=='*'){
            a = true;
        }else{
            cout << "NIE";
            return 0;
        }
    }
    if(a==true && b==true && c==true && d==true && txt.size()>=8 && txt.size()<=100) {
        cout << "TAK";
    }else{
        cout << "NIE";
    }
    return 0;
}
/*
#include <iostream>

using namespace std;

int main()
{
    string txt;
    cin >> txt;
    int a, b, c, d;
    int xx = txt.size();
    char tab[xx];
    for(int i=0; i<xx; i++){
        char p = txt[i];
        tab[i] = p;
    }
    for(int i=0; i<xx; i++)
    {
        if(tab[i]>=48 && tab[i]<=57
            ){ // liczby
            b++;
        }else if(tab[i]>=65 && tab[i]<=90){ //duze litery
            c++;
        }else if(tab[i]>=97 && tab[i]<=122){ // male litery
            d++;
        }else if(tab[i]==64 || tab[i]==36 || tab[i]==35 || tab[i]==42){ //@, $, #, *.
            a++;
        }
    }
    if(a>0 && b>0 && c>0 && d>0 && xx>=8){
        cout << "TAK";
    }else{
        cout << "NIE";
    }

    return 0;
}
*/
