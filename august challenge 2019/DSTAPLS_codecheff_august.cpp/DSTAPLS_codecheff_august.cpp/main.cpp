//
//  main.cpp
//  DSTAPLS_codecheff_august.cpp
//
//  Created by Samarth Arora on 02/08/19.
//  Copyright © 2019 Samarth Arora. All rights reserved.
//

#include <iostream>
#include<vector>

using namespace std;
void printa(vector<int> a);
int main()
{   int i,t,n,k,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>k;
        m=int(n/k);
        vector<int> a(k,0);
        vector<int> b(k,0);
        for(i=0;i<k;i++)
            a[i]+=m;
        
        while(m--)
        {for(i=0;i<k;i++)
        {if(n!=0){
            b[i]+=k;
            n-=k;
            
            
        }
        }
        }
        
        if(a==b)
        {cout<<"NO"<<endl;}
        else{
            cout<<"YES"<<endl;
        }
            
    
    }
    
    
    return 0;
    
}

void printa(vector<int> a)
{
    for(int j=0;j<a.size();j++)
        cout<<a[j]<<" ";
    cout<<endl;
}

//
//  test.cpp
//  DSTAPLS_codecheff_august.cpp
//
//  Created by Samarth Arora on 02/08/19.
//  Copyright © 2019 Samarth Arora. All rights reserved.
//

//
//  main.cpp
//  DSTAPLS_codecheff_august.cpp
//
//  Created by Samarth Arora on 02/08/19.
//  Copyright © 2019 Samarth Arora. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{   int t,n,k,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>k;
        m=int(n/k);
        if(m<k)
            cout<<"YES"<<endl;
        else if(m==k)
        {cout<< "NO"<<endl;}
        else if(m>k)
        {
            if(m%k==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        
        
    }
    return 0;
    
}


