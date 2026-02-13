
#include <iostream>
using namespace std;

string cleanSymbols() {
    string output, input;
    getline(cin, input);
    for(int i=0; i< input.length();i++) {
        if(input[i]>='0'&&input[i]<='9') output+=input[i];
    }
    return output;
}
string numberFormatting(string input){
    if(input.length()==7) input= "8495"+input;
    else if(input.length()==8)input.insert(1,"495");
    if(input[0]=='7')input[0]='8';
   // cout << input <<endl;
    return input;
}
int main() {
    string numbers[4], compareNum, firstNum, secondNum, thirdNum;
    for(int i=0;i<4;i++) numbers[i]=cleanSymbols();
    for(int i=0;i<4;i++) {
    numbers[i]=numberFormatting(numbers[i]);
    }
    /*
        for(int i=0;i<4;i++) {
        cout << numbers[i]<<endl;
    }
    */
   for(int i=1;i<4;i++) {
    if(numbers[0].compare(numbers[i])==0) cout <<"YES";
    else cout <<"NO";
    cout <<endl;
   }
}