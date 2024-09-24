#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x>=7)
            cout << "HEAVY";
        else if(x>=3)
            cout << "MODERATE";
        else
            cout << "LIGHT";
        breakline;
    }
}