//
//  main.cpp
//  CHEFDIL*_august_challenge.cpp
//
//  Created by Samarth Arora on 08/08/19.
//  Copyright © 2019 Samarth Arora. All rights reserved.
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;


int check(int m)
{
    if(m%2==0)
        return 0;
    else
        return 1;
}

int main()
{
    int t,count=0,flag=0;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        flag=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=="1")
            {
                count++;
            }
            else if(check(count))
            {   cout<<count<<" "<<check(count);
                count=0;
                flag=-1;
                cout<<"WIN"<<endl;
                break;
                
            }
       else
       {
           count=0;
       }
            
        
        }
    if(flag==0)
        cout<<"LOSE"<<endl;
    }
    return 0;
}

