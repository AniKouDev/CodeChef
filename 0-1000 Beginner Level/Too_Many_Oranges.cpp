#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int help = (11*n)-k;
        if((help >= (-1*n)) && (help <= n))
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}