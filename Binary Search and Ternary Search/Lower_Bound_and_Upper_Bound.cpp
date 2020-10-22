#include<bits/stdc++.h>
using namespace std;

int lowerbound(int *a, int n, int x)
{
    int left=0, right=n-1, index=-1, mid;
    while(left<=right){
        mid=(left+right)/2;
        if(x==a[mid]){
            index=mid;
            right=mid-1;
        }
        else if(x>a[mid]) left=mid+1;
        else right=mid-1;
    }
    return left;
}

int upperbound(int *a, int n, int x)
{
    int left=0, right=n-1, index=-1, mid;
    while(left<=right){
        mid=(left+right)/2;
        if(x==a[mid]){
            index=mid;
            left=mid+1;
        }
        else if(x>a[mid]) left=mid+1;
        else right=mid-1;
    }
    return left;
}

int main()
{
    int n, x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Enter a number for search: ";
    cin>>x;
    cout<<"The lower bound is at position: "<<lowerbound(a, n, x)<<endl;
    cout<<"The upper bound is at position: "<<upperbound(a, n, x)<<endl;
}
//O(log2^n)
//O(1)
