#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, m;
        cin >> a >> b >> m;
        cout << min(abs(b-a), abs(m-b+a));
        breakline;
    }
}