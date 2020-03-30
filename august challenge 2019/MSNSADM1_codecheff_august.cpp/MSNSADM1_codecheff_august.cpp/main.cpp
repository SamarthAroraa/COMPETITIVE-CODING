//
//  main.cpp
//  MSNSADM1_codecheff_august.cpp
//
//  Created by Samarth Arora on 02/08/19.
//  Copyright © 2019 Samarth Arora. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,t,i;
    vector<int> a;
    vector<int> b;
    vector<int> score;
    int e;
    int max=-1;
    
    cin>>t;
    int k=0;
    while(k<t)
        
    {max=-1;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>e;
            a.push_back(e);
            
        }
        for(i=0;i<n;i++)
        {
            cin>>e;
            b.push_back(e);
        }
        for(i=0;i<n;i++)
        {
            e=a[i]*20-b[i]*10;
            if (e<0)
                e=0;
            score.push_back(e);
        }
        for(i=0;i<n;i++)
        {
            if(score[i]>max)
                max=score[i];
        }
        cout<<max<<endl;
        a.clear();
        b.clear();
        score.clear();
        k++;
        
    }
    
    return  0;}
