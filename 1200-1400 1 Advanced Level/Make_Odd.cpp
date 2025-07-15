#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int countZ = 0, countO = 0, countM = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == '1' && b[i] == '1')
                countO++;
            else if(a[i] == '0' && b[i] == '0')
                countZ++;
            else
                countM++;
        }
        if(countO%2 == 1)
            cout << "Yes";
        else{
            if(countM > 0)
                cout << "Yes";
            else    
                cout << "No";
        }
        breakline;
    }
}