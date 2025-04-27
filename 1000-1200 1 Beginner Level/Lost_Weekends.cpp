#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int sum = 0;
        for(int i = 0; i < 5; i++){
            int k;
            cin >> k;
            sum += k;
        }
        int p;
        cin >> p;
        sum *= p;
        cout << ((sum>120)?"Yes":"No");
        breakline;
    }
}