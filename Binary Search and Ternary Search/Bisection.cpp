#include<bits/stdc++.h>
using namespace std;

double mysqrt(double x)
{
    double eps=1e-9, mid, low=0.0, high=x;
    while(high-low>eps){
        mid = (high+low)/2;
        if(x>mid*mid) low=mid;
        else high=mid;
    }
    return mid;
}

int main()
{
	int n;
	cin>>n;
	double sqr=mysqrt(n);
	cout<<sqr<<endl;
}
