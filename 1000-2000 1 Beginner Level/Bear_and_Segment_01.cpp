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
            if(s[i] == '1'){
                count++;
            }
            while(s[i] == '1'){
                i++;
            }
        }
        cout << ((count != 1)?"NO":"YES");
        breakline;
    }
}