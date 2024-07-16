
#include<bits/stdc++.h>
using namespace std;

int multiply(int a,int b)
{
    int multiplication;
    if(b==0)
    {
        return 0;
    }
    multiplication=multiply(a,b-1)+a;

    return multiplication;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<multiply(a,b);

}


//Time Complexity : O(b)
//Space Complexity : O(b))
