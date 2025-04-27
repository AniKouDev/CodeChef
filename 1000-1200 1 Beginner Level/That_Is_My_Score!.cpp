#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[9]={0};
        for(int i = 0; i < n; i++){
            int p;
            cin >> p;
            int s;
            cin >> s;
            if(p<9){
                if(arr[p]<s)
                    arr[p] = s;
            }
        }
        int sum = 0;
        for(int i = 0; i < 9; i++)
            sum += arr[i];
        cout << sum;
        breakline;
    }
}