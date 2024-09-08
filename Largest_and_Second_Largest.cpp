#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n]; 
        int max = 0, secmax = -1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] > max){
                secmax = max;
                max = a[i];
            }
            else if(secmax < a[i] && a[i]!=max)
                secmax = a[i];
        }
        cout << max + secmax << endl;
    }
}
