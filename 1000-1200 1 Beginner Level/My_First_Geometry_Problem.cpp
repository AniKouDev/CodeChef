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
        int ones = 0;
        for(int i = 0; i < 4; i++){
            if(s[i] == '1')
                ones++;
        }
        if(ones == 1)
            cout << 11;
        else if (ones == 2){
            if((s[0] == '1' && s[1] == '1') || (s[2] == '1' && s[3] == '1'))
                cout << 21;
            else
                cout << 121;
        }
        else{
            cout << ((ones == 3)?231:441);
        }
        breakline;
    }
}