#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, h;
        cin >> x >> h;
        cout << ((x>=h)?"YES":"NO");
        breakline;
    }
}