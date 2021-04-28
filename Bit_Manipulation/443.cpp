//Count number of bits to be flipped 
//to convert a to b

#include <iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void solvee(){
    int a,b;
    cin>>a>>b;
    int count=0;
    int xo=a^b;
    while(xo){
        count+=xo&1;
        xo >>= 1;
    }
    cout << count << endl;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
        solvee();
    return 0;
}

/*
XOR of two number will have 
set bits only at those places
where a differs from b

a=10 and b=20
a 00001010
b 00010100
4 bits to flipped to convert a 
into b
 */
