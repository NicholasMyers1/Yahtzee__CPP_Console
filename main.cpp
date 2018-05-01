#include <windows.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
srand(time(0));
int z,x,c,v,b;//dice
int p;//switch for while 1: 1,2,3
int a[19];a[0]=0;a[1]=0;a[2]=0;a[3]=0;a[4]=0;a[5]=0;a[6]=0;a[7]=0;a[8]=0;a[9]=0;a[10]=0;a[11]=0;a[12]=0;a[13]=0;a[14]=0;a[15]=0;a[16]=0;a[17]=0;a[18]=0;a[19]=0;
int f[13];f[0]=0;f[1]=0;f[2]=0;f[3]=0;f[4]=0;f[5]=0;f[6]=0;f[7]=0;f[8]=0;f[9]=0;f[10]=0;f[11]=0;f[12]=0;
int g[13];g[0]=0;g[1]=0;g[2]=0;g[3]=0;g[4]=0;g[5]=0;g[6]=0;g[7]=0;g[8]=0;g[9]=0;g[10]=0;g[11]=0;g[12]=0;
int ll[12];ll[0]=0;ll[1]=0;ll[2]=0;ll[3]=0;ll[4]=0;ll[5]=0;ll[6]=0;ll[7]=0;ll[8]=0;ll[9]=0;ll[10]=0;ll[11]=0;
int final[5];final[1]=1;final[2]=1;final[3]=1;final[4]=1;final[5]=1;//reset this
///////////////////origs above:
int finala[5];finala[1]=1;finala[2]=1;finala[3]=1;finala[4]=1;finala[5]=1;//changed from final[5]//finished:
int lla[12];lla[0]=0;lla[1]=0;lla[2]=0;lla[3]=0;lla[4]=0;lla[5]=0;lla[6]=0;lla[7]=0;lla[8]=0;lla[9]=0;lla[10]=0;lla[11]=0;//changed from ll[12]//finished:
int ga[13];ga[0]=0;ga[1]=0;ga[2]=0;ga[3]=0;ga[4]=0;ga[5]=0;ga[6]=0;ga[7]=0;ga[8]=0;ga[9]=0;ga[10]=0;ga[11]=0;ga[12]=0;//changed from g[13]//finished:
int fa[13];fa[0]=0;fa[1]=0;fa[2]=0;fa[3]=0;fa[4]=0;fa[5]=0;fa[6]=0;fa[7]=0;fa[8]=0;fa[9]=0;fa[10]=0;fa[11]=0;fa[12]=0;//changed from f[13]//finished:
int ab[19];ab[0]=0;ab[1]=0;ab[2]=0;ab[3]=0;ab[4]=0;ab[5]=0;ab[6]=0;ab[7]=0;ab[8]=0;ab[9]=0;ab[10]=0;ab[11]=0;ab[12]=0;ab[13]=0;ab[14]=0;ab[15]=0;ab[16]=0;ab[17]=0;ab[18]=0;ab[19]=0;//changed from a[19]//finished:

