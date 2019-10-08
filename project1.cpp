#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
using namespace std;
int m,n,mm,nn;

int hit_check_row( int** game,int** game_blocks,int start_col,int pos){
  //cout<<"sow="<<" "<<game[18][13]<<endl;
  //cout<<"sow="<<" "<<game[18][14]<<endl;
  //cout<<"sow="<<" "<<game[19][14]<<endl;
  for(int i=4; i < m+4; ++i){
    for (int space=0;space<4;space++){
      if(game[i][start_col]==1 && game_blocks[3-space][0]==1){
        //cout<<"hit row="<<" "<<i-3<<endl;
        //cout<<"hit gbcol="<<" "<<1<<endl;
        //cout<<"shift row space="<<" "<<space<<endl;
        return i-1+space;
      }
      if(game[i][start_col+1]==1 && game_blocks[3-space][1]==1){
        
        //cout<<"hit row="<<" "<<i-3<<endl;
        //cout<<"hit gbcol="<<" "<<2<<endl;
        //cout<<"shift row space="<<" "<<space<<endl;
        return i-1+space;
      }
      if(game[i][start_col+2]==1 && game_blocks[3-space][2]==1){
        //cout<<"hit row="<<" "<<i-3<<endl;
        //cout<<"hit gbcol="<<" "<<3<<endl;
        //cout<<"shift row space="<<" "<<space<<endl;
        return i-1+space;
      }
      if(game[i][start_col+3]==1 && game_blocks[3-space][3]==1){
        //cout<<"hit row="<<" "<<i-3<<endl;
        //cout<<"hit gbcol="<<" "<<4<<endl;
        //cout<<"shift row space="<<" "<<space<<endl;
        return i-1+space;
      }
    }    
  }
    

  //cout<<space<<" "<<start_col<<endl;
  //cout<<pos<<endl;
  return pos;
}
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
  int S1[16]= { 0,0,0,0,
                0,0,0,0,
                0,1,1,0,
                1,1,0,0};
  int S2[16]= { 0,0,0,0,
                1,0,0,0,
                1,1,0,0,
                0,1,0,0};
  int Z1[16]= { 0,0,0,0,
                0,0,0,0,
                1,1,0,0,
                0,1,1,0};
  int Z2[16]= { 0,0,0,0,
                0,1,0,0,
                1,1,0,0,
                1,0,0,0};
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
 if(strncmp(p,"S1",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=S1[i*4+j];
 if(strncmp(p,"S2",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=S2[i*4+j];
 /////////////////////////////////////////////////////////////////////////////////////////////////////////
 if(strncmp(p,"Z1",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=Z1[i*4+j];
 if(strncmp(p,"Z2",2)==0) for(int i = 0; i < 4; ++i)for(int j = 0; j <4; ++j) game_blocks[i][j]=Z2[i*4+j];
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
void fall_blocks(char* whatblock,int start_col,int** game,int** game_blocks){
 //char whatblock[3];
 //int start_col;
 //cin>>whatblock>>start_col; 
 blocks(whatblock,game_blocks);
 start_col=start_col-1; 
  //fall judge and concate properly//////////////////////////
 int pos=-5;
 //cout<<game[19][14]<<endl;
 
   pos=hit_check_row(game,game_blocks,start_col,pos);
   //if (pos==-5) cout<<-5<<endl;;
   if (pos>=m+4)pos=-5;

 if (pos==-5){
   pos=m+3;
 }

 for(int i =0; i <4; ++i)
   for(int j = 0; j <4; ++j){
     //cout<<pos+i-3<<"X";
     if(game[pos+i-3][j+start_col]!=1)
     game[pos+i-3][j+start_col]=game_blocks[i][j];
    }
 //cout<<endl;
 
}
void delete_satisfied_rows(int** game){
  
  int k=4;
  int signal=1;
  int temp=0;
  while(k<m+4){
    signal=1;
  
    for(int i=0; i<n;i++){
      if(game[k][i]==0){ signal=0;break;}
    }
    
    if( signal==1){
      //cout<<"delete row="<<k<<endl;

      for(int i=k; i>0;i--)
        for(int j = 0; j <n; ++j){
          game[i][j]=game[i-1][j];
          
                  }
      for(int i=0; i<n;i++){
       game[0][i]=0;
      }  
      k=4;  
      continue;  
    }

    k++;
  }
  //cout<<"delete signal"<<signal<<endl;
}
bool judge_game_result(int** game){
  for(int i=0; i<4;i++)
    for(int j = 0; j <n; ++j)
    if(game[i][j]==1) return false;
 return true;
}

int main()
{
  ifstream myfile ("tetris.data");
  ofstream outfile ("tetris.final");
  int mmm,nnn;
  int kkk;
  char pp[3];

  myfile>>mmm>>nnn;
  m=mmm;
  n=nnn;
  char* buffer = new char[n];
  //string line;

  

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
  char p_p[3];
  int k_k;   
  while(judge){

    myfile>>p_p>>k_k;
    for(int j = 0; j <3; j++)pp[j]=p_p[j];
    kkk=k_k;
    //cout<<pp<<" "<<kkk<<endl;
    /////////////////////////////////////////
    if((strncmp(pp,"End",3)==0))break;
    /////////////////////////////////////////    
    fall_blocks(pp,kkk,game,game_blocks);
    delete_satisfied_rows(game);
    judge=judge_game_result(game);
    /*for(int i = 4; i < m+4; ++i){
          for(int j = 0; j <n; ++j)
              cout<<game[i][j];
       cout<< endl;
    }
    cout<< endl;*/
  }
  for(int j = 0; j <n; ++j){
          buffer[j]='0';          
        }
  if(!(judge) ||(strncmp(pp,"End",3)==0)){
    //cout<<"ednd"<<endl;
    for(int i = 4; i < m+4; ++i){
        for(int j = 0; j <n; ++j){
          sprintf(&(buffer[j]),"%d",game[i][j]);          
        }
        //cout<<buffer;
        //cout<< endl;
        outfile<<buffer;
        outfile << endl;
    }
  }
  /*for(int i = 0; i < m+4; ++i){
          for(int j = 0; j <n+3; ++j)
              cout<<game[i][j];
       cout<< endl;
    }*/
    

       
      
    
  outfile.close();
  myfile.close();
  ////////////////////////////////////////////////////////////////////////
  delete []game;
  delete []game_blocks;
  delete []buffer;
}



 
