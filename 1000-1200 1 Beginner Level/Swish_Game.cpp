#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int m, k;
        cin >> m >> k;
        string s;
        cin >> s;
        int P = 0, S = 0;
        for(int i = 0; i < m; i++){
            if(s[i] == 'S')
                S++;
            else
                P++;
        }
        int help = k-S;
        if(help <= 0)
            cout << m;
        else{
            m = m + (help-1);
            cout << m;
        }
        breakline;
    }
}