#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>

int a[2]={0,else  if(ch=='-'){
        e=a[0]-a[1];
    }0};
char str[20];
char ch;
int i=0,j=0;

int main(){
    int d,e;
    cout<<"\nEnter problem\n";
    cin>>str;
    
    while(str[i]!='\0'){
        if(str[i]>=48 && str[i]<=58){
            d=str[i]-48;
            a[j]=a[j]*10+d;
        }
        else if(str[i]=='+'){
            ch='+';
            j++;
        }
        else if(str[i]=='-'){
            ch='-';
             j++;
        }
         else if(str[i]=='*'){
            ch='*';
             j++;
        }
         else if(str[i]=='/'){
            ch='/';
             j++;
        }
         else if(str[i]=='%'){
            ch='%';
             j++;
        }
        i++;
    }
    if(ch=='+'){
        e=a[0]+a[1];
    }
    else  if(ch=='-'){
        e=a[0]-a[1];
    }
    else  if(ch=='*'){
        e=a[0]*a[1];
    }
    else  if(ch=='/'){
        e=a[0]/a[1];
    }
    else  if(ch=='%'){
        e=a[0]%a[1];
    }
    cout<<e;
    return 0;
}