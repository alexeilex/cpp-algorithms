#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    string mode;
cin >> a >> b;
cin >> mode;
if(mode=="freeze") {
    if(a>b) c=b;
    else c=a;
}
else if(mode=="heat") { 
    if(a<b) c=b;
    else c=a;
}
else if(mode=="auto") c=b;
else if(mode=="fan") c=a;
cout << c;
}