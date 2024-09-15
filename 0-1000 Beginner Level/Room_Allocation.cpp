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
        while(n--){
            int c;
            cin >> c;
            if(c%2==0)
                sum+=(c/2);
            else
                sum+=(c/2 + 1);
        }
        cout << sum;
        breakline;
    }
}