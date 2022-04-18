// https://codeforces.com/contest/514/problem/A

# include<bits/stdc++.h>
using namespace std;

int main(){
    string givenNumber;
    cin >> givenNumber;

    for(int i=0; i<givenNumber.length(); i++){
        int currentNumber = givenNumber[i] - '0';
        int invertedNumber = 9 - currentNumber;
        // If the first digit is 9 then we don't need to change it, as It will create a number with leading zeroes.
        if(i == 0 && currentNumber == 9){
            cout << currentNumber;
        }else{
            cout << (invertedNumber < currentNumber ? invertedNumber : currentNumber);
        }
    }
}
