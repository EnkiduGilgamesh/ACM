#include <iostream>

using namespace std;

int main(){
    int xa, xb, ya, yb, xc, yc;

    cin >> xa >> ya >> xb >> yb;

    if((xa + xb - ya + yb) % 2 || (ya + yb + xa - xb) % 2)
        cout << "No Answer!" << endl;
    else{
        xc = (xa + xb - ya + yb) / 2;
        yc = (ya + yb + xa - xb) / 2;
        cout << xc << " " << yc << endl;
    }

    return 0;

}