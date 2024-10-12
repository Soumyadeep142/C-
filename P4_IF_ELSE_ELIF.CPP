#include <iostream.h>
#include <conio.h>

void main()
{
 clrscr();
 int age, lim;
 lim=18;
 cout<<"Enter your age: ";
 cin>>age;
 if (age>lim)
 cout<<"You are eligible to vote";
 else
 cout<<"You are not eligible";
 getch();
}