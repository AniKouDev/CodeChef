#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float n,m,k;
        cin >> n >> m >> k;
        cout << ((n/k>m)?"No":"Yes");
        breakline;
    }
}