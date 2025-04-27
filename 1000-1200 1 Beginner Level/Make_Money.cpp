#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, c;
        cin >> n >> k >> c;
        int arr[n];
        int total = 0, spend = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(k-help > c){
                total += k;
                spend += c;
            }
            else{
                total += help;
            }
        }
        cout << total-spend;
        breakline;
    }
}