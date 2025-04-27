#include <iostream>
using namespace std;

#define breakline cout<<endl

// commented part below lets you get the maximum sum from all the diagonals of the matrix, not just main diagonal

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n*n];
        for(int i = 0; i < n*n; i++){
            cin >> arr[i];
        }
        long long max_sum = 0;
        for(int i = 0; i < n*n; i++){
            long long sum;
            if(i/n == 0){
                sum = arr[i];
                int help = i/n+1;
                int j = i+n+1;
                while(j/n == (help)){
                    sum += arr[j];
                    help = j/n+1;
                    j += n+1;
                }
                if(max_sum < sum){
                    max_sum = sum;
                }
                // sum = arr[i];
                // help = i/n+1;
                // j = i+n-1;
                // while(j/n == (help)){
                //     sum += arr[j];
                //     help = j/n+1;
                //     j += n-1;
                // }
                // if(max_sum < sum){
                //     max_sum = sum;
                // }
            }
            else if(i%n == 0){
                sum = arr[i];
                int j = i+n+1;
                while(j < n*n){
                    sum += arr[j];
                    j += n+1;
                }
                if(max_sum < sum){
                    max_sum = sum;
                }
            }
            // else if(i%n == n-1){
            //     sum = arr[i];
            //     int j = i+n-1;
            //     while(j < n*n){
            //         sum += arr[j];
            //         j += n-1;
            //     }
            //     if(max_sum < sum){
            //         max_sum = sum;
            //     }
            // }
        }
        cout << max_sum;
        breakline;
    }
}