#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k, l;
        cin >> n >> k >> l;
        vector<long long> s;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            long long a, b;
            cin >> a >> b;
            if(b==l){
                sum+=a;
                s.push_back(a);
            }
        }
        if(s.size() == k){
            cout << sum;
        }
        else if(s.size() < k){
            cout << -1;
        }
        else{
            sort(s.begin(), s.end());
            long long sum1 = 0;
            for(int i = s.size()-1, h = 0; h < k; i--, h++){
                sum1 += s[i];
            }
            cout << sum1;
        }
        breakline;
    }
}