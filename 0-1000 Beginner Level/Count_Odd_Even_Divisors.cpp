#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int counte = 0, counto = 0;
        for(int i = 1; i <= n; i++){
            if(n%i == 0){
                if(i%2 == 0)
                    counte++;
                else
                    counto++;
            }
        }
        cout << counto << " " << counte;
        breakline;
    }
}