#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
void encrypt();
void decrypt();
int main()
{
    int choice;
    cout<<"What do you want to perform?\n";
    cout<<"1.Encryption\n2.Decryption\n3.Exit\nChoose:\t";
    cin>>choice;
    switch(choice)
    {
        case 1:
        encrypt();
        break;

        case 2:
        decrypt();
        break;

        case 3:
        exit(0);

        default :
        cout<<"Invalid Choice!!!\n";
        break;


    }
    return 0;
}

void encrypt()
{
     int i,j=0;
    char txt[20],y[20];
    
    cout << "Enter the text to be encrypted:";
  getch();
    gets(txt);
     for(i=0;txt[i]!='\0';i++)
   { if(txt[i]==' '){
         y[j]=txt[i];
         j++;
   }
         else{
         y[j]=txt[j]+1 ;
         j++;
         }
   }
   y[j] = '\0';
   cout<<"The Encrypted Cipher Text is :\t";
//    cout<<y<<endl;
    puts(y);
}

void decrypt()
{
     int i,j=0;
    char txt[20],y[20];
    
    cout << "Enter the text to be encrypted:";
    getch();
    gets(txt);
     for(i=0;txt[i]!='\0';i++)
   {
           if(txt[i]==' '){
         y[j]=txt[i];
         j++;
   }
         else{
         y[j]=txt[j]-1;
         j++;
         }
   }
   y[j]='\0';
   cout<<"The Encrypted Cipher Text is :\t";
 //   cout<<y<<endl;
     puts(y);
}
