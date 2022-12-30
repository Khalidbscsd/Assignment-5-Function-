#include<iostream>
using namespace std;
void both_No();
int argument_no();
void return_no(int i);
int both(int b);

int main()
{
	//Muhammad Khalid BSCS section D Roll No 04
	
    cout<<"Case No 1 "<<endl;
    cout<<"No Argument And No return "<<endl;
    both_No();


    cout<<"Case No 2 "<<endl;
    cout<<"Only  Return Value "<<endl;
    int c;
    c=argument_no();
    if(c%2==0)
    cout<<"Even number. : "<<c<<endl;
    else 
    cout<<"Odd number.  : "<<c<<endl;
    
    
    
    cout<<"Case No 3   "<<endl;
    cout<<"Only Argument  "<<endl;
    int i;
    cout<<"Enter your number : ";
    cin>>i;
    return_no(i);
    
    
    cout<<"Case No  4  "<<endl;
    cout<<"Argument and Return Both  "<<endl;
    int d,b;
    d= both(b);
    if(d==0)
    cout<<"Even Number.  : "<<endl;
    else 
    cout<<"Odd Number.   : "<<endl;

    
    
}
  

// All Function     


//"No Argument And No return "

void both_No()
{ 
  int a;
  cout <<"Enter your Number : ";
  cin>>a;
  if (a%2==0)
  cout<<"Even number. : "<<a<<endl;
  else 
  cout<<"Odd number.  : "<<a<<endl;

}


//"Only  Return Value "

int argument_no()
{
 int b;
 cout<<"Enter your number. " ;
 cin>>b;
 return b;

}

//  Only Argument  "

void return_no(int i)
{
 if(i%2==0)
 cout<<"Even number.  : "<<i<<endl;
else 
 cout<<"Odd number.  : "<<i<<endl;

}

// both argument and return value

int both(int b)
{
  
  cout<<"Enter your number.   : ";
  cin>>b;
  
  return (b%2);

}
