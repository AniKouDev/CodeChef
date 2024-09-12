#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if(a+3 <= 10)
            cout << "yes";
        else
            cout << "no";
        breakline;
    }
}