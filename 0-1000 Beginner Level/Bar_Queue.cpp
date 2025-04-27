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
        int cb = 0, cg = 0;
        int flag = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B')
                cb++;
            else
                cg++;
            if(cb > (2*cg)){
                cout << i+1;
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            cout << n;
        breakline;
    }
}