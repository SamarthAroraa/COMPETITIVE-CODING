//
//  main.cpp
//  ZOMCAV_august.cpp
//
//  Created by Samarth Arora on 05/08/19.
//  Copyright © 2019 Samarth Arora. All rights reserved.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

 void printa(vector <long long> a,string text="")

 {   cout<<text<<endl;
     for (int i=0;i<a.size();i++)
     {
         cout<<a[i]<< " ";
     }


     cout<<endl;
 }

 void printa(vector <int> a,string text="")
 {
     cout<<text<<endl;
     for(int i=0;i<a.size();i++)

     {

         cout<<a[i]<< " ";
     }
     cout<<endl;
 }


int main()

{   vector<int>::iterator it;
    vector<long long> rp;
    vector<long long> zh;
    
    int t,n,i;
    cin>>t;
    
    while(t--)
    {   cin>>n;
        vector<long long> rl(n+1,0);
        vector<long long> d(n+2,0);

        rp.push_back(0);
        for(i=1;i<n+1;i++)                    //Accepting radiation power values
        {   int a;
            cin>>a;
            rp.push_back(a);
        }
        
        for(i=0;i<n;i++)                    //Accepting zombie health values
        {   long long a;
            cin>>a;
            zh.push_back(a);
            
        }
        zh.push_back(0);
        d[0]=rp[0];
        for(int i=1;i<n+1;i++)
        {
            long long range[]={i+rp[i],i-rp[i]};
            if(range[1]<1)
                range[1]=1;
            if(range[0]>n)
                range[0]=n;
            d[range[1]]+=1;
            d[range[0]+1]-=1;
        }
        int sum=0;
        for(i=1;i<n+1;i++){
            sum=sum+d[i];
            rl[i]=sum;
        }
        
        
        sort(rl.begin(), rl.end());
        sort(zh.begin(),zh.end());
        
        if(zh==rl)
        {
            cout<<"YES"<<endl;
            
        }
        else
            cout<<"NO"<<endl;
        
            
            
            
//            for(long long j=range[1];j<=range[0];j++)
//            {
//                rl[j]+=1;
//            }
//        }
//        printa(d,"diff arr");
//         printa(rl," rad level");
//         printa(zh,"zom health");
////
////        for(int j=0;j<n;j++)
//        {
//            it=find(rl.begin(),rl.end(),zh[j]);
//            if(it==rl.end())
//            {
//                cout<<"NO"<<endl;
//                break;
//            }
//            else
//            {
//                rl.erase(it);
//            }
//        }
//        if(rl.empty())
//        {
//            cout<<"YES"<<endl;
//        }
//
        rl.clear();
        zh.clear();
        rp.clear();
        
    }
    return 0;
}




