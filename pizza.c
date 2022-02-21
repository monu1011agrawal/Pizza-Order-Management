#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//#include<graphics.h>
#include<windows.h>
void returnfunc(void);
void mainmenu(void);
void customer(void);
void vegetarian(void);
void nonvegetarian(void);
void details(void);
void aboutus(void);
int getdata();
struct employee
{
	int quantity;
};
struct employee e;
FILE *fp,*ft,*dp,*dt;
int again;
int quantity;
double total=0;
int main()
{
	system("color 1F");
	mainmenu();
	system("color 8F");
	return 0;
}

void mainmenu(void)
{
	system("cls");
	printf("    ******************************************************************************************************\n");
	printf("                                               PIZZA ORDER AND MANAGEMENT SYSTEM\n");
	printf("    ******************************************************************************************************\n\n\n");
	printf("          1.For Administrative-->\n\n\n\n          2. CUSTOMER SECTION--> \n\n\n\n          3. ABOUT US--> \n\n\n\n          4. Exit--> \n\n\n\n\n             Enter Your Choice --->");
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		system("cls");
			
	char v;
	FILE *vmenu;
	vmenu=fopen("order.txt","rt");
	while((v=getc(vmenu))!=EOF)
        {
        	printf("%c",v);
		}
		fclose(vmenu);
	printf("************************************************************************************************************************\n\n");
	printf("\n\n    Press Any Key To Go Back.");
	if(getch())
	mainmenu();
	}
	else if(choice==2)
	{
		customer();
	}
	else if(choice==3)
	{
		aboutus();
	}
	else if(choice==4)
	{
		system("cls");
		printf("\n\n\n");
		printf("                              *******************************THANK YOU**************************************\n\n\n");

		printf("                              ****************Feeling HUNGRY ? Call or Walk-In VELLORE KITCHEN***************\n\n");
		exit(0);
	}
}

