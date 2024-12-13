#include <iostream>
#include <climits>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int min_xor = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            min_xor ^= arr[i];
        }
        int min = INT_MAX;
        for(int i = 0; i < n; i++){
            int help = min_xor^arr[i];
            if(min > help)
                min = help;
        }
        cout << ((min < min_xor)?min:min_xor);
        breakline;
    }
}