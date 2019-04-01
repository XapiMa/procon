#include <iostream>
#include <algorithm>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){

        double deg, dis;
        cin >> deg >> dis;
        deg /= 10;
        string degs[] = {"NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW","N"};
        double d = 11.25; string ans_deg="N";
        for (int i = 0; i < 16; i++) {
                if(d <= deg) ans_deg=degs[i];
                d+=360/16.0;
        }
        double s = round(dis/6.0)/10.0;
        int ans_s = 12;
        double ss[] = {0.2,1.5,3.3,5.4,7.9,10.7,13.8,17.1,20.7,24,4,28.4,32.6};
        for (int i = 11; i >= 0; i--) {
                if(s <= ss[i]) {
                        ans_s = i;
                }
        }
        if (ans_s == 0) ans_deg = "C";

        cout << ans_deg << " " << ans_s << endl;

        return 0;
}
