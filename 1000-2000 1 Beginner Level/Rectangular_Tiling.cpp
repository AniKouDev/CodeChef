#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if((a*b)%2 == 0)
            cout << "yes";
        else
            cout << "no";
        breakline;
    }
}