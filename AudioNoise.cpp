using namespace std;
#include<iostream>
int main()
{
    //we have taken row and col because for 0,0 index values are overlapping
    int row=1,col=1;
    int mat[4][5] = {{0,1,0,1,0},{1,0,1,1,0},{1,1,1,1,1},{0,0,1,1,0}};
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j]==0){
                if(i==0){
                    col=0;
                }
                else if(j==0){
                    row=0;
                }
                else
                mat[i][0]=mat[0][j]=0;
            }
        }
    }

    for(int i=1;i<4;i++){
        if(mat[i][0]==0){
            for(int j=0;j<5;j++){
                mat[i][j]=0;
            }
        }
    }
    for(int j=1;j<5;j++){
        if(mat[0][j]==0){
            for(int i=0;i<4;i++){
                mat[i][j]=0;
            }
        }
    }
    if(row==0){
        for(int i=0;i<4;i++)
        mat[i][0]=0;
    }
    if(col==0){
        for(int j=0;j<5;j++)
        mat[0][j]=0;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
