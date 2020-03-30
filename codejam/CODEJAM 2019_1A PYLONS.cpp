//
//  main.cpp
//  backtracking n queen(own try)
//
//  Created by Samarth Arora on 30/09/19.
//  Copyright © 2019 Samarth Arora. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;
#define n 21
#define deb(x) cout<<#x<< " "<<x<<endl;
int r,c;
void printboard(bool board[n][n],int r,int c)
{
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<board[i][j]<<" ";

    cout<<endl;
    }

}
bool issafe(bool board[n][n],int row, int col,int prev_col,int prev_row){

    // pending->add prev_row and prev_col functionalities in the checker function
    // to align function with the problem requirements
    int i,j;
    //check column attack
    // for(int i=0;i<r;i++){
    //     if(board[i][col]==1)
    //         return false;
    // }
    if(prev_col==col)
    return false;
    //check upper diaganol left
    if(abs(row-col)==abs(prev_row-prev_col))
    return false;


    // for(i=col,j=row;i>=0 and j>=0;i--,j--){
    //     if(board[j][i]==1)
    //         return false;
    //
    // }
    //check upper diagonal right
    if(abs(row+col)==abs(prev_col+prev_row))
        return false;
    // for(i=col,j=row;i<c and j>=0;i++,j--){
    //     if(board[j][i]==1)
    //         return false;
    // }

    return true;

}
int prev_row=0;
int prev_col=0;
int placequeens(bool board[n][n],int row){
    //base case
    if(row>=r){
        printboard(board,r,c);
        cout<<endl;

        return true;
    }
    bool rval=false;
    for(int i=0;i<c;i++){
        if(issafe(board, row, i,prev_col,prev_row)){
            board[row][i]=1;
            prev_col=i;
            prev_row=row;
        if(placequeens(board, row+1))
        {

            // board[row][i]=0;
            // rval=true;
            return 1;


        }
        board[row][i]=0;
        }//backtrack
    }
    return rval;

}
void initialize_galaxy(int r, int c, bool board[21][21]){
    // cout<<"1a"<<endl;
    for(int i=0;i<r;i++){
        for ( int j=0;j<c;j++) {
        board[r][c]=0;
        // deb(j);

        }
        // deb(i);
    }

return;}

int main()
{
    #ifdef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    feropen("output.txt","w",stdout);
    #endif

int t;
// cout<<"test\n";
cin>>t;
bool board[21][21];
while (t--) {
    /* code */

    cin>>r>>c;
    initialize_galaxy(r,c,board);
    // cout<<"1\n";
    if(!placequeens(board,0))
    cout<<"IMPOSSIBLE"<<endl;
    // cout<<"2\n";

    // printboard(board,r,c);
    // cout<<"hello";


}





    // if(placequeens(board, 0))
//    printboard(board);
    return  0;
}
