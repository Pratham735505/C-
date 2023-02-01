#include<iostream>
using namespace  std;

#include<conio.h>
    struct rec {
        char name[30],f[30],m[30];
        int roll,sub1,sub2,sub3;
        float sgpa;
    } rec1[5];
void entryi(int g);
void display();
int main() {
    int x,g;

    clrscr();
    do{
        cout<<"\nPress 1 for new entry\nPress 2 to view record\n";
        cin>>x;
        switch(x) {
        case 1:
            cout<<"Enter how many records do you want to insert max is 5\n";
            cin>>g;
            if(g>5)
                cout<<"Not enough space";
            else
                entryi(g);
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            cout<<"Wrong choice";
        }
    } while(x!=3);
    getch();
}
void entryi(int g) {
    int i;
    for(i=0; i<g; i++) {
        cout<<"\nEnter name=";
        cin>>rec1[i].name;
        cout<<"\nEnter Father's name=";
        cin>>rec1[i].f;
        cout<<"\nEnter Mother's name=";
        cin>>rec1[i].m;
        cout<<"\nEnter Roll Number=";
        cin>>rec1[i].roll;
        cout<<"\nEnter Marks in C=";
        cin>>rec1[i].sub1;
        cout<<"\nEnter Marks in C++=";
        cin>>rec1[i].sub2;
        cout<<"\nEnter Marks in DE=";
        cin>>rec1[i].sub3;
        rec1[i].sgpa=(rec1[i].sub1+rec1[i].sub2+rec1[i].sub3)*10/3;
    }
    }
    void display() 
    {
        int r,i;
        cout<<"\nEnter roll number=";
        cin>>r;
        cout<<endl;
        cout<<"\n|\tName\t|\tFather's Name\t|\tMother's Name\t|\tRoll Number\t|\tC\t|\tC++\t|\tDE\t|\tSGPA\t|";

        for(i=0; i<5; i++) {
            if(rec1[i].roll==r) {
                cout<<" \t "<<rec1[i].name<<" \t "<<rec1[i].f;
                cout<<" \t "<<rec1[i].m<<" \t "<<rec1[i].roll<<" \t ";
                cout<<rec1[i].sub1<<" \t "<<rec1[i].sub2<<" \t "<<rec1[i].sub3;
                cout<<" \t "<<rec1[i].sgpa;
                break;
            }
            else if(i==4) {
                cout<<"\nIncorrect roll or result not declared\n";
            }
        }
        }
        
    