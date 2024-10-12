#include <iostream.h>
#include <conio.h>
void main()
{
 clrscr();
 int day;
 cout<<"Give the number of the week: ";
 cin>>day;
 switch(day)
 {
 case 1: cout<<"Monday";
	 break;
 case 2: cout<<"Tuesday";
	 break;
 case 3: cout<<"Wednesday";
	 break;
 case 4: cout<<"Thursday";
	 break;
 case 5: cout<<"Friday";
	 break;
 case 6: cout<<"Saturday";
	 break;
 case 7: cout<<"Sunday";
	 break;
 default: cout<<"Try again";
 }
 getch();
}