#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int count = 0;
        if((a!=c) && (a!=d))
            count++;
        if((b!=c) && (b!=d))
            count++;
        cout << count << endl;
    }
}