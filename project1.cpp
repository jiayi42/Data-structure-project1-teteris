#include <iostream>
#include <string.h>
using namespace std;

int** blocks(char* a,int** game_blocks){
 char p[2];
 p[0]=a[0];p[1]=a[1];
  int I1[16]= { 1,0,0,0,
               1,0,0,0,
               1,0,0,0,
               1,0,0,0};
  int I2[16]= { 0,0,0,0,
               0,0,0,0,
               0,0,0,0,
               1,1,1,1};
  int O[16]= { 0,0,0,0,
               0,0,0,0,
               1,1,0,0,
               1,1,0,0};
 if(strcmp (p,"I1"))for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j)game_blocks[i][j]=I1[i*4+j];
 //if(strncmp (p,"O",1)==0)for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j)game_blocks[i][j]=O[i*4+j];

  for(int i = 0; i < 4; ++i){
   for(int j = 0; j <4; ++j){
    cout<<game_blocks[i][j];
    }
     cout<<endl;
  }
  return game_blocks;



}
int main()
{
  int m,n;
  cin>>m>>n;
int** game = new int*[m+4];//double pointer record pointer(for each row)
for(int i = 0; i < m+4; ++i)game[i] = new int[n+3];//allocate elements space of each row

for(int i = 0; i < m+4; ++i)
  for(int j = 0; j <n; ++j){
    game[i][j]=0;
  }
int** game_blocks =new int*[4];
for(int i = 0; i < 4; ++i)game_blocks[i] = new int[4];
char whatblock[2];
cin>>whatblock;                       
blocks(whatblock,game_blocks);







/*
for(int i = 4; i < m+4; ++i){
  for(int j = 0; j <n; ++j){
    cout<<game[i][j];
  }
  cout<<endl;
}*/
 delete []game;
}



 
