#include <iostream>
#include <string.h>
using namespace std;

void blocks(char* a,int** game_blocks){
 char p[2];
 p[0]=a[0];p[1]=a[1];

  int T1[16]= { 0,0,0,0,
                0,0,0,0,
                1,1,1,0,
                0,1,0,0};
  int T2[16]= { 0,0,0,0,
                0,1,0,0,
                1,1,0,0,
                0,1,0,0};
  int T3[16]= { 0,0,0,0,
                0,0,0,0,
                0,1,0,0,
                1,1,1,0};
  int T4[16]= { 0,0,0,0,
                1,0,0,0,
                1,1,0,0,
                1,0,0,0};
  ////////////////////////////
  int L1[16]= { 0,0,0,0,
                1,0,0,0,
                1,0,0,0,
                1,1,0,0};
  int L2[16]= { 0,0,0,0,
                0,0,0,0,
                1,1,1,0,
                1,0,0,0};
  int L3[16]= { 0,0,0,0,
                1,1,0,0,
                0,1,0,0,
                0,1,0,0};
  int L4[16]= { 0,0,0,0,
                0,0,0,0,
                0,0,1,0,
                1,1,1,0};
  ////////////////////////////
  int J1[16]= { 0,0,0,0,
                0,1,0,0,
                0,1,0,0,
                1,1,0,0};
  int J2[16]= { 0,0,0,0,
                0,0,0,0,
                1,0,0,0,
                1,1,1,0};
  int J3[16]= { 0,0,0,0,
                1,1,0,0,
                1,0,0,0,
                1,0,0,0};
  int J4[16]= { 0,0,0,0,
                0,0,0,0,
                1,1,1,0,
                0,0,1,0};
  ////////////////////////////
  int I1[16]= { 1,0,0,0,
                1,0,0,0,
                1,0,0,0,
                1,0,0,0};
  int I2[16]= { 0,0,0,0,
                0,0,0,0,
                0,0,0,0,
                1,1,1,1};
  int O[16]= {  0,0,0,0,
                0,0,0,0,
                1,1,0,0,
                1,1,0,0};

 if(strncmp(p,"T1",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=T1[i*4+j];
 if(strncmp(p,"T2",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=T2[i*4+j];
 if(strncmp(p,"T3",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=T3[i*4+j];
 if(strncmp(p,"T4",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=T4[i*4+j];
 /////////////////////////////////////////////////////////////////////////////////////////////////////////
 if(strncmp(p,"L1",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=L1[i*4+j];
 if(strncmp(p,"L2",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=L2[i*4+j];
 if(strncmp(p,"L3",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=L3[i*4+j];
 if(strncmp(p,"L4",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=L4[i*4+j];
 /////////////////////////////////////////////////////////////////////////////////////////////////////////
 if(strncmp(p,"J1",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=J1[i*4+j];
 if(strncmp(p,"J2",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=J2[i*4+j];
 if(strncmp(p,"J3",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=J3[i*4+j];
 if(strncmp(p,"J4",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=J4[i*4+j];
 /////////////////////////////////////////////////////////////////////////////////////////////////////////
 if(strncmp(p,"I1",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=I1[i*4+j];
 if(strncmp(p,"I2",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=I2[i*4+j];
 if(strncmp(p,"O",1)==0)  for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=O[i*4+j];
 //cout<<strncmp(p,"I1",2)<<endl;
 //cout<<strncmp(p,"I2",2)<<endl;
 //cout<<strncmp(p,"O",1)<<endl;





 /* for(int i = 0; i < 4; ++i){
   for(int j = 0; j <4; ++j){
    cout<<game_blocks[i][j];
    }
     cout<<endl;
  }*/
  //return game_blocks;
}
void fall_blocks(int** game,int** game_blocks){
 char whatblock[2];
 int start_col;
 cin>>whatblock>>start_col; 
 blocks(whatblock,game_blocks);
 start_col=start_col-1; 
  /*TODO
  //fall judge and concate properly
  */

 for(int i =0; i < 4; ++i)
 for(int j = 0; j <4; ++j){
   game[i][j+start_col]=game_blocks[i][j];
 }

}
void delete_satisfied_rows(int** game){
  /*TODO
  //delete satisfied row and update properly
  */
}
bool judge_game_result(int** game){
  /*TODO
  //now, judge the left rows is legal or not
  */
 return false;
}
int main()
{
  int m,n,mm,nn;
  cin>>mm>>nn;
  m=mm;
  n=nn;
  ///////////////////////////////////////////////////////////////////////
  int** game = new int*[m+4];//double pointer record pointer(for each row)
  for(int i = 0; i < m+4; ++i)game[i] = new int[n+3];//allocate elements space of each row
  for(int i = 0; i < m+4; ++i)
    for(int j = 0; j <n+3; ++j){
      game[i][j]=0;
    }
  int** game_blocks =new int*[4];
  for(int i = 0; i < 4; ++i)game_blocks[i] = new int[4];
  ///////////////////////////////////////////////////////////////////////
  bool judge=true;
  while(judge){
    fall_blocks(game,game_blocks);
    delete_satisfied_rows(game);
    judge=judge_game_result(game);
    if(!(judge)){
      for(int i = 4; i < m+4; ++i){
          for(int j = 0; j <n; ++j)cout<<game[i][j];
          cout<<endl;
        }
      break;
    }
  }
  ////////////////////////////////////////////////////////////////////////
  delete []game;
}



 
