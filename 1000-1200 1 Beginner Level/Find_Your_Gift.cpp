#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0;
        for(int i = 0; i < s.size();){
            if(s[i] == 'L'){
                x--;
                while(s[i] == 'R' || s[i] == 'L')
                    i++;
            }
            if(s[i] == 'R'){
                x++;
                while(s[i] == 'R' || s[i] == 'L')
                    i++;
            }
            if(s[i] == 'U'){
                y++;
                while(s[i] == 'U' || s[i] == 'D')
                    i++;
            }
            if(s[i] == 'D'){
                y--;
                while(s[i] == 'U' || s[i] == 'D')
                    i++;
            }
        }
        cout << x << " " << y;
        breakline;
    }
}