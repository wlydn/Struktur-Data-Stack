#include <iostream>
#include <windows.h>
#include <stdlib.h>
 using namespace std;
typedef struct
{ string no[10],nama[20],posisi[20];
	int atas=0; int bawah=1;
    }stack_player;
stack_player player;
bool emptyStack(stack_player X){ if(X.atas==0) {return true;} else {return false;}}
bool fullStack(stack_player X){if(X.atas==100){return true;} else{return false;}}
 //PUSH
void Push_Stack(stack_player &X)
{
	X.atas++;//sediakan tempat diposisi teratas
	cout<<" "<<endl;
	cout<<"DATA PEMAIN BOLA "<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"No punggung      : ";cin>>X.no[X.atas];
	cout<<"Nama Pemain      : ";cin>>X.nama[X.atas];
	cout<<"Posisi		 : ";cin>>X.posisi[X.atas];
	
	cout<<" "<<endl;
 } 
//PRINT
void Print_Stack(stack_player &X)
{
cout<<"Isi Stack"<<endl;
cout<<"------------------------------"<<endl;	
for(int i=X.atas;i>=1;i--)
cout<<X.no[i]<<" -> "<<X.nama[i]<<" -> "<<X.posisi[i]<<endl;
 }
//POP
void Pop_Stack(stack_player &X)
{
	X.atas--;
}
 int main()
{	int pilih=0;
	do
	{
	
	cout<<"------------------------------------------------------------------------------"<<endl;
	cout<<" 			STACK MENGGUNAKAN LINKED LIST"<<endl;
	cout<<" "<<endl;
	cout<<"1:PUSH"<<endl;
	cout<<"2:POP"<<endl;
	cout<<"3:PRINT"<<endl;
	cout<<"4:Keluar"<<endl;
	
	cout<<"Pilih (1-4): ";cin>>pilih;
	switch(pilih){
case 1:{if(fullStack(player)){cout<<"Stack penuh!"<<endl;}
	   	    else {Push_Stack(player);}break;}
case 2:{if(emptyStack(player)){cout<<"Stack kosong!"<<endl;}
		 	  else {Pop_Stack(player);}break;}
 case 3:{if(emptyStack(player)){cout<<"Stack kosong!"<<endl;}
			else {Print_Stack(player);}break;}	
					   
case 4:{
	return 0;
	break;
}
	
}
   
}
 while(pilih!=0);
}
