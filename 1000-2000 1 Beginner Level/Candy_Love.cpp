#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            sum += k;
        }
        cout << ((sum%2 == 0)?"No":"Yes");
        breakline;
    }
}