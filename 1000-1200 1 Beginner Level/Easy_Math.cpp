#include <iostream>
using namespace std;

#define breakline cout<<endl

int getSum(int a){
    int sum = 0;
    while(a!=0){
        sum += a%10;
        a=a/10;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int max = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int help = getSum(arr[i]*arr[j]);
                if(max < help){
                    max = help;
                }
            }
        }
        cout << max;
        breakline;
    }
}