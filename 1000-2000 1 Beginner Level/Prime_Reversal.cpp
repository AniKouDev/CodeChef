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
        int ones = 0, one = 0;
        for(int i = 0; i < n; i++){
            char k;
            cin >> k;
            if(k != '0')
                ones++;
        }
        for(int i = 0; i < n; i++){
            char k;
            cin >> k;
            if(k != '0')
                one++;
        }
        if(one == ones)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}