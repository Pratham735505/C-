#include <iostream>
#include <stdlib.h>
#include <conio.h>
struct rec{
char name[50];
char f[50];
char m[50];
char board[50];
float per;
int id;
char caste[50];

}r[50];
class A{
int a,b;
public:
void get(){
std::cout<<"\nEnter number of registrations=";
std::cin>>b;
for(a=0;a<b;a++){
std::cout<<"\nEnter name=";
std::cin>>::r[a].name;
std::cout<<"\nEnter Father's Name=";
std::cin>>::r[a].f;
std::cout<<"\nEnter Mother's Name=";
std::cin>>::r[a].m;
std::cout<<"\nEnter Board of school=";
std::cin>>::r[a].board;
std::cout<<"\nEnter percentage of 12th=";
std::cin>>::r[a].per;
std::cout<<"\nEnter caste=";
std::cin>>::r[a].caste;
::r[a].id=rand()%1000;
}
void out(){
for(a=0;a<b;a++){
std::cout<<"Your id is:"<<::r[a].id;
}
}
}
};

class Ent:A{
public:
void getd(){
A::get();
}
void putd(){
A::out();
std::cout<<"You have passed the entrance";
std::cout<<"Counselling is on 29 Feb";
}
};

class coun:Ent{


}




int main(){

Ent obj;
obj.getd();
}