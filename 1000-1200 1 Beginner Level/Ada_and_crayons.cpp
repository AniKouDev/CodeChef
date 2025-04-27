#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int up = 0, down = 0;
        for(int i = 0; i < s.size();){
            if(s[i] == 'U')
                up++;
            while((s[i] == 'U') && (i < s.size())){
                i++;
            }
            if(s[i] == 'D')
                down++;
            while((s[i] == 'D') && (i < s.size())){
                i++;
            }
        }
        cout << min(up, down);
        breakline;
    }
}