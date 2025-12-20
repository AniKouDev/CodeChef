#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int s = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(a[i] > x)
                s += (a[i]-x);
        }
        cout << s << endl;
    }
}