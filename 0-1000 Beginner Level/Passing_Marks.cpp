#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d, e, f, g;
        cin >> a >> b >> c >> d >> e >> f >> g;
        if((e>=a && f>=b && g>=c && (e+f+g >= d)))
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}