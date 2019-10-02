#include <iostream>
#include <string.h>
using namespace std;
int** blocks(char* a,int** game_blocks){
for(int i = 0; i <4; ++i)
  for(int j = 0; j <4; ++j){
     game_blocks[i][j]=0;
  }
  return game_blocks;



}
int main()
{
  int m,n;
  char order[2];
  cin>>m>>n;
int** game = new int*[m+4];//double pointer record pointer(for each row)
for(int i = 0; i < m+4; ++i)game[i] = new int[n];//allocate elements space of each row

for(int i = 0; i < m+4; ++i)
  for(int j = 0; j <n; ++j){
    game[i][j]=0;
  }
int** game_blocks =new int*[4];
for(int i = 0; i < 4; ++i)game_blocks[i] = new int[4];
blocks(order,game_blocks);






for(int i = 4; i < m+4; ++i){
  for(int j = 0; j <n; ++j){
    cout<<game[i][j];
  }
  cout<<endl;
}

 delete []game;
}



 
