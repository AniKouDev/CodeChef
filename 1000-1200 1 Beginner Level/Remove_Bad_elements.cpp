#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n+1] = {0};
        int max = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            arr[help]++;
            if(max < arr[help]){
                max = arr[help];
            }
        }
        cout << n-max;
        breakline;
    }
}