#include<iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, a, b;
        cin >> x >> a >> b;
        if(a+b+b >= x)
            cout << "Qualify";
        else
            cout << "NotQualify";
        breakline;
    }
}