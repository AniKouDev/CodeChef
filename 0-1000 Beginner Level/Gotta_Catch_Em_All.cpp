#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = 0;
        for(int i = 0; i < a; i++){
            int n;
            cin >> n;
            sum += min(b*n,c);
        }
        cout << sum;
        breakline;
    }
}