#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        string s;
        cin >> s;
        int c = 0, n = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='C')
                c++;
            else if(s[i] == 'D'){
                c++;
                n++;
            }
            else
                n++;
        }
        if(c>n)
            cout << 60*a;
        else if(c==n)
            cout << 55*a;
        else
            cout << 40*a;
        breakline;
    }
}