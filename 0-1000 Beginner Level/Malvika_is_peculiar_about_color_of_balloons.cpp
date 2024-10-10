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
        int a = 0, b = 0;
        for(char i : s){
            if (i == 'a')
                a++;
            else
                b++;
        }
        cout << min(a,b);
        breakline;
    }
}