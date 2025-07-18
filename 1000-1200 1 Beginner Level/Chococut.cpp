#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int count = n*m;
        count = count - k;
        if(count >= n || count >= m){
            cout << count - min((count%n), (count%m));
        }
        else
            cout << 0;
        breakline;
    }
}