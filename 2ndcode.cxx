#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    char x[20],y[20];
    int i,j=1,c,d=0,e=0;
    cout<<"Enter a string:";
    gets(x);
    for(i=0; i<strlen(x); i++) {
        if(x[i]>='a'&&x[i]<='z' ) {
            x[i]=x[i]-32;
        }
    }
    cout<<x;
    y[0]=x[0];
    for(i=1; i<strlen(x); i++) {
        if(x[i]==' ') {
            y[j]=x[i+1];
            j++;
        }

    }
    y[j]='\0';
    cout<<"\n"<<y<<"\n";
    for(c=strlen(y)-1; c>=0; c--) {
        if(y[c]!=y[d]) {
            cout<<y<<" is not palindrome";
            e=1;
            break;

        }
        d++;
    }
  if(e==0)
  cout<<y<<" is palindrome";
    return 0;
}