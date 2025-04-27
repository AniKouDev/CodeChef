#include <iostream>
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
        int zeroflag = 0, flipflag = 0;
        for(int i = 0; i < n-1; i++){
            if(s[i] == '1'){
                zeroflag = 1;
                if(s[i+1] == '1'){
                    flipflag = 1;
                    break;
                }
            }
        }
        if(s[n-1] == '1')
            zeroflag = 1;
        if(zeroflag == 0)
            cout << 0;
        else{
            if(flipflag == 0)
                cout << 1;
            else
                cout << 2;
        }
        breakline;
    }
}