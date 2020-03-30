//
//  main.cpp
//  CHEFDIL_august_challenge.cpp
//
//  Created by Samarth Arora on 03/08/19.
//  Copyright © 2019 Samarth Arora. All rights reserved.
//

#include <iostream>
#include<string>
#include<vector>
#include<stdio.h>
using namespace std;




int compare(vector<int> a,vector<int> b)
{
//    if(a.size()!=b.size())
//    {cout<<a.size()<<" "<<b.size()<<endl;
//        return 0;}
//    else{
        for(int i=0;i<b.size();i++)
        {
            if (a[i]!=b[i]){
                return 0;}
        }
//    }
    return 1;}


int check(vector<int> s)
{
    
    int n=s.size(),i;
     vector<int> coms(n,(int)-1);
   
    for( i=0;i<n;i++)
    {
        coms.push_back(-1);
        
        
    }
    if (compare(coms,s))
    {
        return -1;
        
    }
        for (i=0;i<n;i++){
            if (s[i]==1)
                return i;
        }
    return -2;
       
}
    
void flip(vector<int>& s,int k)
{   int n=s.size();
    
    k=(int)k;
    s[k]=-1;
    if (k<n-1)
    {
        if(s[k+1]==1)
            s[k+1]=0;
        else if (s[k+1]==0)
            s[k+1]=1;
    }
    if(s[k-1]==0 && k-1>=0)
    {
        s[k-1]=1;
    }
    else if(s[k-1]==1 && k-1>=0)
        s[k-1]=0;
    
}


int main()
{   vector<int> s;
    int t,k=0;
    int n;
    cin>>t;
    while(k<t)
    {   string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
           n=str[i]-'0';
           
            s.push_back(n);
        }
       while(true)
       {
           n=check(s);
        
           if(n==-2)
           {cout<<"LOSE"<<endl;
               break;}
           else if(n==-1)
           {
               cout<<"WIN"<<endl;
               break;
           }
           else
           { flip(s,n);
           }
           
       }
            
        k++;
    }
    
    
    
    
    return 0;
}

