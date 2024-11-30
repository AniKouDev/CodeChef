#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        string s="";
        for(int i = 0; i < n; i++){
            long long help;
            cin >> help;
            if(help%k == 0)
                s += '1';
            else
                s += '0';
        }
        cout << s;
        breakline;
    }
}