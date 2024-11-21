#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        long long sum = 0;
        for(int i = 0; i < a; i++){
            int help;
            cin >> help;
            sum += (abs(1-help) > abs(b-help)) ? abs(1-help) : abs(b-help);
        }
        cout << sum;
        breakline;
    }
}