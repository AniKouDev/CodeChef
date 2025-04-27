#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int help = n%8;
        if(help == 0)
            cout << n-1 << "SL";
        else if(help == 7)
            cout << n+1 << "SU";
        else if(help == 6)
            cout << n-3 << "UB";
        else if(help == 5)
            cout << n-3 << "MB";
        else if(help == 4)
            cout << n-3 << "LB";
        else if(help == 3)
            cout << n+3 << "UB";
        else if(help == 2)
            cout << n+3 << "MB";
        else
            cout << n+3 << "LB";
        breakline;
    }
}