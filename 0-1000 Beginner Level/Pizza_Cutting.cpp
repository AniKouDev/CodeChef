#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x==1 || x%2==0)
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}