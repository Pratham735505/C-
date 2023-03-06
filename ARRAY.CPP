#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void insert();
void dlt();
char a[8],b[8],c[8];
 int main(){
 clrscr();

 cout<<"\nEnter the string\n";
 cin>>a;
 int d;
 cout<<"\n1.Insertion\n2.Deletion\n3.Exit\nEnter Choice:";
 cin>>d;
   switch(d){
     case 1:
       insert();
       break;
     case 2:
       dlt();
       break;
     case 3:
       exit(0);
     default:
      cout<<"\nWrong choice\n";
   }


 return 0;
 }

 void dlt(){
  char w;
  int i,g,d=0;
  cout<<"\nEnter the character to be deleted\n";
  cin>>w;
 /* cout<<"\nEnter at which position you want to insert\n";
  cin>>i;*/
  for(g=0;g<strlen(a);g++){
  if(a[g]!=w){
    b[d]=a[g];
    d++;
  }
 }
 b[d]='\0';
 cout<<"\nNew string is:"<<b;

  }
  void insert(){
  char w;

  int i,e=0,d=0;
  cout<<"\nEnter element to be inserted\n";
  cin>>w;
  cout<<"\nEnter at which position you want to insert\n";
  cin>>i;
  for(e;e<strlen(a);e++){
  if(e==i){
   c[d]=w;
   d++;
   }
   else if(e>i){
   c[d]=a[e-1];
   d++;
   }
   else{
   c[d]=a[e];
   d++;
   }

 }
 c[d]=a[strlen(a)-1];
 d++;
 c[d]='\0';



  cout<<c;
  getch();
    }