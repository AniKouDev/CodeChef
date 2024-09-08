#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int h = n;
        double A = 0, B = 0;
        while(h--){
            int x;
            cin >> x;
            if(x==a)
                A++;
            if(x==b)
                B++;
        }
        cout << (double)(A/n)*(double)(B/n) << endl;
    }
}