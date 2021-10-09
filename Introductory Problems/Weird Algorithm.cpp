#include <iostream>
#include <bits/stdc++.h>
#include <vector>
 
using namespace std;
void weird_algorithm(long int n)
{
    cout<<n<<" ";
    if(n==1)
    {
        return;
    }
    else
    {
        if(n%2)
        {
            n=n*3+1;
        }
        else
        {
            n=n/2;
        }
        weird_algorithm(n);
    }
}
 
int main()
{
    long int n;
    cin>>n;
    weird_algorithm(n);
    return 0;
}