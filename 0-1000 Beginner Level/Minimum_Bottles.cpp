#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int s = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            s += help;
        }
        if(s%x != 0)
            cout << s/x + 1;
        else
            cout << s/x;
        breakline;
    }
}