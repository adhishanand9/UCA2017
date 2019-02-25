using namespace std;
#include<iostream>
static int a[4][4]={{1,-1,1,1},{1,1,-1,1},{-1,1,1,1},{1,1,1,1}};
int boundary(int i,int j){
    if( j<4 && j>=0 && i<4 && i>=0)
        return 0;
    else
        return 1;
}
int notProcessed(int i,int j){
    if(a[i][j]==1)
        return 1;
    else
        return 0;
}
void robot(int i,int j){
    if(boundary(i,j))
    return;
    if(notProcessed(i,j)){
        a[i][j]=0;
        if(notProcessed(i+1,j)){
            robot(i+1,j);
          //  return;
        }
        if(notProcessed(i-1,j)){
            robot(i-1,j);
            //return;
        }
        if(notProcessed(i,j+1)){
            robot(i,j+1);
           // return;
        }
        if(notProcessed(i,j-1)){
            robot(i,j-1);
           // return;
        }
        // robot(++i,j);
        // robot(i,++j);
        // robot(--i,j);
        // robot(i,--j);
        // // return;
    }
    return;
}
int main()
{
   
    int row,col;
    cin>>row>>col;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    robot(row,col);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}