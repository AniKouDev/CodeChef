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
        int a, b;
        while(n--){
            cin >> a >> b;
            if(b-a > 5)
                sum++;
        }
        cout << sum;
        breakline;
    }
}