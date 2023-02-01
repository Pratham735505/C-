"LOGIN-PASSWORD Program"

#include<iostream>
#include<conio.h>
#include<string.h>
#include<windows.h>
using namespace std;
void gotoxy(short x, short y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main()
{
	char password[10],username[10]="RAJ",us[10],ch;
	int i=0;
	bool iscorrect=0;
	gotoxy(70,1);
	cout<<"NATIONAL P.G. COLLEGE";
	while((iscorrect==false))
	{
		gotoxy(70,10);
		cout<<"Username: ";
		cin>>us;
		if(strcmp(username,us)==0)
		{
			gotoxy(70,11);
			cout<<"Enter 7 character Password: ";
			iscorrect=true;
			for(int i=0;i<=6;i++)
			{
				ch=getch();
				password[i]=ch;
				ch='*';
				cout<<ch;
			}
				if(ch!=13)//13 is ASCII for enter
				{
					cout<<"";
				}
				else if(ch!=8)//8 is ASCII for backspace
				{
					cout<<"*";
				}
				gotoxy(70,15);
				cout<<"Login successful";
				gotoxy(70,16);
				cout<<"Your Password is: ";
				for(int i=0;i<=6;i++)
				{
					cout<<password[i];
				}
				getch();
		}
		else
		{
			gotoxy(70,11);
			cout<<"Wrong Username or Password";
		}
		i++;
	}
return 0;
}