#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(n%2==0){
            if(k==n/2)
                cout << "YES";
            else
                cout << "NO";
        }
        else{
            if(k == n/2 || k == n/2+1)
                cout << "YES";
            else
                cout << "NO";
        }
        breakline;
    }
}