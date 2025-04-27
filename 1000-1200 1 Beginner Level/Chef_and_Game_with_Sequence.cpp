#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            if(k%2 != 0)
                count++;
        }
        if(count%2 != 0 && n>1)
            cout << 2;
        else
            cout << 1;
        breakline;
    }
}