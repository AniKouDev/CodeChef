#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x*4 > 1000)
            cout << "No";
        else
            cout << "Yes";
        breakline;
    }
}