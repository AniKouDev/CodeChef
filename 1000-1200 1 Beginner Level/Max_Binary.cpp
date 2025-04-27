#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(s[0] == '0'){
            s[0] = '1';
            k--;
        }
        while(k!=0){
            s += '0';
            k--;
        }
        cout << s;
        breakline;
    }
}