//
//  main.cpp
//  CODEJAM_QAULIFIER_B.cpp
//
//  Created by Sama#
#include <iostream>
#include<string>

using namespace std;

int main()

{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif
   int t,k=0,n,i;
    string a,b;
    cin>>t;
    while(k<t)
    {   a="";
        b="";
        cin>>n;
        cin>>a;
        
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='E')
                b=b+'S';
            else
                b=b+'E';
        }
        cerr<<"Case #"<<k+1<<": "<<b<<endl;
        k++;
    }
    return 0;
}
