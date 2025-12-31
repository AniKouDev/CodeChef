#include <iostream>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int maxP = 0;
        int arr[n];
        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            s.insert(arr[i]);
        }
        for(int i : s){
            int p = 0;
            for(int j = 0; j < n; j++){
                if(i <= arr[j])
                    p += (i*20);
                else{
                    p -= ((i-arr[j])*30);
                    p += (arr[j]*20);
                }
            }
            maxP = max(maxP, p);
        }
        cout << maxP << endl;
    }
}