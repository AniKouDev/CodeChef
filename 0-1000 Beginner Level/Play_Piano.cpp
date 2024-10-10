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
        int flag = 0;
        for(int i = 0; i < s.size(); i+=2){
            if(s[i] == s[i+1])
                flag = 1;
        }
        cout << ((flag)?"No":"Yes");
        breakline;
    }
}