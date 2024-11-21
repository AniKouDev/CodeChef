#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int lose = 0, win = 0;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0')
                lose++;
            else
                win++;
        }
        if((lose>9 && win>=(lose+2)) || (lose<10 && win==11))
            cout << "WIN";
        else
            cout << "LOSE";
        breakline;
    }
}