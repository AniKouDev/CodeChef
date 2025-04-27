#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int count = 0;
        int flag = 0;
        for(int i = 0; i < a; i++){
            if(s[i] == '0')
                count--;
            if(count < 0){
                flag = 1;
                break;
            }
            if(s[i] == '1')
                count = b;
        }
        cout << ((flag)?"NO":"YES");
        breakline;
    }
}