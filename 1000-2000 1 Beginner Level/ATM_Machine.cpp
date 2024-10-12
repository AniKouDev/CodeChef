#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, total;
        cin >> n >> total;
        string s = "";
        for(int i = 0; i < n; i++){
            int h;
            cin >> h;
            if(h<=total){
                s += '1';
                total -= h;
            }
            else
                s += '0';
        }
        cout << s;
        breakline;
    }
}