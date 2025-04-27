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
        int total = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1' && s[i+1] == '0' && i != n-1)
                total++;
        }
        cout << total;
        breakline;
    }
}