#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[101]={0}, max = 0;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            arr[k]++;
            if(max < arr[k])
                max = arr[k];
        }
        cout << n - max;
        breakline;
    }
}