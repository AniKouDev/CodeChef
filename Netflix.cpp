#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        int s1 = a+b;
        int s2 = b+c;
        int s3 = c+a;
        if(x<=s1 || x<=s2 || x<=s3)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}