#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k;
        cin >> k;
        for(int i = 1; i < n; i++){
            int h;
            cin >> h;
            k ^= h;
        }
        cout << ((k)?"No":"Yes");
        breakline;
    }
}