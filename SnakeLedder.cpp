#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


char p1 [30], p2 [30];
int sp1, sp2;
int *temp;

void play(int ch);
void snake(int ch);
void ledder(int ch);


using namespace std;

int main()
{
    int s1, s2;
    
    clrscr();
    
    cout << "Enter player 1 name : ";
    cin >> p1;
    
    cout << "Enter player 2 name : ";
    cin >> p2;
    
    do
    {
        cout << "\n\n\n" <<  p1 << " turn\nPress any key to play" << endl;
        getch();
        play(1);
        
        if(sp1 == 100)
        {
            cout << p1 << " won." << endl;
            break;
        }
        
        cout << "\n\n" << p2 << " turn\nPress any key to play" << endl;
        getch();
        play(2);
        
        if(sp2 == 100)
        {
            cout << p2 << " won." << endl;
            break;
        }
        
        
    }while(1);
    
    
    getch();
    
    return 0;
}


void play(int ch)
{
    int score;
    char n[30];
    
    score = (rand()%6) + 1;
       
    if(ch == 1)
    {
        strcpy (n, p1);
        temp = &sp1;
    }
    
    else
    {
        strcpy (n, p2);
        temp = &sp2;
    }
    
    if(*temp + score <= 100)
    {
        *temp += score;
    }
    
    else
    {
        cout << n << " can not move because " << n << " is on " << *temp << " and can move only when gets " << 100-*temp << " or less" << endl;
    }
    
    cout << n << " got " << score << endl;
    cout << "Now " << n << " is on " << *temp << endl;
    
    score = *temp;
    
    if(score == 30 || score == 45 || score == 70 || score == 80 || score == 95)
    {
        snake(ch);
    }
    
    if(score == 10 || score == 25 || score == 35 || score == 40 || score == 68)
    {
        ledder(ch);
    }
}

void snake(int ch)
{
    char n[30];
    int* ptr;
      
    if(ch == 1)
    {
        ptr = &sp1;
        strcpy(n, p1);
    }
    
    else
    {
        ptr = &sp2;
        strcpy(n, p2);
    }
    
    cout << "Snake found on " << *ptr << endl;
  
    switch(*ptr)
    {
    case 30:
        *ptr = 8;
        break;
        
    case 45:
        *ptr = 12;
        break;
        
    case 70:
        *ptr = 23;
        break;
        
    case 80:
        *ptr = 17;
        break;
        
    case 95:
        *ptr = 2;
    }
    
    cout << "Now " << n << " fallen to " << *ptr << endl;
    
}


void ledder(int ch)
{
    char n[30];
    int* ptr;
      
    if(ch == 1)
    {
        ptr = &sp1;
        strcpy(n, p1);
    }
    
    else
    {
        ptr = &sp2;
        strcpy(n, p2);
    }
    
    cout << "Ledder found on " << *ptr << endl;
  
    switch(*ptr)
    {
    case 10:
        *ptr = 29;
        break;
        
    case 25:
        *ptr = 56;
        break;
        
    case 35:
        *ptr = 89;
        break;
        
    case 40:
        *ptr = 59;
        break;
        
    case 68:
        *ptr = 99;
    }
    
    cout << "Now " << n << " climbed to " << *ptr << endl;
    
}