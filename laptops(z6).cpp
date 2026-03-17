#include <iostream>
using namespace std;
int main() {
int sizes[4];
cin >> sizes[0] >>sizes[1]>>sizes[2]>>sizes[3];
int minS=(sizes[0]+sizes[2])*max(sizes[1], sizes[3]);
int first=sizes[0]+sizes[2];
int second=max(sizes[1], sizes[3]);

for(int i=0;i<2;i++) {
    for(int j=0;j<2;j++) {
        int firstNumber=sizes[i]+sizes[2+j];
        int secondNumber=max(sizes[1-i],sizes[3-j]);
            if(minS>firstNumber*secondNumber) {
        minS=firstNumber*secondNumber;
        first=firstNumber;
        second=secondNumber;
            }
    }
}
/*

*/


cout << first <<' ' << second;
}