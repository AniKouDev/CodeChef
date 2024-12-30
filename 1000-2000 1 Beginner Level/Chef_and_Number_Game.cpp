#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long groupP = 0, sumP = 0, groupN = 0, sumN = 0;
        for(int i = 0; i < n; i++){
            long long help;
            cin >> help;
            if(help > 0){
                groupP++;
                sumP += help;
            }
            else if(help < 0){
                groupN++;
                sumN += help;
            }
        }
        // if(sumN == sumP){
        //     cout << max(groupN, groupP) << " " << min(groupN, groupP);
        // }
        // else if(sumN > sumP)
        //     cout << groupN << " " << groupN;
        // else
        //     cout << groupP << " " << groupP;
        if(groupN == 0 || groupN == n)
            cout << n << " " << n;
        else
            cout << max(groupN, groupP) << " " << min(groupN, groupP);
        breakline;
    }
}