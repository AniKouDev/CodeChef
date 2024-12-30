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
            int help;
            cin >> help;
            if(help%2 == 0)
                count++;
        }
        if(count == n)
            cout << 0;
        else
            cout << count;
        breakline;
    }
}