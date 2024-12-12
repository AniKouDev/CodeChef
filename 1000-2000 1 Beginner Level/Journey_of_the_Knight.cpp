#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = abs(a-c) + abs(b-d);
        if(sum % 2 == 0)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}