#include <iostream.h>
#include <conio.h>
void main()
{
 clrscr();
 int r;
 for (r=0; r<100; r++)
 {
  cout<<r<<"  ";
  if (r==50)
   break;
 }
 getch();
}