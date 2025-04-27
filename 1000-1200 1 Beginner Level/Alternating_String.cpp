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
        int counto = 0, countz = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0')
                countz++;
            else
                counto++;
        }
        int help = min(counto, countz);
        if(help == 0)
            cout << 1;
        else if(help == max(counto, countz))
            cout << help*2;
        else
            cout << help*2 + 1;
        breakline;
    }
}