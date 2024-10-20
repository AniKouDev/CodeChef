#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int odd = 0;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            if(k%2 != 0)
                odd++;
        }
        if(odd%2 == 0 && odd != 0)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}