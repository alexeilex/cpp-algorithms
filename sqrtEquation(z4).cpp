#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b>>c;
    long long cc=c*c*1L;
    if((a==0&&b==0&&c==0)||(a==0 &&b==cc)) cout << "MANY SOLUTIONS";
    else if(c<0||(a==0&&b!= cc)) cout <<"NO SOLUTION";
    else {
        double x1=(double)(-b+cc)/a;
        double x2=(double)(-b-cc)/a;
        double eps=1e-9;
        if ((a*x1 + b>=0)&&abs(x1-round(x1))<eps) cout << x1;
        else if ((a*x2 + b>=0)&&abs(x2-round(x2))<eps) cout << x2;
        else cout << "NO SOLUTION";
        
        
    }

}