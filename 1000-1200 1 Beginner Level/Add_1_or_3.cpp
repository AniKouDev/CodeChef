#include <iostream>
#define endl cout << endl;
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long int n, m;
        cin >> n >> m;
        if(m < n)
            cout << "No";
        else if(n == m)
            cout << "Yes";
        else{
            if((m-n)%2 == 0 && m<=(3*n))
                cout << "Yes";
            else
                cout << "No";
        }
        endl;
    }
}