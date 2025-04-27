#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ones = 0, zeros = 0;
        for(int i = 0; i < n; i++){
            char help;
            cin >> help;
            if(help == '1')
                ones++;
            else
                zeros++;
        }
        int m = min(ones, zeros);
        if(m%2 == 0)
            cout << "YES";
        else
            cout << ((n%2)?"YES":"NO");
        breakline;
    }
}