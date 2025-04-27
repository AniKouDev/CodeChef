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
        int count = 0;
        string s;
        cin >> s;
        int last = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                last = i;
                count++;
            }
        }
        if(count == 0)
            cout << 0;
        else if(count + k > last+1)
            cout << last+1;
        else
            cout << (((count+k > n)?(n):(count+k)));
        breakline;
    }
}