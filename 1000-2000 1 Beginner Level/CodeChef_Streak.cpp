#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int om = 0, streak = 0, addy = 0;
        for(int i = 0; i < n; i++){
            int h;
            cin >> h;
            if(h == 0)
                streak = 0;
            else
                streak++;
            if(om < streak)
                om = streak;
        }
        streak = 0;
        for(int i = 0; i < n; i++){
            int h;
            cin >> h;
            if(h == 0)
                streak = 0;
            else
                streak++;
            if(addy < streak)
                addy = streak;
        }
        if(om>addy)
            cout << "Om";
        else if (om == addy)
            cout << "Draw";
        else
            cout << "Addy";
        breakline;
    }
}