#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x;
        cin >> x;
        int even = n/2, odd = ((n%2 == 0)?(n/2):((n/2)+1));
        cout << ((x%2 == 0)?(even-1):(odd-1));
        breakline;
    }
}