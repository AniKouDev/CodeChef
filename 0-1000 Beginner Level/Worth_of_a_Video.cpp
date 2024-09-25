#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int s;
        cin >> s;
        cout << s * 24 * 1000;
        breakline;
    }
}