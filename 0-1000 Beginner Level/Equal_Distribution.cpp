#include <iostream>
using namespace std;

#define breakline cout<<endl;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        x+=y;
        cout << ((x%2==0)?"Yes":"No");
        breakline;
    }
}