#include<iostream>
using namespace std;

class larger
{
    int f,s;
public:
    void getdata();
    void showlarger();   
};

void larger :: getdata()
{
    cout<<"Enter First Number: ";
      cin>>f;
    cout<<"\nEnter Second Number:";
      cin>>s;
}

void larger :: showlarger()
{
    if(f>s)
       cout<<"\n"<<f<<" is larger than "<<s<<endl;
    else if(s>f)
       cout<<"\n"<<s<<" is larger than "<<f<<endl;  
    else
       cout<<"\nBoth Numbers are Equal"<<endl;    
}

int main()
{   
    larger L;
    L.getdata();
    L.showlarger();
    return 0;  
}