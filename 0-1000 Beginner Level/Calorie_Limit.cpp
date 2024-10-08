#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int count = 0;
        int sum = 0;
        while(n--){
            int a;
            cin >> a;
            sum += a;
            if(sum<=k)
                count++;
        }
        cout << count;
        breakline;
    }
}