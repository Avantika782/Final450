//Find the two non-repeating elements in an 
//array of repeating elements using XOR 

#include<bits/stdc++.h>

using namespace std;

void solve(){
    cout << "Size of Array: " << endl;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int xo=a[0];
    for(int i=1;i<n;i++){
        xo=xo^a[i];
    }
    // right most set bit
    int rmsb;
    rmsb=xo & ~ (xo-1);
    // two repeating elements x and y
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(a[i] & rmsb){
            x=x^a[i];
        }
        else{
            y=y^a[i];
        }
    }
    cout << "Non-repeating elements are:\n";
    cout << x << "  " << y;
}

int main()
{
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}

/*
OUTPUT:
Size of Array:
10
5 2 4 9 7 8 4 8 5 9
Non-repeating elements are:
7  2

Time Complexity: O(n)
Space Complexity: O(1)
*/
