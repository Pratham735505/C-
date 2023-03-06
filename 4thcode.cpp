#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
#define M 3
void push(char);
//void display();
int i,d;
char a[M],b[M],g,c[M];
int top=-1;
int main()
{
 
  
    clrscr();
    cout<<"Enter String ";
    cin>>b;
    strcpy(c,b);
    for(d=0;d<3;d++){
        if(b[d]>=65 && b[d]<=122){
            push(b[d]);
        }
        else{
            g=b[d];
        }
        
    }
    a[2]=g;
    
    do{
    cout<<"\n1.Postfix\n2.Prefix\n3.Normal\n";
    cin>>i;
    switch(i){
    case 1:
    for(d=0;d<M-1;d++){
        cout<<a[d]<<" ";
    }
    cout<<g;
        
    break;
    case 2:
    cout<<g;
    for(d=0;d<M-1;d++){
        cout<<a[d]<<" ";
    }
    
    break;
    case 3:
    cout<<c;
    break;
    case 4:
    exit(0);
    break;
    default:
    printf("Invalid choice");
    }
   
    }while(i!=4);
    return 0;
}

void push(char b){
  
  if(top==M-1)
  cout<<"Stack Overflow";
  else{ 
  top=top+1;
  a[top]=b;
}
}
/*void pop(){
if(top==-1)
cout<<"Stack Underflow";
else{
cout<<"\nThe popped element is %d="<<a[top];
top=top-1;

}}
void display()
{ 
if(top==-1)
cout>>"stack is empty";
else{
int i;
for(i=top;i>=0;i--){
cout<<"\n"<<a[i];
}
}
}
*/
    