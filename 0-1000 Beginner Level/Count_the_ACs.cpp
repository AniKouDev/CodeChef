#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int sum = (x/100) + (x%100);
        if(sum>10)
            cout << -1;
        else
            cout << sum;
        breakline;
    }
}