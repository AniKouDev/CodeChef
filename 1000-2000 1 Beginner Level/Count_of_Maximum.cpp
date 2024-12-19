#include <iostream>
#include <map>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> m;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            m[help]++;
        }
        int maxCount = -1, minElement = 10001;
        for(auto i : m){
            if(i.second > maxCount){
                maxCount = i.second;
                minElement = i.first;
            }
            else if(i.second == maxCount){
                if(i.first < minElement)
                    minElement = i.first;
            }
        }
        cout << minElement << " " << maxCount;
        breakline;
    }
}