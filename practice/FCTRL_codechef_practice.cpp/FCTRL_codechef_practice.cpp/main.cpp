//
//  main.cpp
//  FCTRL_codechef_practice.cpp
//
//  Created by Samarth Arora on 13/08/19.
//  Copyright © 2019 Samarth Arora. All rights reserved.
//

#include <iostream>
using namespace std;

int z(long n)
{
    int zeroe=0;
    int i=5;
    while(i<n)
    {
        zeroe+=(int)n/i;
        i*=5;
    }
    return zeroe;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   long n;
        cin>>n;
        cout<<z(n)<<endl;
        
    }
    return 0;
}

