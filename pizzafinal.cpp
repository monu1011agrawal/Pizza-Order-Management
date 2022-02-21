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
void details(int);
void aboutus(void);
void admin(void);
int getdata();

struct details{
		struct details *prev;
		struct details *next;
		char name[20];
		char phone[20];
		char city[40];
		int total;
		int emp;
}emp;
struct details *start=NULL;
struct details *latest=NULL;
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
	printf("    *******************************************************************************************************************\n");
	printf("                                                      PIZZA ORDER AND MANAGEMENT SYSTEM\n");
	printf("    *******************************************************************************************************************\n\n\n");
	printf("          1.For Administrative-->\n\n\n\n          2. CUSTOMER SECTION--> \n\n\n\n          3. ABOUT US--> \n\n\n\n          4. Exit--> \n\n\n\n\n             Enter Your Choice --->");
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		system("cls");
			printf("                             ****************************************\n                                         Orders\n                            ****************************************\n\n");
	admin();
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
	system("color 5F");
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
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
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
			details(totl);
		}
	}
	else if(choice==2)
	{
		printf("Quantity :");
		scanf("%d",&quantity);
		total=total + 395*(quantity);
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
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
	
			details(totl);
		}
	}
	else if(choice==3)
	{
		printf("Quantity :  ");
		scanf("%d",&quantity);
		total=total + 395*(quantity);
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
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
	
			details(totl);
		}
	}
	else if(choice==4)
	{
		printf("Quantity :");
		scanf("%d",&quantity);
		total=total + 365*(quantity);
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
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
	
			details(totl);
		}
	}
	else if(choice==5)
	{
		printf("Quantity :");
		scanf("%d",&quantity);
		total=total + 360*(quantity);
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
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
		
			details(totl);
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
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
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
			details(totl);
		}
	}
	else if(choice==2)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 305*(quantity);
		printf("\n");
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
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
			details(totl);
		}
	}
	else if(choice==3)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 570*(quantity);
		printf("\n");
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
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
			details(totl);
		}
	}
	else if(choice==4)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 570*(quantity);
		printf("\n");
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
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
			details(totl);
		}
	}
		else if(choice==5)
	{
		printf("Quantity :");
		scanf(" %d",&quantity);
		total=total + 560*(quantity);
		printf("\n");
		printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
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
			details(totl);
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

char empname[20];
void getEmpName(int n){
	FILE *fp;
	char ch[128];
	char temp[128];
	fp=fopen("EmpNames.txt","r");
	for(int i=0;i<n-1;i++){
		fgets(temp,128,fp);
	}
	fgets(ch,128,fp);
	for(int i=0;i<20;i++){
		empname[i]=ch[i];
	}
}
void displayOrder(struct details *t){
	getEmpName(t->emp);
	printf("NAME : %s\nPhone Number : %s \nEmployee In-Charge : %sCity : %s\n\n\n",t->name,t->phone,empname,t->city);//completeeeeee
	printf("Press any key");
	if(getch())
		mainmenu();
}
void insert(struct details *t,struct details *p,int n){//aryan
	if(start==NULL){
		start=p;
	}
	else if(t->total<n && t->next==NULL){
		t->next=p;
		p->prev=t;
	}
	else if(t->total>n && t->prev==NULL){
		t->prev=p;
		p->next=t;
	}
	else if(t->total<n && t->next->total>n){
		struct details *ex=t->next;
		t->next=p;
		p->prev=t;
		ex->prev=p;
		p->next=ex;
	}
	else{
		insert(t->next,p,n);
	}
}
void details1(int n){//aryan
	struct details *ptr;
	struct details *temp=start;
	printf("Name : ");
	scanf("%s",ptr->name);
	printf("Phone number : ");
	scanf("%lld",ptr->phone);
	printf("City : ");
	scanf("%s",ptr->city);
	printf("Employee ID : ");
	scanf("%d",ptr->emp);
	ptr->total=n;
	latest=ptr;
	insert(temp,ptr,n);
}
void details(int n)
{
	struct details *ptr;
	struct details *temp=start;
	printf("\nName : ");
	scanf("%s",ptr->name);
	printf("\nPhone number : ");
	scanf("%s",ptr->phone);
	fflush(stdout);
	printf("\nEmployee ID :");
	int c;
	scanf("%d",&c);
	ptr->emp=c;
	fflush(stdout);
	printf("\nCity : ");
	scanf("%s[^\n]",ptr->city);
	printf("\nThank You\n");
	ptr->total=n;
	latest=ptr;
	insert(temp,ptr,n);
	printf("\n\n\n");
	printf("                       *********************************************************************************************\n");
	printf("                                             Your Order Will To Your Door Step In 30 minutes.\n");
	printf("                                                       .....Thanks For ORDERING.....\n");
	printf("                       *********************************************************************************************\n");
	
printf("Your Order details : \n");	
	displayOrder(ptr);
}

void admin(void)
{
	printf("MENU\n");
	printf("1.Largest Order\n");
	printf("2.Latest Order\n");
	printf("3.Search order by name\n");
	printf("4.Display all orders\n");
	printf("5.Employees display\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
			struct details *temp;
		case 1:
			temp=start;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			if(temp!=NULL){
			displayOrder(temp);
			}
			else{
				printf("No orders have been placed yet");
			}
			break;
		case 2:
			if(latest!=NULL){
			displayOrder(latest);
			}
			else{
				printf("No orders have been placed yet");
			}
			break;
		case 3:
		{
		
			temp=start;
			if(temp==NULL){
				printf("No orders yet");
				break;
			}
			char tt[20];
			printf("Enter name : ");
			scanf("%s",&tt);
			int valid=0;
			do{
					if(strcmp(tt,temp->name)==0){
						displayOrder(temp);
						valid=1;
					}
				temp=temp->next;
			}
			while(temp->next!=NULL);
			if(valid==0){
				printf("Sorry not found");
			}
			break;
	}
	
		case 4:
			{
			
			temp=start;
			if(temp==NULL){
				printf("No orders placed yet");
				break;
			}
			do{
				displayOrder(temp);
			}
			while(temp->next!=NULL);
			break;
		}
		case 5:
			for(int i=1;i<=10;i++){
				getEmpName(i);
				printf("%s",empname);
			}
			printf("Press any key");
			if(getch())
				mainmenu();
			break;
		default:
			printf("Invalid choice");

	}
}
void aboutus(void)
{
	system("cls");
	printf("PEOPLE FOR THIS PROJECT :\n\n   -->Aryan Todi\n\n   -->Ayush Rungta\n\n  ");
	printf("\n\n****************************THANK YOU*****************************");
	printf("\n\n");
	printf("    Press Any Key To Go Back.");
	if(getch())
	mainmenu();
}

