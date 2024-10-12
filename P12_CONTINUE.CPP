#include <iostream.h>
#include <conio.h>
void main()
{
 clrscr();
 int x;
 for (x=0; x<100; x++)
 {
  if (x%2==0)
   continue;
   cout<<x<<" ";
 }
 getch();
}