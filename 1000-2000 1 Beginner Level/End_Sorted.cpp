#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int first = 0, last = 0;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            if(k == 1)
                first = i;
            else if(k == n)
                last = i;
        }
        if(last<first)
            cout << first + n - 1 - last - 1;
        else
            cout << first + n - 1 - last;
        breakline;
    }
}