#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    char x[20];
    int i;
    cout<<"Enter a string:";
    cin>>x;
    for(i=0; i<strlen(x); i++) {
        if(x[i]>='a'&&x[i]<='z' ) {
            x[i]=x[i]-32;
        }
    }
    for(i=0; i<strlen(x)-1; i++) {
        if(x[i]==x[i+1]-1) {
            cout<<x[i]<<x[i+1]<<" ";
        }

    }
    return 0;
}