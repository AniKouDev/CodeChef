#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a/c < b/d)
            cout << "Chef";
        else if(a/c == b/d)
            cout << "Both";
        else
            cout << "Chefina";
        breakline;
    }
}