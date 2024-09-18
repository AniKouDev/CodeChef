#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(b/a == 0)
            cout << a-(b%a);
        else
            cout << min(b%a, a-(b%a));
        breakline;
    }
}