#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        int total = 0;
        for(int i = 0; i < n; i++){
            if(a[i]>=x)
                total += b[i];
        }
        cout << total;
        breakline;
    }
}