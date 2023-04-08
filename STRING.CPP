#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

void sort();
void bs();
char a[20][10];
int main(int argc, char *argv[])
{
	int i;
	for(i=0;i<10;i++){
	    cout<<"\nEnter string "<<i+1<<"\n";
	    gets(a[i]);
	}
	sort();
	bs();
	return 0;
}

void sort(){
    int i,j;
    char c[20];
    for(i=0;i<10;i++){
        for(j=0;j<9;j++){
            if(a[0][j]>a[0][j+1]){
                strcpy(c,a[j]);
               strcpy(a[j],a[j+1]);
                strcpy(a[j+1],c);
            }
            else if(a[0][j]==a[0][j+1] && a[1][j]>a[1][j+1]){
                strcpy(c,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],c);
            }
        }
    }
}

void bs(){
    int j=0,mid;
    int low=0;
   int high=9;
    char c[20];
    cout<<"\nEnter string to find:";
    gets(c);
   while(low<=high){
       mid=(low+high)/2;
       if(strcmp(a[mid],c)==1){
           cout<<c<<" In array of string";
           j=1;
           break;
       }
       else if(a[mid]<c){
           low=mid+1;
       }
       else if(a[mid]>c){
           high=mid-1;
       }
   }
    if(j==0){
        cout<<"\nElement not in array of string:";
    }
}