#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(help % 2 == 0)
                even++;
            else
                odd++;
        }
        if(odd == 0)
            cout << 0;
        else if(odd%2 == 0){
            cout << odd/2 + even;
        }
        else{
            cout << (odd/2) + 1 + even;
        }
        breakline;
    }
}