#include <iostream>
#include <map>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> m;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            m[k]++;
        }
        for(auto k : m){
            if(k.second%2 == 1){
                cout << k.first;
                break;
            }
        }
        breakline;
    }
}