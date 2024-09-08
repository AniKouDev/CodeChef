#include <iostream>
using namespace std;

int count_p(int n){
    return (n*(n-1))/2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int hash[n+1]={0};
        hash[0]=n;
        for(int i = 0; i < n; i++){
            int p = 0;
            int x, y;
            cin >> x >> y;
            hash[0]--;
            hash[y]++;
            int max = -1, num = 0;
            for(int i = 1; i < n+1; i++){
                if(max<hash[i]){
                    num = i;
                    max = hash[i];
                }
                p += count_p(hash[i]);
            }
            p -= count_p(hash[num]);
            p += count_p(hash[num]+hash[0]);
            cout << p << " ";
        }
        cout << endl;
    }
}   