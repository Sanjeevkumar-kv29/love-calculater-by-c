#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
int a,b;
char n[30],N[30];
while(1)
{
srand(time(NULL));
b=rand()%101;
clrscr();
printf("                    WELCOME LOVE CALCULATOR -");
printf("\n\nENTER YOUR NAME - ");
gets(n);
printf("\nENTER YOUR CRUSH NAME - ");
gets(N);
printf("\n\n please wait your result is being calculated \n");
for(a=0;a<=38;a++)
{
printf("* \a");
delay(200);
}

printf("\n\nYOUR LOVE SCORE IS - %d PERCENT \n\n\n",b);

if(b>=90&&b<=100)
printf("AAP KA PYAAR SACCHA HAI EXTERAM LEVEL KA  ") ;

if(b>=75&&b<90)
printf("APP DONO EEK DOOSRE SE BHUT PYAR KARTE HAI  ");

if(b>=50&&b<75)
printf("AVERAGE PYAR HAI LUCK PAR DEPEND HAI HO BHI SAKTA HAI OR NAHI BHI");

if(b>=40&&b<50)
printf("PHALTU KE CHAKKAR CHOOD CARRER PAR DHAYAN DE CHUTIYA");

if(b<40)
printf("TUM SE NAA HO PAYEGA CHUTIYA HO TUM CHUTIYA PYAR VYAR TMHARE BASS KA NHI HAI ");

getch();

}
}