/////////////////////////////////////////////////////////////////////////////////////////
string pc;//int for keeping z,x,c,v,or b;
string pa;//int for keeping z,x,c,v,or b;
string player;//choose player:
if(p!=1){cout<<"Welcome to Yahtzee! (Made by Nick Myers,\nplease read the rules to know how to play!)\nType '1' to begin or any other key to go to 'HELP'/rules: ";
cin>>player;}
if (player=="1"){p=1;}
//if (player=="2"){p=5;}
if (player!="1"&&player!="easter123AbC"){p=11;}//&&player!="2")//help
if (player=="easter123AbC"){p=12;}//&&player!="2")//help
///1player 1:
while (p==1||p==2||p==3||p==4||p==5||p==6||p==7||p==8||p==9||p==10||p==11||p==12)switch (p){
case 1:
if (p==1){
          
system("CLS");


cout<<"Player 1: Type '1' to roll (1): ";
cin>>pc;
{z = rand() % 6+1;}
{x = rand() % 6+1;}
{c = rand() % 6+1;}
{v = rand() % 6+1;}
{b = rand() % 6+1;}
cout<<"\nz:"<<z<<" x:"<<x<<" c:"<<c<<" v:"<<v<<" b:"<<b<<"\n";
cout<<"keep 'z': ";cin>>pc;if (pc=="z"){final[1]=2;p=2;}if (pc=="a"){final[1]=1;p=2;}while (pc!="a"&&pc!="z"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'x': ";cin>>pc;if (pc=="x"){final[2]=2;p=2;}if (pc=="a"){final[2]=1;p=2;}while (pc!="a"&&pc!="x"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'c': ";cin>>pc;if (pc=="c"){final[3]=2;p=2;}if (pc=="a"){final[3]=1;p=2;}while (pc!="a"&&pc!="c"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'v': ";cin>>pc;if (pc=="v"){final[4]=2;p=2;}if (pc=="a"){final[4]=1;p=2;}while (pc!="a"&&pc!="v"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'b': ";cin>>pc;if (pc=="b"){final[5]=2;p=2;}if (pc=="a"){final[5]=1;p=2;}while (pc!="a"&&pc!="b"){cout<<"Wrong variable: ";cin>>pc;}
system("CLS");

}//end1




case 2:
if (p==2){
cout<<"Player 1: Type '1' to roll (2): ";
cin>>pc;
if (final[1]==1&&final[1]!=2){z = rand() % 6+1;}
if (final[2]==1&&final[2]!=2){x = rand() % 6+1;}
if (final[3]==1&&final[3]!=2){c = rand() % 6+1;}
if (final[4]==1&&final[4]!=2){v = rand() % 6+1;}
if (final[5]==1&&final[5]!=2){b = rand() % 6+1;}
cout<<"\nz:"<<z<<" x:"<<x<<" c:"<<c<<" v:"<<v<<" b:"<<b<<"\n";
cout<<"keep 'z': ";cin>>pc;if (pc=="z"){final[1]=2;p=3;}if (pc=="a"){final[1]=1;p=3;}while (pc!="a"&&pc!="z"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'x': ";cin>>pc;if (pc=="x"){final[2]=2;p=3;}if (pc=="a"){final[2]=1;p=3;}while (pc!="a"&&pc!="x"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'c': ";cin>>pc;if (pc=="c"){final[3]=2;p=3;}if (pc=="a"){final[3]=1;p=3;}while (pc!="a"&&pc!="c"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'v': ";cin>>pc;if (pc=="v"){final[4]=2;p=3;}if (pc=="a"){final[4]=1;p=3;}while (pc!="a"&&pc!="v"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'b': ";cin>>pc;if (pc=="b"){final[5]=2;p=3;}if (pc=="a"){final[5]=1;p=3;}while (pc!="a"&&pc!="b"){cout<<"Wrong variable: ";cin>>pc;}
system("CLS");

}//end2




case 3:
if (p==3){
cout<<"Player 1: Type '1' to roll (3): ";
cin>>pc;
if (final[1]==1&&final[1]!=2){z = rand() % 6+1;}
if (final[2]==1&&final[2]!=2){x = rand() % 6+1;}
if (final[3]==1&&final[3]!=2){c = rand() % 6+1;}
if (final[4]==1&&final[4]!=2){v = rand() % 6+1;}
if (final[5]==1&&final[5]!=2){b = rand() % 6+1;}
system("CLS");
{p=4;}
}//end3



case 4:
if (p==4){

//board(final):
cout<<"Player 1:\n";cout<<"Upper section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| Aces:         | Add 1's:  | "<<a[0]<<"\n";cout<<"| Twos:         | Add 2's:  | "<<a[1]<<"\n";cout<<"| Threes:       | Add 3's:  | "<<a[2]<<"\n";cout<<"| Fours:        | Add 4's:  | "<<a[3]<<"\n";cout<<"| Fives:        | Add 5's:  | "<<a[4]<<"\n";cout<<"| Sixes:        | Add 6's:  | "<<a[5]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total score:  | Add total:| "<<a[6]<<"\n";cout<<"| Bonus: if 63+ | Add 35:   | "<<a[7]<<"\n";cout<<"| Upper total:  | Add all:  | "<<a[8]<<"\n";cout<<"\\---------------------------------/\n";cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";cout<<"Lower section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| 3 of a kind:  | Add all:  | "<<a[9]<<"\n";cout<<"| 4 of a kind:  | Add all:  | "<<a[10]<<"\n";cout<<"| Full house:   | Add 25:   | "<<a[11]<<"\n";cout<<"| Sm. straight: | Add 30:   | "<<a[12]<<"\n";cout<<"| Lg. straight: | Add 40:   | "<<a[13]<<"\n";cout<<"| Chance:       | Add all:  | "<<a[14]<<"\n";cout<<"| Yahtzee:      | Add 50:   | "<<a[15]<<"\n";cout<<"| # of yahtzees:| All ytz's:| "<<a[16]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total upper:  | Upper:    | "<<a[17]<<"\n";cout<<"| Total lower:  | Lower:    | "<<a[18]<<"\n";cout<<"\\---------------------------------/\n";cout<<" Grand total:   | Final:    | "<<a[19]<<"\n";
cout<<"\nz:"<<z<<" x:"<<x<<" c:"<<c<<" v:"<<v<<" b:"<<b<<"\n";

cout<<"possible choices: \n";
//g[]=1;
/////

if(z == 1 &&ll[0]==0|| x == 1 &&ll[0]==0|| c == 1 &&ll[0]==0|| v == 1 &&ll[0]==0|| b == 1&&ll[0]==0){cout<<"1's.\n";g[0]=1;}
if(z == 2 &&ll[1]==0|| x == 2 &&ll[1]==0|| c == 2 &&ll[1]==0|| v == 2 &&ll[1]==0|| b == 2&&ll[1]==0){cout<<"2's.\n";g[1]=1;}
if(z == 3 &&ll[2]==0|| x == 3 &&ll[2]==0|| c == 3 &&ll[2]==0|| v == 3 &&ll[2]==0|| b == 3&&ll[2]==0){cout<<"3's.\n";g[2]=1;}
if(z == 4 &&ll[3]==0|| x == 4 &&ll[3]==0|| c == 4 &&ll[3]==0|| v == 4 &&ll[3]==0|| b == 4&&ll[3]==0){cout<<"4's.\n";g[3]=1;}
if(z == 5 &&ll[4]==0|| x == 5 &&ll[4]==0|| c == 5 &&ll[4]==0|| v == 5 &&ll[4]==0|| b == 5&&ll[4]==0){cout<<"5's.\n";g[4]=1;}
if(z == 6 &&ll[5]==0|| x == 6 &&ll[5]==0|| c == 6 &&ll[5]==0|| v == 6 &&ll[5]==0|| b == 6&&ll[5]==0){cout<<"6's.\n";g[5]=1;}
if(z == x && x == c &&ll[6]==0|| z == x && x == v &&ll[6]==0|| z == x && x == b &&ll[6]==0|| z == c && c == v &&ll[6]==0|| z == c && c == b &&ll[6]==0|| z == v && v == b &&ll[6]==0|| x == c && c == v &&ll[6]==0|| x == c && c == b &&ll[6]==0|| x == v && v == b &&ll[6]==0|| c == v && v == b&&ll[6]==0){cout<<"3 of a kind.\n";g[6]=1;}
if(z == x && x == c && c == v &&ll[7]==0|| z == x && x == c && c == b &&ll[7]==0|| z == x && x == v && v == b &&ll[7]==0|| z == c && c == v && v == b &&ll[7]==0|| x == c && c == v && v == b&&ll[7]==0){cout<<"4 of a kind.\n";g[7]=1;}
if(z == x && x == c && v == b &&ll[8]==0|| z == x && x == v && c == b &&ll[8]==0|| z == x && x == b && c == v &&ll[8]==0|| z == c && c == v && x == b &&ll[8]==0|| z == c && c == b && x == v &&ll[8]==0|| z == v && v == b && x == c &&ll[8]==0|| x == c && c == v && b == z &&ll[8]==0|| x == c && c == b && v == z &&ll[8]==0|| x == v && v == b && c == z &&ll[8]==0|| c == v && v == b && z == x&&ll[8]==0){cout<<"Full house.\n";g[8]=1;}
if(x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=5 && x!=6 && c!=5 && c!=6 && v!=5 && v!=6 && b!=5 && b!=6 &&ll[9]==0||x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=1 && x!=6 && c!=1 && c!=6 && v!=1 && v!=6 && b!=1 && b!=6 &&ll[9]==0||x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=1 && x!=2 && c!=1 && c!=2 && v!=1 && v!=2 && b!=1 && b!=2 &&ll[9]==0||z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=5 && z!=6 && c!=5 && c!=6 && v!=5 && v!=6 && b!=5 && b!=6 &&ll[9]==0||z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=1 && z!=6 && c!=1 && c!=6 && v!=1 && v!=6 && b!=1 && b!=6 &&ll[9]==0||z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=1 && z!=2 && c!=1 && c!=2 && v!=1 && v!=2 && b!=1 && b!=2 &&ll[9]==0||z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=5 && z!=6 && b!=5 && b!=6 && v!=5 && v!=6 && x!=5 && x!=6 &&ll[9]==0||z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=1 && z!=6 && b!=1 && b!=6 && v!=1 && v!=6 && x!=1 && x!=6 &&ll[9]==0||z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=1 && z!=2 && b!=1 && b!=2 && v!=1 && v!=2 && x!=1 && x!=2 &&ll[9]==0||x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=5 && x!=6 && b!=5 && b!=6 && z!=5 && z!=6 && c!=5 && c!=6 &&ll[9]==0||x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=1 && x!=6 && b!=1 && b!=6 && z!=1 && z!=6 && c!=1 && c!=6 &&ll[9]==0||x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=1 && x!=2 && b!=1 && b!=2 && z!=1 && z!=2 && c!=1 && c!=2 &&ll[9]==0||z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=5 && z!=6 && x!=5 && x!=6 && c!=5 && c!=6 && v!=5 && v!=6 &&ll[9]==0||z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=1 && z!=6 && x!=1 && x!=6 && c!=1 && c!=6 && v!=1 && v!=6 &&ll[9]==0||z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=1 && z!=2 && x!=1 && x!=2 && c!=1 && c!=2 && v!=1 && v!=2 &&ll[9]==0){cout<<"Small straight.\n";g[9]=1;}
if(z==1 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 &&ll[10]==0||z==2 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 &&ll[10]==0||z==3 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 &&ll[10]==0||z==4 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 &&ll[10]==0||z==5 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 &&ll[10]==0||z==2 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 &&ll[10]==0||z==3 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 &&ll[10]==0||z==4 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 &&ll[10]==0||z==5 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 &&ll[10]==0||z==6 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1&&ll[10]==0){cout<<"Large straight.\n";g[10]=1;}
if(z == z && x == x && c == c && v == v && b == b&&ll[11]==0){cout<<"Chance.\n";g[11]=1;}
if (z == x && x== c && c == v && v ==b){cout<<"Yahtzee!!!!\n";g[12]=1;}

cout<<"Choose your choice on the board: ";cin>>pa;
while (pa=="m"&&g[12]!=1&&a[15]>=50){cout<<"You don't have a Yahtzee! You can't use this: ";cin>>pa;}
while (pa=="m"&&f[12]==1&&a[15]==0||pa!="a"&&pa!="b"&&pa!="c"&&pa!="d"&&pa!="e"&&pa!="f"&&pa!="g"&&pa!="h"&&pa!="i"&&pa!="j"&&pa!="k"&&pa!="l"&&pa!="m"||pa=="a"&&f[0]==1||pa=="b"&&f[1]==1||pa=="c"&&f[2]==1||pa=="d"&&f[3]==1||pa=="e"&&f[4]==1||pa=="f"&&f[5]==1||pa=="g"&&f[6]==1||pa=="h"&&f[7]==1||pa=="i"&&f[8]==1||pa=="j"&&f[9]==1||pa=="k"&&f[10]==1||pa=="l"&&f[11]==1){cout<<"Choice already chosen/scratched or wrong variable: ";cin>>pa;}

//g[]=0;



//fin
if (pa=="a"&&f[0]==0){if (z==1){a[0]=a[0]+z;}if (x==1){a[0]=a[0]+x;}if (c==1){a[0]=a[0]+c;}if (v==1){a[0]=a[0]+v;}if (b==1){a[0]=a[0]+b;}f[0]=1;ll[0]=1;}
if (pa=="b"&&f[1]==0){if (z==2){a[1]=a[1]+z;}if (x==2){a[1]=a[1]+x;}if (c==2){a[1]=a[1]+c;}if (v==2){a[1]=a[1]+v;}if (b==2){a[1]=a[1]+b;}f[1]=1;ll[1]=1;}
if (pa=="c"&&f[2]==0){if (z==3){a[2]=a[2]+z;}if (x==3){a[2]=a[2]+x;}if (c==3){a[2]=a[2]+c;}if (v==3){a[2]=a[2]+v;}if (b==3){a[2]=a[2]+b;}f[2]=1;ll[2]=1;}
if (pa=="d"&&f[3]==0){if (z==4){a[3]=a[3]+z;}if (x==4){a[3]=a[3]+x;}if (c==4){a[3]=a[3]+c;}if (v==4){a[3]=a[3]+v;}if (b==4){a[3]=a[3]+b;}f[3]=1;ll[3]=1;}
if (pa=="e"&&f[4]==0){if (z==5){a[4]=a[4]+z;}if (x==5){a[4]=a[4]+x;}if (c==5){a[4]=a[4]+c;}if (v==5){a[4]=a[4]+v;}if (b==5){a[4]=a[4]+b;}f[4]=1;ll[4]=1;}
if (pa=="f"&&f[5]==0){if (z==6){a[5]=a[5]+z;}if (x==6){a[5]=a[5]+x;}if (c==6){a[5]=a[5]+c;}if (v==6){a[5]=a[5]+v;}if (b==6){a[5]=a[5]+b;}f[5]=1;ll[5]=1;}

if (pa=="g"&&f[6]==0&&z == x && x == c || pa=="g"&&f[6]==0&&z == x && x == v ||pa=="g"&&f[6]==0&& z == x && x == b ||pa=="g"&&f[6]==0&& z == c && c == v ||pa=="g"&&f[6]==0&& z == c && c == b ||pa=="g"&&f[6]==0&& z == v && v == b ||pa=="g"&&f[6]==0&& x == c && c == v ||pa=="g"&&f[6]==0&& x == c && c == b ||pa=="g"&&f[6]==0&& x == v && v == b ||pa=="g"&&f[6]==0&& c == v && v == b){a[9]=z+x+c+v+b;f[6]=1;ll[6]=1;}//3kind
if (pa=="h"&&f[7]==0&&z == x && x == c && c == v ||pa=="h"&&f[7]==0&& z == x && x == c && c == b ||pa=="h"&&f[7]==0&& z == x && x == v && v == b ||pa=="h"&&f[7]==0&& z == c && c == v && v == b ||pa=="h"&&f[7]==0&& x == c && c == v && v == b){a[10]=z+x+c+v+b;f[7]=1;ll[7]=1;}//4kind
if (pa=="i"&&f[8]==0&&z == x && x == c && v == b ||pa=="i"&&f[8]==0&& z == x && x == v && c == b ||pa=="i"&&f[8]==0&& z == x && x == b && c == v ||pa=="i"&&f[8]==0&& z == c && c == v && x == b ||pa=="i"&&f[8]==0&& z == c && c == b && x == v ||pa=="i"&&f[8]==0&& z == v && v == b && x == c ||pa=="i"&&f[8]==0&& x == c && c == v && b == z ||pa=="i"&&f[8]==0&& x == c && c == b && v == z ||pa=="i"&&f[8]==0&& x == v && v == b && c == z ||pa=="i"&&f[8]==0&& c == v && v == b && z == x){a[11]=25;f[8]=1;ll[8]=1;}//full house
if (pa=="j"&&f[9]==0&&x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=5 && x!=6 && c!=5 && c!=6 && v!=5 && v!=6 && b!=5 && b!=6 ||pa=="j"&&f[9]==0&&x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=1 && x!=6 && c!=1 && c!=6 && v!=1 && v!=6 && b!=1 && b!=6 ||pa=="j"&&f[9]==0&&x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=1 && x!=2 && c!=1 && c!=2 && v!=1 && v!=2 && b!=1 && b!=2 ||pa=="j"&&f[9]==0&&z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=5 && z!=6 && c!=5 && c!=6 && v!=5 && v!=6 && b!=5 && b!=6 ||pa=="j"&&f[9]==0&&z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=1 && z!=6 && c!=1 && c!=6 && v!=1 && v!=6 && b!=1 && b!=6 ||pa=="j"&&f[9]==0&&z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=1 && z!=2 && c!=1 && c!=2 && v!=1 && v!=2 && b!=1 && b!=2 ||pa=="j"&&f[9]==0&&z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=5 && z!=6 && b!=5 && b!=6 && v!=5 && v!=6 && x!=5 && x!=6 ||pa=="j"&&f[9]==0&&z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=1 && z!=6 && b!=1 && b!=6 && v!=1 && v!=6 && x!=1 && x!=6 ||pa=="j"&&f[9]==0&&z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=1 && z!=2 && b!=1 && b!=2 && v!=1 && v!=2 && x!=1 && x!=2 ||pa=="j"&&f[9]==0&&x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=5 && x!=6 && b!=5 && b!=6 && z!=5 && z!=6 && c!=5 && c!=6 ||pa=="j"&&f[9]==0&&x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=1 && x!=6 && b!=1 && b!=6 && z!=1 && z!=6 && c!=1 && c!=6 ||pa=="j"&&f[9]==0&&x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=1 && x!=2 && b!=1 && b!=2 && z!=1 && z!=2 && c!=1 && c!=2 ||pa=="j"&&f[9]==0&&z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=5 && z!=6 && x!=5 && x!=6 && c!=5 && c!=6 && v!=5 && v!=6 ||pa=="j"&&f[9]==0&&z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=1 && z!=6 && x!=1 && x!=6 && c!=1 && c!=6 && v!=1 && v!=6 ||pa=="j"&&f[9]==0&&z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=1 && z!=2 && x!=1 && x!=2 && c!=1 && c!=2 && v!=1 && v!=2){a[12]=30;f[9]=1;ll[9]=1;}//small straight
if (pa=="k"&&f[10]==0&&z==1 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 ||pa=="k"&&f[10]==0&&z==2 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 ||pa=="k"&&f[10]==0&&z==3 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 ||pa=="k"&&f[10]==0&&z==4 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 ||pa=="k"&&f[10]==0&&z==5 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 ||pa=="k"&&f[10]==0&&z==2 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 ||pa=="k"&&f[10]==0&&z==3 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 ||pa=="k"&&f[10]==0&&z==4 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 ||pa=="k"&&f[10]==0&&z==5 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 ||pa=="k"&&f[10]==0&&z==6 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1){a[13]=40;f[10]=1;ll[10]=1;}//large straight
if (pa=="l"&&f[11]==0){a[14]=z+x+c+v+b;f[11]=1;ll[11]=1;}//chance
if (pa=="m"&&f[12]==0&&z==x&&x==c&&c==v&&v==b&&g[12]==1&&a[15]==0){a[15]=50;a[16]=a[16]+1;f[12]=1;pa="111";}
if (pa=="m"&&a[15]>=50&&z==x&&x==c&&c==v&&v==b&&g[12]==1&&pa!="111"){a[15]=a[15]+100;a[16]=a[16]+1;f[12]=1;
system("CLS");cout<<"Player 1:\n";cout<<"Upper section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| Aces:         | Add 1's:  | "<<a[0]<<"\n";cout<<"| Twos:         | Add 2's:  | "<<a[1]<<"\n";cout<<"| Threes:       | Add 3's:  | "<<a[2]<<"\n";cout<<"| Fours:        | Add 4's:  | "<<a[3]<<"\n";cout<<"| Fives:        | Add 5's:  | "<<a[4]<<"\n";cout<<"| Sixes:        | Add 6's:  | "<<a[5]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total score:  | Add total:| "<<a[6]<<"\n";cout<<"| Bonus: if 63+ | Add 35:   | "<<a[7]<<"\n";cout<<"| Upper total:  | Add all:  | "<<a[8]<<"\n";cout<<"\\---------------------------------/\n";cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";cout<<"Lower section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| 3 of a kind:  | Add all:  | "<<a[9]<<"\n";cout<<"| 4 of a kind:  | Add all:  | "<<a[10]<<"\n";cout<<"| Full house:   | Add 25:   | "<<a[11]<<"\n";cout<<"| Sm. straight: | Add 30:   | "<<a[12]<<"\n";cout<<"| Lg. straight: | Add 40:   | "<<a[13]<<"\n";cout<<"| Chance:       | Add all:  | "<<a[14]<<"\n";cout<<"| Yahtzee:      | Add 50:   | "<<a[15]<<"\n";cout<<"| # of yahtzees:| All ytz's:| "<<a[16]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total upper:  | Upper:    | "<<a[17]<<"\n";cout<<"| Total lower:  | Lower:    | "<<a[18]<<"\n";cout<<"\\---------------------------------/\n";cout<<" Grand total:   | Final:    | "<<a[19]<<"\n";
cout<<"You get to go again since you got an extra Yahtzee. Press any key: ";cin>>pa;p=1;break;}
//fin make it so it only does it once:
if (pa=="a"&&f[0]==0){f[0]=1;}
if (pa=="b"&&f[1]==0){f[1]=1;}
if (pa=="c"&&f[2]==0){f[2]=1;}
if (pa=="d"&&f[3]==0){f[3]=1;}
if (pa=="e"&&f[4]==0){f[4]=1;}
if (pa=="f"&&f[5]==0){f[5]=1;}
if (pa=="g"&&f[6]==0){f[6]=1;}
if (pa=="h"&&f[7]==0){f[7]=1;}
if (pa=="i"&&f[8]==0){f[8]=1;}
if (pa=="j"&&f[9]==0){f[9]=1;}
if (pa=="k"&&f[10]==0){f[10]=1;}
if (pa=="l"&&f[11]==0){f[11]=1;}
if (pa=="m"&&f[12]==0){f[12]=1;}



g[0]=0;g[1]=0;g[2]=0;g[3]=0;g[4]=0;g[5]=0;g[6]=0;g[7]=0;g[8]=0;g[9]=0;g[10]=0;g[11]=0;/*g[12]=1;*/g[12]=0;

//
system("CLS");

cout<<"Player 1:\n";cout<<"Upper section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| Aces:         | Add 1's:  | "<<a[0]<<"\n";cout<<"| Twos:         | Add 2's:  | "<<a[1]<<"\n";cout<<"| Threes:       | Add 3's:  | "<<a[2]<<"\n";cout<<"| Fours:        | Add 4's:  | "<<a[3]<<"\n";cout<<"| Fives:        | Add 5's:  | "<<a[4]<<"\n";cout<<"| Sixes:        | Add 6's:  | "<<a[5]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total score:  | Add total:| "<<a[6]<<"\n";cout<<"| Bonus: if 63+ | Add 35:   | "<<a[7]<<"\n";cout<<"| Upper total:  | Add all:  | "<<a[8]<<"\n";cout<<"\\---------------------------------/\n";cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";cout<<"Lower section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| 3 of a kind:  | Add all:  | "<<a[9]<<"\n";cout<<"| 4 of a kind:  | Add all:  | "<<a[10]<<"\n";cout<<"| Full house:   | Add 25:   | "<<a[11]<<"\n";cout<<"| Sm. straight: | Add 30:   | "<<a[12]<<"\n";cout<<"| Lg. straight: | Add 40:   | "<<a[13]<<"\n";cout<<"| Chance:       | Add all:  | "<<a[14]<<"\n";cout<<"| Yahtzee:      | Add 50:   | "<<a[15]<<"\n";cout<<"| # of yahtzees:| All ytz's:| "<<a[16]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total upper:  | Upper:    | "<<a[17]<<"\n";cout<<"| Total lower:  | Lower:    | "<<a[18]<<"\n";cout<<"\\---------------------------------/\n";cout<<" Grand total:   | Final:    | "<<a[19]<<"\n";
if (f[0]==1&&f[1]==1&&f[2]==1&&f[3]==1&&f[4]==1&&f[5]==1&&f[6]==1&&f[7]==1&&f[8]==1&&f[9]==1&&f[10]==1&&f[11]==1&&f[12]==1
&&fa[0]==1&&fa[1]==1&&fa[2]==1&&fa[3]==1&&fa[4]==1&&fa[5]==1&&fa[6]==1&&fa[7]==1&&fa[8]==1&&fa[9]==1&&fa[10]==1&&fa[11]==1&&fa[12]==1)
{cout<<"Type any key to continue: ";cin>>pa;p=10;break;}
cout<<"Type any key and press enter to continue: ";cin>>pa;p=5;

}//end 4
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
case 5:
if (p==5){
system("CLS");p=6;//////////////////////////////////////////////////////////////p=1;break;
}//end case 5
/////////////////////////////////////////////////
//case 5: for control:
/////////////////////////////////////////////////
///2player 2:
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


case 6:
if (p==6){
          
system("CLS");


cout<<"Player 2: Type '1' to roll (1): ";
cin>>pc;
{z = rand() % 6+1;}
{x = rand() % 6+1;}
{c = rand() % 6+1;}
{v = rand() % 6+1;}
{b = rand() % 6+1;}
cout<<"\nz:"<<z<<" x:"<<x<<" c:"<<c<<" v:"<<v<<" b:"<<b<<"\n";
cout<<"keep 'z': ";cin>>pc;if (pc=="z"){finala[1]=2;p=7;}if (pc=="a"){finala[1]=1;p=7;}while (pc!="a"&&pc!="z"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'x': ";cin>>pc;if (pc=="x"){finala[2]=2;p=7;}if (pc=="a"){finala[2]=1;p=7;}while (pc!="a"&&pc!="x"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'c': ";cin>>pc;if (pc=="c"){finala[3]=2;p=7;}if (pc=="a"){finala[3]=1;p=7;}while (pc!="a"&&pc!="c"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'v': ";cin>>pc;if (pc=="v"){finala[4]=2;p=7;}if (pc=="a"){finala[4]=1;p=7;}while (pc!="a"&&pc!="v"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'b': ";cin>>pc;if (pc=="b"){finala[5]=2;p=7;}if (pc=="a"){finala[5]=1;p=7;}while (pc!="a"&&pc!="b"){cout<<"Wrong variable: ";cin>>pc;}
system("CLS");

}//end6




case 7:
if (p==7){
cout<<"Player 2: Type '1' to roll (2): ";
cin>>pc;
if (finala[1]==1&&finala[1]!=2){z = rand() % 6+1;}
if (finala[2]==1&&finala[2]!=2){x = rand() % 6+1;}
if (finala[3]==1&&finala[3]!=2){c = rand() % 6+1;}
if (finala[4]==1&&finala[4]!=2){v = rand() % 6+1;}
if (finala[5]==1&&finala[5]!=2){b = rand() % 6+1;}
cout<<"\nz:"<<z<<" x:"<<x<<" c:"<<c<<" v:"<<v<<" b:"<<b<<"\n";
cout<<"keep 'z': ";cin>>pc;if (pc=="z"){finala[1]=2;p=8;}if (pc=="a"){finala[1]=1;p=8;}while (pc!="a"&&pc!="z"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'x': ";cin>>pc;if (pc=="x"){finala[2]=2;p=8;}if (pc=="a"){finala[2]=1;p=8;}while (pc!="a"&&pc!="x"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'c': ";cin>>pc;if (pc=="c"){finala[3]=2;p=8;}if (pc=="a"){finala[3]=1;p=8;}while (pc!="a"&&pc!="c"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'v': ";cin>>pc;if (pc=="v"){finala[4]=2;p=8;}if (pc=="a"){finala[4]=1;p=8;}while (pc!="a"&&pc!="v"){cout<<"Wrong variable: ";cin>>pc;}
cout<<"keep 'b': ";cin>>pc;if (pc=="b"){finala[5]=2;p=8;}if (pc=="a"){finala[5]=1;p=8;}while (pc!="a"&&pc!="b"){cout<<"Wrong variable: ";cin>>pc;}
system("CLS");

}//end7




case 8:
if (p==8){
cout<<"Player 2: Type '1' to roll (3): ";
cin>>pc;
if (finala[1]==1&&finala[1]!=2){z = rand() % 6+1;}
if (finala[2]==1&&finala[2]!=2){x = rand() % 6+1;}
if (finala[3]==1&&finala[3]!=2){c = rand() % 6+1;}
if (finala[4]==1&&finala[4]!=2){v = rand() % 6+1;}
if (finala[5]==1&&finala[5]!=2){b = rand() % 6+1;}
system("CLS");
{p=9;}
}//end8



case 9:
if (p==9){

//board(final):
cout<<"Player 2:\n";cout<<"Upper section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| Aces:         | Add 1's:  | "<<ab[0]<<"\n";cout<<"| Twos:         | Add 2's:  | "<<ab[1]<<"\n";cout<<"| Threes:       | Add 3's:  | "<<ab[2]<<"\n";cout<<"| Fours:        | Add 4's:  | "<<ab[3]<<"\n";cout<<"| Fives:        | Add 5's:  | "<<ab[4]<<"\n";cout<<"| Sixes:        | Add 6's:  | "<<ab[5]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total score:  | Add total:| "<<ab[6]<<"\n";cout<<"| Bonus: if 63+ | Add 35:   | "<<ab[7]<<"\n";cout<<"| Upper total:  | Add all:  | "<<ab[8]<<"\n";cout<<"\\---------------------------------/\n";cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";cout<<"Lower section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| 3 of a kind:  | Add all:  | "<<ab[9]<<"\n";cout<<"| 4 of a kind:  | Add all:  | "<<ab[10]<<"\n";cout<<"| Full house:   | Add 25:   | "<<ab[11]<<"\n";cout<<"| Sm. straight: | Add 30:   | "<<ab[12]<<"\n";cout<<"| Lg. straight: | Add 40:   | "<<ab[13]<<"\n";cout<<"| Chance:       | Add all:  | "<<ab[14]<<"\n";cout<<"| Yahtzee:      | Add 50:   | "<<ab[15]<<"\n";cout<<"| # of yahtzees:| All ytz's:| "<<ab[16]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total upper:  | Upper:    | "<<ab[17]<<"\n";cout<<"| Total lower:  | Lower:    | "<<ab[18]<<"\n";cout<<"\\---------------------------------/\n";cout<<" Grand total:   | Final:    | "<<ab[19]<<"\n";
cout<<"\nz:"<<z<<" x:"<<x<<" c:"<<c<<" v:"<<v<<" b:"<<b<<"\n";

cout<<"possible choices: \n";
//ga[]=1;
/////

if(z == 1 &&lla[0]==0|| x == 1 &&lla[0]==0|| c == 1 &&lla[0]==0|| v == 1 &&lla[0]==0|| b == 1&&lla[0]==0){cout<<"1's.\n";ga[0]=1;}
if(z == 2 &&lla[1]==0|| x == 2 &&lla[1]==0|| c == 2 &&lla[1]==0|| v == 2 &&lla[1]==0|| b == 2&&lla[1]==0){cout<<"2's.\n";ga[1]=1;}
if(z == 3 &&lla[2]==0|| x == 3 &&lla[2]==0|| c == 3 &&lla[2]==0|| v == 3 &&lla[2]==0|| b == 3&&lla[2]==0){cout<<"3's.\n";ga[2]=1;}
if(z == 4 &&lla[3]==0|| x == 4 &&lla[3]==0|| c == 4 &&lla[3]==0|| v == 4 &&lla[3]==0|| b == 4&&lla[3]==0){cout<<"4's.\n";ga[3]=1;}
if(z == 5 &&lla[4]==0|| x == 5 &&lla[4]==0|| c == 5 &&lla[4]==0|| v == 5 &&lla[4]==0|| b == 5&&lla[4]==0){cout<<"5's.\n";ga[4]=1;}
if(z == 6 &&lla[5]==0|| x == 6 &&lla[5]==0|| c == 6 &&lla[5]==0|| v == 6 &&lla[5]==0|| b == 6&&lla[5]==0){cout<<"6's.\n";ga[5]=1;}
if(z == x && x == c &&lla[6]==0|| z == x && x == v &&lla[6]==0|| z == x && x == b &&lla[6]==0|| z == c && c == v &&lla[6]==0|| z == c && c == b &&lla[6]==0|| z == v && v == b &&lla[6]==0|| x == c && c == v &&lla[6]==0|| x == c && c == b &&lla[6]==0|| x == v && v == b &&lla[6]==0|| c == v && v == b&&lla[6]==0){cout<<"3 of a kind.\n";ga[6]=1;}
if(z == x && x == c && c == v &&lla[7]==0|| z == x && x == c && c == b &&lla[7]==0|| z == x && x == v && v == b &&lla[7]==0|| z == c && c == v && v == b &&lla[7]==0|| x == c && c == v && v == b&&lla[7]==0){cout<<"4 of a kind.\n";ga[7]=1;}
if(z == x && x == c && v == b &&lla[8]==0|| z == x && x == v && c == b &&lla[8]==0|| z == x && x == b && c == v &&lla[8]==0|| z == c && c == v && x == b &&lla[8]==0|| z == c && c == b && x == v &&lla[8]==0|| z == v && v == b && x == c &&lla[8]==0|| x == c && c == v && b == z &&lla[8]==0|| x == c && c == b && v == z &&lla[8]==0|| x == v && v == b && c == z &&lla[8]==0|| c == v && v == b && z == x&&lla[8]==0){cout<<"Full house.\n";ga[8]=1;}
if(x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=5 && x!=6 && c!=5 && c!=6 && v!=5 && v!=6 && b!=5 && b!=6 &&lla[9]==0||x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=1 && x!=6 && c!=1 && c!=6 && v!=1 && v!=6 && b!=1 && b!=6 &&lla[9]==0||x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=1 && x!=2 && c!=1 && c!=2 && v!=1 && v!=2 && b!=1 && b!=2 &&lla[9]==0||z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=5 && z!=6 && c!=5 && c!=6 && v!=5 && v!=6 && b!=5 && b!=6 &&lla[9]==0||z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=1 && z!=6 && c!=1 && c!=6 && v!=1 && v!=6 && b!=1 && b!=6 &&lla[9]==0||z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=1 && z!=2 && c!=1 && c!=2 && v!=1 && v!=2 && b!=1 && b!=2 &&lla[9]==0||z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=5 && z!=6 && b!=5 && b!=6 && v!=5 && v!=6 && x!=5 && x!=6 &&lla[9]==0||z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=1 && z!=6 && b!=1 && b!=6 && v!=1 && v!=6 && x!=1 && x!=6 &&lla[9]==0||z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=1 && z!=2 && b!=1 && b!=2 && v!=1 && v!=2 && x!=1 && x!=2 &&lla[9]==0||x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=5 && x!=6 && b!=5 && b!=6 && z!=5 && z!=6 && c!=5 && c!=6 &&lla[9]==0||x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=1 && x!=6 && b!=1 && b!=6 && z!=1 && z!=6 && c!=1 && c!=6 &&lla[9]==0||x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=1 && x!=2 && b!=1 && b!=2 && z!=1 && z!=2 && c!=1 && c!=2 &&lla[9]==0||z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=5 && z!=6 && x!=5 && x!=6 && c!=5 && c!=6 && v!=5 && v!=6 &&lla[9]==0||z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=1 && z!=6 && x!=1 && x!=6 && c!=1 && c!=6 && v!=1 && v!=6 &&lla[9]==0||z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=1 && z!=2 && x!=1 && x!=2 && c!=1 && c!=2 && v!=1 && v!=2 &&lla[9]==0){cout<<"Small straight.\n";ga[9]=1;}
if(z==1 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 &&lla[10]==0||z==2 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 &&lla[10]==0||z==3 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 &&lla[10]==0||z==4 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 &&lla[10]==0||z==5 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 &&lla[10]==0||z==2 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 &&lla[10]==0||z==3 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 &&lla[10]==0||z==4 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 &&lla[10]==0||z==5 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 &&lla[10]==0||z==6 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1&&lla[10]==0){cout<<"Large straight.\n";ga[10]=1;}
if(z == z && x == x && c == c && v == v && b == b&&lla[11]==0){cout<<"Chance.\n";ga[11]=1;}
if (z == x && x== c && c == v && v ==b){cout<<"Yahtzee!!!!\n";ga[12]=1;}

cout<<"Choose your choice on the board: ";cin>>pa;
while (pa=="m"&&ga[12]!=1&&ab[15]>=50){cout<<"You don't have a Yahtzee! You can't use this: ";cin>>pa;}
while (pa=="m"&&fa[12]==1&&ab[15]==0||pa!="a"&&pa!="b"&&pa!="c"&&pa!="d"&&pa!="e"&&pa!="f"&&pa!="g"&&pa!="h"&&pa!="i"&&pa!="j"&&pa!="k"&&pa!="l"&&pa!="m"||pa=="a"&&fa[0]==1||pa=="b"&&fa[1]==1||pa=="c"&&fa[2]==1||pa=="d"&&fa[3]==1||pa=="e"&&fa[4]==1||pa=="f"&&fa[5]==1||pa=="g"&&fa[6]==1||pa=="h"&&fa[7]==1||pa=="i"&&fa[8]==1||pa=="j"&&fa[9]==1||pa=="k"&&fa[10]==1||pa=="l"&&fa[11]==1){cout<<"Choice already chosen/scratched or wrong variable: ";cin>>pa;}

//ga[]=0;



//fin
if (pa=="a"&&fa[0]==0){if (z==1){ab[0]=ab[0]+z;}if (x==1){ab[0]=ab[0]+x;}if (c==1){ab[0]=ab[0]+c;}if (v==1){ab[0]=ab[0]+v;}if (b==1){ab[0]=ab[0]+b;}fa[0]=1;lla[0]=1;}
if (pa=="b"&&fa[1]==0){if (z==2){ab[1]=ab[1]+z;}if (x==2){ab[1]=ab[1]+x;}if (c==2){ab[1]=ab[1]+c;}if (v==2){ab[1]=ab[1]+v;}if (b==2){ab[1]=ab[1]+b;}fa[1]=1;lla[1]=1;}
if (pa=="c"&&fa[2]==0){if (z==3){ab[2]=ab[2]+z;}if (x==3){ab[2]=ab[2]+x;}if (c==3){ab[2]=ab[2]+c;}if (v==3){ab[2]=ab[2]+v;}if (b==3){ab[2]=ab[2]+b;}fa[2]=1;lla[2]=1;}
if (pa=="d"&&fa[3]==0){if (z==4){ab[3]=ab[3]+z;}if (x==4){ab[3]=ab[3]+x;}if (c==4){ab[3]=ab[3]+c;}if (v==4){ab[3]=ab[3]+v;}if (b==4){ab[3]=ab[3]+b;}fa[3]=1;lla[3]=1;}
if (pa=="e"&&fa[4]==0){if (z==5){ab[4]=ab[4]+z;}if (x==5){ab[4]=ab[4]+x;}if (c==5){ab[4]=ab[4]+c;}if (v==5){ab[4]=ab[4]+v;}if (b==5){ab[4]=ab[4]+b;}fa[4]=1;lla[4]=1;}
if (pa=="f"&&fa[5]==0){if (z==6){ab[5]=ab[5]+z;}if (x==6){ab[5]=ab[5]+x;}if (c==6){ab[5]=ab[5]+c;}if (v==6){ab[5]=ab[5]+v;}if (b==6){ab[5]=ab[5]+b;}fa[5]=1;lla[5]=1;}

if (pa=="g"&&fa[6]==0&&z == x && x == c || pa=="g"&&fa[6]==0&&z == x && x == v ||pa=="g"&&fa[6]==0&& z == x && x == b ||pa=="g"&&fa[6]==0&& z == c && c == v ||pa=="g"&&fa[6]==0&& z == c && c == b ||pa=="g"&&fa[6]==0&& z == v && v == b ||pa=="g"&&fa[6]==0&& x == c && c == v ||pa=="g"&&fa[6]==0&& x == c && c == b ||pa=="g"&&fa[6]==0&& x == v && v == b ||pa=="g"&&fa[6]==0&& c == v && v == b){ab[9]=z+x+c+v+b;fa[6]=1;lla[6]=1;}//3kind
if (pa=="h"&&fa[7]==0&&z == x && x == c && c == v ||pa=="h"&&fa[7]==0&& z == x && x == c && c == b ||pa=="h"&&fa[7]==0&& z == x && x == v && v == b ||pa=="h"&&fa[7]==0&& z == c && c == v && v == b ||pa=="h"&&fa[7]==0&& x == c && c == v && v == b){ab[10]=z+x+c+v+b;fa[7]=1;lla[7]=1;}//4kind
if (pa=="i"&&fa[8]==0&&z == x && x == c && v == b ||pa=="i"&&fa[8]==0&& z == x && x == v && c == b ||pa=="i"&&fa[8]==0&& z == x && x == b && c == v ||pa=="i"&&fa[8]==0&& z == c && c == v && x == b ||pa=="i"&&fa[8]==0&& z == c && c == b && x == v ||pa=="i"&&fa[8]==0&& z == v && v == b && x == c ||pa=="i"&&fa[8]==0&& x == c && c == v && b == z ||pa=="i"&&fa[8]==0&& x == c && c == b && v == z ||pa=="i"&&fa[8]==0&& x == v && v == b && c == z ||pa=="i"&&fa[8]==0&& c == v && v == b && z == x){ab[11]=25;fa[8]=1;lla[8]=1;}//full house
if (pa=="j"&&fa[9]==0&&x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=5 && x!=6 && c!=5 && c!=6 && v!=5 && v!=6 && b!=5 && b!=6 ||pa=="j"&&fa[9]==0&&x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=1 && x!=6 && c!=1 && c!=6 && v!=1 && v!=6 && b!=1 && b!=6 ||pa=="j"&&fa[9]==0&&x!=c && x!=v && x!=b && c!=v && c!=b && v!=b && x!=1 && x!=2 && c!=1 && c!=2 && v!=1 && v!=2 && b!=1 && b!=2 ||pa=="j"&&fa[9]==0&&z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=5 && z!=6 && c!=5 && c!=6 && v!=5 && v!=6 && b!=5 && b!=6 ||pa=="j"&&fa[9]==0&&z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=1 && z!=6 && c!=1 && c!=6 && v!=1 && v!=6 && b!=1 && b!=6 ||pa=="j"&&fa[9]==0&&z!=c && z!=v && z!=b && c!=v && c!=b && v!=b && z!=1 && z!=2 && c!=1 && c!=2 && v!=1 && v!=2 && b!=1 && b!=2 ||pa=="j"&&fa[9]==0&&z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=5 && z!=6 && b!=5 && b!=6 && v!=5 && v!=6 && x!=5 && x!=6 ||pa=="j"&&fa[9]==0&&z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=1 && z!=6 && b!=1 && b!=6 && v!=1 && v!=6 && x!=1 && x!=6 ||pa=="j"&&fa[9]==0&&z!=b && z!=v && z!=x && b!=v && b!=x && x!=v && z!=1 && z!=2 && b!=1 && b!=2 && v!=1 && v!=2 && x!=1 && x!=2 ||pa=="j"&&fa[9]==0&&x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=5 && x!=6 && b!=5 && b!=6 && z!=5 && z!=6 && c!=5 && c!=6 ||pa=="j"&&fa[9]==0&&x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=1 && x!=6 && b!=1 && b!=6 && z!=1 && z!=6 && c!=1 && c!=6 ||pa=="j"&&fa[9]==0&&x!=b && x!=z && x!=c && b!=z && b!=c && c!=z && x!=1 && x!=2 && b!=1 && b!=2 && z!=1 && z!=2 && c!=1 && c!=2 ||pa=="j"&&fa[9]==0&&z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=5 && z!=6 && x!=5 && x!=6 && c!=5 && c!=6 && v!=5 && v!=6 ||pa=="j"&&fa[9]==0&&z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=1 && z!=6 && x!=1 && x!=6 && c!=1 && c!=6 && v!=1 && v!=6 ||pa=="j"&&fa[9]==0&&z!=x && z!=c && z!=v && x!=c && x!=v && c!=v && z!=1 && z!=2 && x!=1 && x!=2 && c!=1 && c!=2 && v!=1 && v!=2){ab[12]=30;fa[9]=1;lla[9]=1;}//small straight
if (pa=="k"&&fa[10]==0&&z==1 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 ||pa=="k"&&fa[10]==0&&z==2 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 ||pa=="k"&&fa[10]==0&&z==3 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 ||pa=="k"&&fa[10]==0&&z==4 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 ||pa=="k"&&fa[10]==0&&z==5 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=6 && x!=6 && c!=6 && v!=6 && b!=6 ||pa=="k"&&fa[10]==0&&z==2 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 ||pa=="k"&&fa[10]==0&&z==3 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 ||pa=="k"&&fa[10]==0&&z==4 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 ||pa=="k"&&fa[10]==0&&z==5 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1 ||pa=="k"&&fa[10]==0&&z==6 && z!=x && z!=c && z!=v && z!=b && x!=c && x!=v && x!=b && c!=v && c!=b && v!=b &&z!=1 && x!=1 && c!=1 && v!=1 && b!=1){ab[13]=40;fa[10]=1;lla[10]=1;}//large straight
if (pa=="l"&&fa[11]==0){ab[14]=z+x+c+v+b;fa[11]=1;lla[11]=1;}//chance
if (pa=="m"&&fa[12]==0&&z==x&&x==c&&c==v&&v==b&&ga[12]==1&&ab[15]==0){ab[15]=50;ab[16]=ab[16]+1;fa[12]=1;pa="111";}
if (pa=="m"&&ab[15]>=50&&z==x&&x==c&&c==v&&v==b&&ga[12]==1&&pa!="111"){ab[15]=ab[15]+100;ab[16]=ab[16]+1;fa[12]=1;
system("CLS");cout<<"Player 2:\n";cout<<"Upper section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| Aces:         | Add 1's:  | "<<ab[0]<<"\n";cout<<"| Twos:         | Add 2's:  | "<<ab[1]<<"\n";cout<<"| Threes:       | Add 3's:  | "<<ab[2]<<"\n";cout<<"| Fours:        | Add 4's:  | "<<ab[3]<<"\n";cout<<"| Fives:        | Add 5's:  | "<<ab[4]<<"\n";cout<<"| Sixes:        | Add 6's:  | "<<ab[5]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total score:  | Add total:| "<<ab[6]<<"\n";cout<<"| Bonus: if 63+ | Add 35:   | "<<ab[7]<<"\n";cout<<"| Upper total:  | Add all:  | "<<ab[8]<<"\n";cout<<"\\---------------------------------/\n";cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";cout<<"Lower section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| 3 of a kind:  | Add all:  | "<<ab[9]<<"\n";cout<<"| 4 of a kind:  | Add all:  | "<<ab[10]<<"\n";cout<<"| Full house:   | Add 25:   | "<<ab[11]<<"\n";cout<<"| Sm. straight: | Add 30:   | "<<ab[12]<<"\n";cout<<"| Lg. straight: | Add 40:   | "<<ab[13]<<"\n";cout<<"| Chance:       | Add all:  | "<<ab[14]<<"\n";cout<<"| Yahtzee:      | Add 50:   | "<<ab[15]<<"\n";cout<<"| # of yahtzees:| All ytz's:| "<<ab[16]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total upper:  | Upper:    | "<<ab[17]<<"\n";cout<<"| Total lower:  | Lower:    | "<<ab[18]<<"\n";cout<<"\\---------------------------------/\n";cout<<" Grand total:   | Final:    | "<<ab[19]<<"\n";
cout<<"You get to go again since you got an extra Yahtzee. Press any key: ";cin>>pa;p=6;break;}
//fin make it so it only does it once:
if (pa=="a"&&fa[0]==0){fa[0]=1;}
if (pa=="b"&&fa[1]==0){fa[1]=1;}
if (pa=="c"&&fa[2]==0){fa[2]=1;}
if (pa=="d"&&fa[3]==0){fa[3]=1;}
if (pa=="e"&&fa[4]==0){fa[4]=1;}
if (pa=="f"&&fa[5]==0){fa[5]=1;}
if (pa=="g"&&fa[6]==0){fa[6]=1;}
if (pa=="h"&&fa[7]==0){fa[7]=1;}
if (pa=="i"&&fa[8]==0){fa[8]=1;}
if (pa=="j"&&fa[9]==0){fa[9]=1;}
if (pa=="k"&&fa[10]==0){fa[10]=1;}
if (pa=="l"&&fa[11]==0){fa[11]=1;}
if (pa=="m"&&fa[12]==0){fa[12]=1;}



ga[0]=0;ga[1]=0;ga[2]=0;ga[3]=0;ga[4]=0;ga[5]=0;ga[6]=0;ga[7]=0;ga[8]=0;ga[9]=0;ga[10]=0;ga[11]=0;/*g[12]=1;*/ga[12]=0;

//
system("CLS");

cout<<"Player 2:\n";cout<<"Upper section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| Aces:         | Add 1's:  | "<<ab[0]<<"\n";cout<<"| Twos:         | Add 2's:  | "<<ab[1]<<"\n";cout<<"| Threes:       | Add 3's:  | "<<ab[2]<<"\n";cout<<"| Fours:        | Add 4's:  | "<<ab[3]<<"\n";cout<<"| Fives:        | Add 5's:  | "<<ab[4]<<"\n";cout<<"| Sixes:        | Add 6's:  | "<<ab[5]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total score:  | Add total:| "<<ab[6]<<"\n";cout<<"| Bonus: if 63+ | Add 35:   | "<<ab[7]<<"\n";cout<<"| Upper total:  | Add all:  | "<<ab[8]<<"\n";cout<<"\\---------------------------------/\n";cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";cout<<"Lower section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| 3 of a kind:  | Add all:  | "<<ab[9]<<"\n";cout<<"| 4 of a kind:  | Add all:  | "<<ab[10]<<"\n";cout<<"| Full house:   | Add 25:   | "<<ab[11]<<"\n";cout<<"| Sm. straight: | Add 30:   | "<<ab[12]<<"\n";cout<<"| Lg. straight: | Add 40:   | "<<ab[13]<<"\n";cout<<"| Chance:       | Add all:  | "<<ab[14]<<"\n";cout<<"| Yahtzee:      | Add 50:   | "<<ab[15]<<"\n";cout<<"| # of yahtzees:| All ytz's:| "<<ab[16]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total upper:  | Upper:    | "<<ab[17]<<"\n";cout<<"| Total lower:  | Lower:    | "<<ab[18]<<"\n";cout<<"\\---------------------------------/\n";cout<<" Grand total:   | Final:    | "<<ab[19]<<"\n";
if (f[0]==1&&f[1]==1&&f[2]==1&&f[3]==1&&f[4]==1&&f[5]==1&&f[6]==1&&f[7]==1&&f[8]==1&&f[9]==1&&f[10]==1&&f[11]==1&&f[12]==1
&&fa[0]==1&&fa[1]==1&&fa[2]==1&&fa[3]==1&&fa[4]==1&&fa[5]==1&&fa[6]==1&&fa[7]==1&&fa[8]==1&&fa[9]==1&&fa[10]==1&&fa[11]==1&&fa[12]==1)
{cout<<"Type any key to continue: ";cin>>pa;p=10;break;}
cout<<"Type any key and press enter to continue: ";cin>>pa;p=1;break;


}//end 9

case 10:
if (p==10){
           
a[6]=a[0]+a[1]+a[2]+a[3]+a[4]+a[5];
if (a[6]>=63){a[7]=35;a[8]=a[6]+35;}
if (a[6]<63){a[7]=0;a[8]=a[6]+a[7];}
a[17]=a[6]+a[7];
a[18]=a[9]+a[10]+a[11]+a[12]+a[13]+a[14]+a[15];
a[19]=a[17]+a[18];
ab[6]=ab[0]+ab[1]+ab[2]+ab[3]+ab[4]+ab[5];
if (ab[6]>=63){ab[7]=35;ab[8]=ab[6]+35;}
if (ab[6]<63){ab[7]=0;ab[8]=ab[6]+ab[7];}
ab[17]=ab[6]+ab[7];
ab[18]=ab[9]+ab[10]+ab[11]+ab[12]+ab[13]+ab[14]+ab[15];
ab[19]=ab[17]+ab[18];          
           
           
           
pa="3";pc="10";
while (pa=="3"){
system("CLS");cout<<"Compare the scores:\n";
cout<<"Player 1: "<<a[19]<<"\n"<<"# of Yahtzees: "<<a[16]<<"\n";
cout<<"Player 2: "<<ab[19]<<"\n"<<"# of Yahtzees: "<<ab[16]<<"\n";
cout<<"\nType '1' to see the stats or '2' to continue: ";
cin>>pa;//p=1;//break;
}
if (pa!="1"&&pa!="2"){
pa="3";}

if (pa=="1"){
system("CLS");cout<<"Player 1:\n";cout<<"Upper section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| Aces:         | Add 1's:  | "<<a[0]<<"\n";cout<<"| Twos:         | Add 2's:  | "<<a[1]<<"\n";cout<<"| Threes:       | Add 3's:  | "<<a[2]<<"\n";cout<<"| Fours:        | Add 4's:  | "<<a[3]<<"\n";cout<<"| Fives:        | Add 5's:  | "<<a[4]<<"\n";cout<<"| Sixes:        | Add 6's:  | "<<a[5]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total score:  | Add total:| "<<a[6]<<"\n";cout<<"| Bonus: if 63+ | Add 35:   | "<<a[7]<<"\n";cout<<"| Upper total:  | Add all:  | "<<a[8]<<"\n";cout<<"\\---------------------------------/\n";cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";cout<<"Lower section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| 3 of a kind:  | Add all:  | "<<a[9]<<"\n";cout<<"| 4 of a kind:  | Add all:  | "<<a[10]<<"\n";cout<<"| Full house:   | Add 25:   | "<<a[11]<<"\n";cout<<"| Sm. straight: | Add 30:   | "<<a[12]<<"\n";cout<<"| Lg. straight: | Add 40:   | "<<a[13]<<"\n";cout<<"| Chance:       | Add all:  | "<<a[14]<<"\n";cout<<"| Yahtzee:      | Add 50:   | "<<a[15]<<"\n";cout<<"| # of yahtzees:| All ytz's:| "<<a[16]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total upper:  | Upper:    | "<<a[17]<<"\n";cout<<"| Total lower:  | Lower:    | "<<a[18]<<"\n";cout<<"\\---------------------------------/\n";cout<<" Grand total:   | Final:    | "<<a[19]<<"\n";
cout<<"Press any key to see player 2's stats: ";cin>>pa;pc="2";}


if (pc=="2"){
system("CLS");cout<<"Player 2:\n";cout<<"Upper section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| Aces:         | Add 1's:  | "<<ab[0]<<"\n";cout<<"| Twos:         | Add 2's:  | "<<ab[1]<<"\n";cout<<"| Threes:       | Add 3's:  | "<<ab[2]<<"\n";cout<<"| Fours:        | Add 4's:  | "<<ab[3]<<"\n";cout<<"| Fives:        | Add 5's:  | "<<ab[4]<<"\n";cout<<"| Sixes:        | Add 6's:  | "<<ab[5]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total score:  | Add total:| "<<ab[6]<<"\n";cout<<"| Bonus: if 63+ | Add 35:   | "<<ab[7]<<"\n";cout<<"| Upper total:  | Add all:  | "<<ab[8]<<"\n";cout<<"\\---------------------------------/\n";cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";cout<<"Lower section:  | Scoring:  | P/1:|\n";cout<<"/---------------------------------\\\n";cout<<"| 3 of a kind:  | Add all:  | "<<ab[9]<<"\n";cout<<"| 4 of a kind:  | Add all:  | "<<ab[10]<<"\n";cout<<"| Full house:   | Add 25:   | "<<ab[11]<<"\n";cout<<"| Sm. straight: | Add 30:   | "<<ab[12]<<"\n";cout<<"| Lg. straight: | Add 40:   | "<<ab[13]<<"\n";cout<<"| Chance:       | Add all:  | "<<ab[14]<<"\n";cout<<"| Yahtzee:      | Add 50:   | "<<ab[15]<<"\n";cout<<"| # of yahtzees:| All ytz's:| "<<ab[16]<<"\n";cout<<"|---------------------------------|\n";cout<<"| Total upper:  | Upper:    | "<<ab[17]<<"\n";cout<<"| Total lower:  | Lower:    | "<<ab[18]<<"\n";cout<<"\\---------------------------------/\n";cout<<" Grand total:   | Final:    | "<<ab[19]<<"\n";
cout<<"Press any key to continue: ";cin>>pa;pa="3";}

if (pa=="2"){
cout<<"Would you like to play again: '1' for yes or '2' for no: ";cin>>pc;
if (pc=="1"){system("CLS");return main();}
if (pc=="2"){return 0;}
while (pc!="1"&&pc!="2"){cout<<"Wrong variable: ";cin>>pa;}
}

}//end case 10

case 11:
if (p==11){
system("CLS");
cout<<"'HELP':\n"; 
cout<<"-------------------------------------------------------------------------------\n";
cout<<"This is a 2 player game.\n";
cout<<"-------------------------------------------------------------------------------\n";
cout<<"To keep a die when you roll type the letter inside the '' or 'a' to\nnot keep it.\n";      
cout<<"-------------------------------------------------------------------------------\n";
cout<<"When putting the score in type the letter in order from a-m on the board.\n";
cout<<"Ex. 'a' for one's or 'g' for 3 of a kind or even 'm' for Yahtzee.\n";
cout<<"-------------------------------------------------------------------------------\n";
cout<<"This game is impossible to cheat on so if you don't have a Yahtzee and you\n";
cout<<"type 'm' in on the board it will give a 0 for it or if you type in 4 of a kind\n";
cout<<"and you don't have it then it will give you a zero.\n";
cout<<"-------------------------------------------------------------------------------\n";
cout<<"If you have already done a play for example one's and you type 'a' in it will\n";
cout<<"say incorrect or used variable and you must type another play in.\n";
cout<<"-------------------------------------------------------------------------------\n";
cout<<"Type any key to return to the start of the game: ";cin>>pc;
if (pc=="1"||pc!="1")
{system("CLS");return main();}
}//end 11

case 12:{

while (p==12&&pc!="1")
{system("CLS");cout<<"You have found my 'EASTER EGG'!\n";
cout<<"Congratulations! You get absolutely nothing and thanks\nfor taking the time to find this out!\n";
cout<<"PS: Don't tell anybody about this; it's a secret between us, but you have\nno life for figuring it out! :D:D:D\n";
//cout<<"Maybe I should add a riddle to this to make it interesting???\n";
cout<<"Type '1' to return to the start of the game: ";
system ( "color 0" );system ( "color 1" );system ( "color 2" );system ( "color 3" );system ( "color 4" );system ( "color 5" );system ( "color 6" );system ( "color 7" );system ( "color 8" );system ( "color 9" );system ( "color 00" );system ( "color 01" );system ( "color 02" );system ( "color 03" );system ( "color 04" );system ( "color 05" );system ( "color 06" );system ( "color 07" );system ( "color 08" );system ( "color 09" );system ( "color 0A" );system ( "color 0B" );system ( "color 0C" );system ( "color 0D" );system ( "color 0E" );system ( "color 0F" );
cin>>pc;}
if (pc=="1"||pc!="1"){system("CLS");return main();}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////

}//end p=1,=2,=3,4,5,6,7,8,9,10 loop

}///end main
