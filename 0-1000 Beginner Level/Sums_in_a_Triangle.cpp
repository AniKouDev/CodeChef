#include <iostream>
#include <vector>
using namespace std;

#define ll unsigned long long int
#define breakline cout<<endl

ll getSum(vector<vector<ll>> &a,int i,int j, int n, vector<vector<ll>> &dp)
{
    if(i==n-1)
        return a[n-1][j];
    if(dp[i][j]!=-1) return dp[i][j];
    
    ll down=a[i][j]+getSum(a,i+1,j,n,dp);
    ll diag=a[i][j]+getSum(a,i+1,j+1,n,dp);
    dp[i][j]=max(down,diag);
    return dp[i][j];
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<ll>> arr(n,vector<ll> (n));
        vector<vector<ll>> dp(n,vector<ll> (n,-1));
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                int k;
                cin >> k;
                arr[i][j] = k;
            }
        }
        cout << getSum(arr, 0, 0, n, dp);
        breakline;
    }
}