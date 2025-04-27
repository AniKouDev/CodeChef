#include <iostream>
#include <string>
using namespace std;

#define breakline cout << endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s; 
        int count = 1;
        int zeros = 0, ones = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                ones++;
            else
                zeros++;
            if(ones == zeros){
                count*=2;
            }
        }
        if(count == 0)
            cout << 1;
        else
            cout << count;
        breakline;
    }
}