#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, row, col, top, bottom, left, right, min1, min2, min;
    cin>>n;
    int size=2*n-1;
    for(row=0; row<size; row++){
        for(col=0; col<size; col++){
            top=row;
            bottom=size-1-row;
            left=col;
            right=size-1-col;
            min1=top<bottom? top:bottom;
            min2=left<right? left:right;
            min=min1<min2? min1:min2;
            cout<<n-min;
        }
        cout<<"\n";
    }
}