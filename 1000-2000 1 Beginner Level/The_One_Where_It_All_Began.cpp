#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n>=21)
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}