#include <iostream>
using namespace std;

#define breakline cout << endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << ((n%2==0)?"Yes":"No");
        breakline;
    }
}