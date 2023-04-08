#include<stdio.h>
#include<iostream>
using namespace std;
#include<conio.h>

void unions();
void intersection();
void subtraction();
char a[4],b[4],c[8];
int i=0,d,e=0,f=0,n=0;
int main() {
    for(i; i<4; i++) {
        cout<<i+1<<" Element of the list\n";
        cin>>a[i];
    }
    for(i=0; i<4; i++) {
        cout<<i+1<<"\nElement of 2nd array\n";
        cin>>b[i];
    }
    for(e; e<4; e++) {
        c[e]=a[e];
    }
    for(e=4; e<8; e++) {
        c[e]=b[e-4];
    }
    for(e=0; e<8; e++) {
        cout<<c[e];
    }
    cout<<"\n1.Removing Duplicates\n2.Union\n3.Intersection\n4.Subtraction\n";
    cin>>d;
    switch(d) {
    case 1:
        for(e=0; e<8; e++) {
            for(f=0; f<8; f++) {
                if(c[e]==c[f]) {
                    c[e]=' ';
                    break;

                }
            }
        }
        for(e=0;e<8;e++){
        cout<<c[e];
        }
        break;
    case 2:
        unions();
        break;
    case 3:
        intersection();
        break;
    case 4:
        subtraction();
        break;
    default:
        cout<<"\nWrong choice";
    }
    return 0;
}
void intersection () {
    for(e=0; e<4; e++) {
        if(a[e]==b[e]) {
            cout<<a[e];
        }
    }
}

void unions() {
    for(e=0; e<4; e++) {
        if(a[e]!=b[e]) {
            cout<<a[e];
           // cout<<b[e];
        }
    }
}


void subtraction () {
    for(e=0; e<4; e++) {
        for(f=0; f<4; f++) {
            if(a[e]-b[f]==0) {
                n=1;
                break;
            }
            if(n==0) {
                cout<<a[e];
            }
            
        }
        n=0;
    }
}