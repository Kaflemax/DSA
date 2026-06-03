/*#include<iostream>
using namespace std;
int main(){
    //vector<vector<int>>grades={
    int grades[][3]=
    {{1,2,3},
    {4,5,6},
    {7,8,9}};
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            cout<<grades[r][c]<<"\t";
        }
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int i,j;
    int ram[3][3]={{2,3,1},{2,3,2},{1,5,7}};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            cout<<ram[i][j]<<"\t";
    }
    cout<<endl;
}
return 0;
}
