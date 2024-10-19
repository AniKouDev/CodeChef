#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int count = 0;
        while(a != 0){
            a = a/b;
            count++;
        }
        cout << count;
        breakline;
    }
}