#include <iostream>
using namespace std;

#define breakline cout<<endl 

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            sum += help;
        }
        if(sum <= c)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}