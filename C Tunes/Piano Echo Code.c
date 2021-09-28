#include <dos.h>
void main()
{
	char ch;
	clrscr();
	printf("q to quit . . .\n");
	do
	{
		ch=getch();
		switch(ch)
		{
			case 'a':
				sound(250);
				break;
			case 's':
				sound(300);
				break;
			case 'd':
				sound(350);
				break;
			case 'f':
				sound(400);
				break;
			case 'g':
				sound(450);
				break;
			case 'h':
				sound(500);
				break;
			case 'j':
				sound(550);
				break;
			case 'k':
				sound(600);
				break;
			case 'l':
				sound(650);
				break;
		}
		delay(100);
		nosound();
	}while(ch!='q');
}
