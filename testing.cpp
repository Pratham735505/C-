#include<iostream>
using namespace std;
int c;
class A {
    int a,b;
public:
    int prime() {
        cout<<"\nEnter a number\n";
        cin>>::c;
        a=::c;
        b=0;
        while(a>0) {
            if(::c%a==0) {
                b++;
            }
        }
        if(b==2)
            return 1;
        else
            return 0;
    }
};

class B:A {
    int g,e,d;
public:
    void fact() {
        e=1;

        if(A::prime()==1) {
            g=::c;
            while(g>0) {
                e=e*g;
                g--;
            }
            cout<<"\n"<<e;


        }
        else {
            cout<<"\nPranam";
        }
    }
};

int main()
{
    B obj;
    obj.fact();

    return 0;
}