//Count set bits in an integer
//Recusive Method

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int setBit(int n){
    if(n==0){
        return 0;
    }
    else
    return (n&1)+setBit(n >> 1);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout << setBit(n) << endl;
            }
    return 0;
}


