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
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                sum += (s[i]-'0');
            }
        }
        cout << sum;
        breakline;
    }
}