#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
  

void printMsg()
{
    int gdriver = DETECT,gmode,i;
  
    initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
  
    
    setcolor(13);
          
    settextstyle(6,0,6);
          
    outtextxy(100,20*6,"Welocme to Efficient ");
    outtextxy(100,20*10,"Traffic Management System ");  
    
    setcolor(14);
    settextstyle(10,0,4);
    outtextxy(100,20*14,"Done by : ");
    
    setcolor(9);
    settextstyle(8,0,3);
    outtextxy(100,20*17,"* V.Venkata Narendra *");
    outtextxy(100,20*19,"* 18BCE0515 *");
    outtextxy(100,20*21,"* Vellore Institute Of Technology *");


    delay(20000);
}
  
  
int main()
{
    float a,b,c,d;
    float total=0;
    float time = 240;
    system("COLOR 2F");
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
	printf("                             Welcome to efficient traffic management system\n");
    printf("-----------------------------------------------------------------------------------------------------------------------\n\n\n");
	printf("Enter traffic length in lane 1 : \n");
	scanf("%f",&a);
    printf("Enter traffic length in lane 2 : \n");
    scanf("%f",&b);
	printf("Enter traffic length in lane 3 : \n");
    scanf("%f",&c);
	printf("Enter traffic length in lane 4 : \n");
    scanf("%f",&d);
    total = total + a + b + c + d;
    a = time * (a/(float)total);
    b = time * (b/(float)total);
    c = time * (c/(float)total);
    d = time * (d/(float)total);
    
    printf("\n\nCalculating time........\n\n");
    
    printf("Time required for lane 1 is : %f",a);
    printf("\nTime required for lane 2 is : %f",b);
    printf("\nTime required for lane 3 is : %f",c);
    printf("\nTime required for lane 4 is : %f",d);
	printMsg();
    getch();
}
