#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n%2 == 0){
            cout << ((m%2 == 0)?((m/2)*(n/2)):((m/2+1)*(n/2)));
        }
        else{
            cout << ((m%2 == 0)?((m/2)*(n/2+1)):((m/2+1)*(n/2+1)));
        }
        breakline;
    }
}