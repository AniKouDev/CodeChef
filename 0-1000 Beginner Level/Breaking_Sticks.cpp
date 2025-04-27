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
            int help;
            cin >> help;
            if(help > 1)
                sum = sum + help - 1;
        }
        cout << sum;
        breakline;
    }
}