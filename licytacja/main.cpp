#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string removeNumbers(string str)
{
    int current = 0;
    for(int i = 0; i< str.length(); i++){
        if(!isdigit(str[i])){
            str[current] = str[i];
            current++;
        }
    }

    return str.substr(0,current);
}


string tab[5] = {"C", "D", "H", "S", "BA"};

int main()
{
    int n;
    cin >> n;
    int num=0;
    int mainvalue=0;
    int wrong=0;
    int player=0;
    int value;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        int numb = stoi(a);
        string qwer = removeNumbers(a);
        for(int j=0; j<5; j++){
            if(qwer == tab[j]){
                value = j;
            }
        }
        if(numb > num || (numb == num && value > mainvalue)){
            num=numb;
            mainvalue=value;
            player++;
            if(player == 5){
                player = 1;
            }
        }else{
            wrong++;
        }

    }
    if(wrong==0){
        if(player == 1 || player == 3){
            cout << "NS";
        }else if(player == 2 || player == 4){
            cout << "WE";
        }
    }else{
        cout << "licytaja niepoprawna";
    }
    return 0;
}
