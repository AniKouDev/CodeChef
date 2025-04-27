#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ar[11] = {0};
        int max = 0;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            ar[k]++;
            if(max < ar[k])
                max = ar[k];
        }
        cout << n-max;
        breakline;
    }
}