void customer(void)
{

	system("cls");
	system("color 9");
	printf("                        ************************************************\n                                          WELCOME\n                        ************************************************\n\n");
	printf("               YOU ARE--->\n\n               1. Vegetarian\n\n\n               2. Non Vegetarian\n\n\n               3. Back To Main Menu\n\n\n   Enter Your Choice  -->");
	int k;
	scanf("%d",&k);
		int wait;
	//printf("In progress :");
	for(wait=0;wait<=50000;wait++)
	{
		printf("\rLoading please wait.......%d %",wait/500);
	}
	if(k==1)
	{
		system("cls");
		vegetarian();
	}
	else if(k==2)
	{
		system("cls");
		nonvegetarian();
	}
	else if(k==3)
	{
		system("cls");
		mainmenu();
	}
	else
	{
		printf("Wrong Input !Please Re-enter The Correct Option......\n\n");
		customer();
	}
}
void vegetarian(void)
{
	int choice;
	int again;
	int quantity;
	system("color 2F");
	double price=0;
	
	printf("                    ****************************************\n                                  VEG PIZZA\n                    ****************************************\n\n");
	char v;
	FILE *vmenu;
	vmenu=fopen("vegmenu.txt","rt");
	while((v=getc(vmenu))!=EOF)
        {
        	printf("%c",v);
		}
         fclose(vmenu);
    printf("\n\nEnter What You Want :");
	printf("\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 450*(quantity);
		printf("\n");
		printf(" \t\t\t1-- To Order Again :\n\t\t\t 2-- To Get Your Total:\n\n\tEnter Your Choice :");
		scanf("%d",&again);
		printf("\n");
		if(again==1)
		{
			printf("\n\n");
			vegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);
	
			details();
		}
	}
	else if(choice==2)
	{
		printf("Quantity :");
		scanf("%d",&quantity);
		total=total + 395*(quantity);
		printf(" \t\t\t1-- To Order Again :\n\t\t\t 2-- To Get Your Total:\n\n\tEnter Your Choice :");
		scanf("%d",&again);
		if(again==1)
		{
			printf("\n\n");
			vegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);
	
			details();
		}
	}
	else if(choice==3)
	{
		printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 395*(quantity);
		printf(" \t\t\t1-- To Order Again :\n\t\t\t 2-- To Get Your Total:\n\n\tEnter Your Choice :");
		scanf("%d",&again);
		if(again==1)
		{
			printf("\n\n");
			vegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);
	
			details();
		}
	}
	else if(choice==4)
	{
		printf("Quantity :");
		scanf("%d",&quantity);
		total=total + 365*(quantity);
		printf(" \t\t\t1-- To Order Again :\n\t\t\t 2-- To Get Your Total:\n\n\tEnter Your Choice :");
		scanf("%d",&again);
		if(again==1)
		{
			printf("\n\n");
			vegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);
	
			details();
		}
	}
	else if(choice==5)
	{
		printf("Quantity :");
		scanf("%d",&quantity);
		total=total + 360*(quantity);
		printf(" \t\t\t1-- To Order Again :\n\t\t\t 2-- To Get Your Total:\n\n\tEnter Your Choice :");
		scanf("%d",&again);
		if(again==1)
		{
			printf("\n\n");
			vegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\nGrand Total : %d\n",totl);
			fclose(ttl);
		
			details();
		}
			
	}
	else if(choice==6)
	{
		system("cls");
		customer();
	}
	else
	{
		printf("Wrong Input! Re-enter THe Correct Option\n\n");
		if(getch())
		vegetarian();
	}
}
void nonvegetarian(void)
{
	int choice;
	int again;
	int quantity;
	double price=0;
	system("color 4F");
	printf("                                    **********************************************\n");
	printf("                                                  Non Veg. Pizza\n");
	printf("                                    **********************************************\n");
	char n;
	FILE *nmenu;
	nmenu = fopen("nonveg.txt","rt");
	while((n=getc(nmenu))!=EOF)
	{
		printf("%c",n);
	}
	printf("\n\nEnter What You Want :");
	printf("\n\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Quantity : ");
		scanf(" %d",&quantity);
		total=total + 335*(quantity);
		printf("\n");
		printf(" \t\t\t1-- To Order Again :\n\t\t\t 2-- To Get Your Total:\n\n\tEnter Your Choice :");
		scanf(" %d",&again);
		if(again==1)
		{
			printf("\n\n");
			nonvegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is :%.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\n\t\t\tGrand Total : %d\n",totl);
			fclose(ttl);
			details();
		}
	}
	else if(choice==2)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 305*(quantity);
		printf("\n");
		printf(" \t\t\t1-- To Order Again :\n\t\t\t 2-- To Get Your Total:\n\n\tEnter Your Choice :");
		scanf(" %d",&again);
		if(again==1)
		{
			printf("\n\n");
			nonvegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is :%.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\n\t\t\tGrand Total : %d\n",totl);
			fclose(ttl);
			details();
		}
	}
	else if(choice==3)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 570*(quantity);
		printf("\n");
		printf(" \t\t\t1-- To Order Again :\n\t\t\t 2-- To Get Your Total:\n\n\tEnter Your Choice :");
		scanf(" %d",&again);
		if(again==1)
		{
			printf("\n\n");
			nonvegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is :%.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\n\t\t\tGrand Total : %d\n",totl);
			fclose(ttl);
			details();
		}
	}
	else if(choice==4)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 570*(quantity);
		printf("\n");
		printf(" \t\t\t1-- To Order Again :\n\t\t\t 2-- To Get Your Total:\n\n\tEnter Your Choice :");
		scanf(" %d",&again);
		if(again==1)
		{
			printf("\n\n");
			nonvegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is :%.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\n\t\t\tGrand Total : %d\n",totl);
			fclose(ttl);
			details();
		}
	}
		else if(choice==5)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 560*(quantity);
		printf("\n");
		printf(" \t\t\t1-- To Order Again :\n\t\t\t 2-- To Get Your Total:\n\n\tEnter Your Choice :");
		scanf(" %d",&again);
		if(again==1)
		{
			printf("\n\n");
			nonvegetarian();
		}
		else if(again==2)
		{
			printf("Your Total Amount Is :%.2lf\n\n",total);
			int totl = total;
			FILE *ttl;
			ttl = fopen("order.txt","a");
			fprintf(ttl,"\n\t\t\tGrand Total : %d\n",totl);
			fclose(ttl);
			details();
		}
	}
	else if(choice==6)
	{
		system("cls");
		customer();
	}
	else
	{
		printf("Wrong Input! Re-enter THe Correct Option\n\n");
		nonvegetarian();
	}
}
void details(void)
{
	char name1[20];
	char name2[20];
	long long int phone;
	char address[40];
	printf("Please Give Your Contact Details \n");
	printf(" First Name : ");
	scanf("%s",name1);
	printf("Last Name : ");
	scanf("%s",name2);
	printf("Phone : ");
	scanf("%lld",&phone);
	printf("Address : ");
	scanf("%s",address);
	printf("\n\n");
	printf("Your Entered Details Are --->\n");
	FILE *cust;
	cust = fopen("order.txt","a");
	fprintf(cust,"Order Placed By : %s %s\nPhone number : %lld\n",name1,name2,phone);
	fclose(cust);
	printf("    -->First Name :  %s\n    -->Last Name   :  %s\n    -->Phone     :%lld \n    -->Address  :%s \n ",name1,name2,phone,address);
	printf("\n\n\n");
	printf("                       *********************************************************************************************\n");
	printf("                                             Your Order Will To Your Door Step In 30 minutes.\n");
	printf("                                                       .....Thanks For ORDERING.....\n");
	printf("                       *********************************************************************************************\n");
	
	printf("Press Any key for the MainMenu.");
	if(getch())
	customer();
}
void aboutus(void)
{
	system("cls");
	printf("PEOPLE FOR THIS PROJECT :\n\n   -->Monu Agrawal\n\n   -->Gaurang Bajaj\n\n  ");
	printf("Contact No:8572083082\n\n\t\tIf there are any complain plz call on this number\n\n****************************     THANK YOU    *****************************");
	printf("\n\n");
	printf("    Press Any Key To Go Back.");
	if(getch())
	mainmenu();
}


