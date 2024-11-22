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
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A' || s[i] == 'D' || s[i] == 'O' || s[i] == 'P' || s[i] == 'R' || s[i] == 'Q')
                count++;
            else if(s[i] == 'B')
                count += 2;
        }
        cout << count;
        breakline;
    }
}