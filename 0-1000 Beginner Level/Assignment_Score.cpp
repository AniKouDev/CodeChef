#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int total = 100*(n+1);
        total = 0.5*total;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            sum += help;
        }
        int required = total - sum;
        if(required > 100)
            cout << -1;
        else if(required < 0)
            cout << 0;
        else
            cout << required;
        breakline;
    }
}