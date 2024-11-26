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
        int ones = 0, zeros = 0;
        for(int i = 0; i < n;){
            if(s[i] == '1'){
                ones++;
                while(s[i] == '1'){
                    i++;
                }
            }
            if(s[i] == '0'){
                zeros++;
                while(s[i] == '0'){
                    i++;
                }
            }
        }
        cout << min(ones, zeros);
        breakline;
    }
}