#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << ((x>=2000)?"Yes":"No");
        breakline;
    }
}