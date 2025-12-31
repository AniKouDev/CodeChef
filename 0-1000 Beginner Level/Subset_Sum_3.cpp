#include <iostream>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int rem[3] = {0};
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            rem[arr[i]%3]++;
        }
        if(rem[0] > 0 || rem[1] > 2 || rem[2] > 2)
            cout << "Yes";
        else if(rem[1] > 0 && rem[2] > 0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}