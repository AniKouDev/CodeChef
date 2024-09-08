#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        if(e*c<=a && e*d<=b)
            cout << "Yes";
        else 
            cout << "No";
        cout << endl;
    }
}