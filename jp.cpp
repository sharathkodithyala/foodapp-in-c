#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define size 100
int stack[size];
int top =-1;
struct fod {
	char fooddata;
	char orderdata;
	struct fod *addresss;
};

struct add
{
	int pin,hno;
	char nm[20],st[20],ct[20],mdl[20],vi[20];
};
struct acc 
{
	char asn[20],an[20];
	long int mn;
	int pass,cpass;
 };
 struct htl
{
	char hn[30],pl[10],dist[10],st[10],hon[10],lm[10],it[20],fi[20];
	long int num,fip;
	int rs;
};
void rest();
void grillitems();
void gpayment(int);
void address();
void cod();
void upi();
void hotel();
void items();
void cd();
void fast();
void user();
void business();
void hotelnames();
void hoteldetails();
void addedhotels();

int main()
{int ub,bo;
char ch;

do{
	printf("choose type\n");
printf("\n1.user login\n2.business account\n");
scanf("%d",&ub);

switch(ub)
{
	case 1:
		{
		
		printf("you enterted user login");
		user();
		break;
		}
		case 2:
			{
				printf("business login\n");
				printf("choose your option ");
				printf("\n1.add hotel\n 2.hotel names\n3.hotel details");
				scanf("%d",&bo);   //bo=business option selection
				switch(bo)
				{
					case 1:
						{
							business();
							break;
						}
						case 2:
							{
								hotelnames();
								break;
							}
							case 3:
								{
									hoteldetails();
									break;
								}
				}
		break;
			}
			
	}	
printf("are intrested to login again?y/n");
scanf("\n%c",&ch);
}while(ch=='y');
}
void user()
{
	int st,ac,mno,ppass,pa;
	char ch,cha;
	FILE *s,*x;
	struct acc ad;
	printf("\n\t\t***welcome to DABBA APP  ***\n");
	do{
	
	printf("\n1.create accont\n2.account login\n3.accounts availble");
	scanf("%d",&ac);
	switch(ac)
	{
		case 1:
			{
				x=fopen("accdet.txt","a");
				printf("\nCREATE YOUR ACCONT");
				printf("enter your name");
				scanf("%s",&ad.asn);
				printf("enter your name");
				scanf("%s",&ad.an);
				printf("enter mobile number");
				scanf("%ld",&ad.mn);
				printf("keep password");
				scanf("%d",&ad.pass);
				printf("enter confirm password");
				scanf("%d",&ad.cpass);
				if(ad.pass==ad.cpass)
				{
				//x=fopen("accdet","a");
				fprintf(x,"%s %s %ld %d %d",ad.asn,ad.an,ad.mn,ad.mn,ad.pass,ad.cpass);
				fclose(x);
				}
				else
				{
				printf("password does not matched recreate your account");
				}
				break;
			}
			case 2:
				{
					printf("enter your mobile number");
					scanf("%d",&mno);
					printf("enter your password");
					scanf("%d",&ppass);
					x=fopen("accdet.txt","r");
					while((ch=fgetc(x))!=EOF)
					{
					
					fseek(x,-1,SEEK_CUR);
					fscanf(x,"%s %s %ld %d %d",ad.asn,ad.an,&ad.mn,&ad.pass,&ad.cpass);
					if(ad.mn==mno&&ad.cpass==ppass)
					
				{
					printf("%s\n%ld",ad.asn,ad.mn);
	do{
		
	printf("select your type\n");
	printf("1.restaurent\n2.hotels\n3.fastfood(local)\n4.added hotels");
	scanf("%d",&st);
	switch(st)
	{
		case 1:
			{
				rest();
			}
			break;
			case 2:
				{
					hotel();	
				}
				break;
		case 3:
		{
	fast();
	break;
				}
				case 4:
					{
						addedhotels();	
					}
						
	}
	
	printf("do u want to continue again?y/n");
	scanf("\n%c",&ch);
}while(ch=='y');
}


}
printf("enter the correct details");
break;
case 3:
	{
	printf("accounts available");
	x=fopen("accdet.txt","r");
	while((ch=fgetc(x))!=EOF)
	{
		fseek(x,-1,SEEK_CUR);
		fscanf(x,"%s %s %d %d %d",ad.asn,ad.an,&ad.mn,&ad.pass,&ad.cpass);
		printf("\nfull name :%s%s\n mobile number:%d\n\n",ad.asn,ad.an,ad.mn);
	}
	fclose(x);
	break;
	}
}
}printf("are you want login?s/n");
scanf("\n%c",&cha);
}while(cha=='s');
printf("\n\tthank you");
}








void rest()
{
	int rt;
	printf("\n\t\tavailble restrents");
	printf("\n1.balaji\n2.panjabi\n3.radha");
	scanf("%d",&rt);
	switch(rt)
	{
			case 1:
			{
				printf("\n\t\tselected balaji");
			}
			break;
			case 2:
				{
					printf("slected pajabi restaurent");
					
				}
				break;
			case 3:
				{
				printf("selected radha restaurent");	
				}
				break;		
   }
}
void hotel()
{
		int ht,po;
		printf("\n\t\tavailable hotels\n");
		printf("\n1.grill9\n2.parampara\n3.paradise\n");
		scanf("%d",&ht);
		switch(ht)
		{
			case 1:
			{
			printf("slected grill9\n");
			items();
			grillitems();
			break;
			}
			case 2:
			{
			printf("selected parampara");
			items();
			break;
			}
			case 3:
			{
			printf("selected paradise");
			items();
			printf("select your food item");
			address();
		printf("\nselect your payment method\n");
		printf("\n1.cash on delivey\n2.upi\n3.credit/debit card");
		scanf("%d",&po);
		switch(po)
		{
			case 1:
				{
				cod();
				break;
				}
			case 2:
				{
					upi();
					break;
				}
			case 3:
			{
				cd();
				break;
			}
		}
				
			}	
		}
}





void items()
{
	int it;
	printf("items availble");
	printf("\n1.veg biryani-rs:150\n2.paneer birayni-rs:190\n3.chicken biryani-rs:180\n4.machuriya-rs:160");
	printf("select your food item");
	
	
}
void grillitems()
{
	int it;
	printf("\n5.special dum biryani-420\n6.chiken mandi-rs:720");
	scanf("%d",&it);
	gpayment(it);
}
void gpayment(int ite)
{
	int tb,gst,po;
	switch(ite)
	{
		printf("your totel billing amountis:");
		printf("item price + 20per.gston item+10per.servicetax");
		
		case 1:
		{
			printf("tb=veg biryani+20per.gst+10per.service tax");
			printf("185");
			break;
		}
		case 2:
			{
				printf("tb=paneer biryani+20per.gst+10per.service tax");
				printf("190+38+19=rs-247");
				break;
			}
		case 3:
			{
			
			printf("total bill=chicken biryani+20per.gst+10.service tax");
			printf("180+36+18=rs-234");
			break;
		}
	}
		
		address();
		printf("\nselect your payment method\n");
		printf("\n1.cash on delivey\n2.upi\n3.credit/debit card");
		scanf("%d",&po);
		switch(po)
		{
			case 1:
				{
				cod();
				break;
				}
			case 2:
				{
					upi();
					break;
				}
			case 3:
			{
				cd();
				break;
			}
		}			
}

void cod()
{
		printf("\n\t\tyou have selected cash on delivery your item will be deliverd in 15 mins\n");
		printf("your item is ready to deliver \n please keep the amount ready");
		printf("your item is deliverd");
}




void upi()
{
	long int p;
	float bamo;
	int pin,pa;
	printf("\nupi payment");
	printf("\nenter mobile number @ybl");
	scanf("%ld",&p);
	printf("\nenter bill  amount");
	scanf("%f",&bamo);
	printf("\nare you want proceed payment option\n");
printf("\n1.phonepe\n2.google pay\n3.paytm");
scanf("%ld",&pa);

switch(pa)
{
	case 1:
		{
			printf("selected phone pay");
			printf("enter upi pin");
			scanf("%d",&pin);
			if(pin==1234)
			{
				printf("\ntransactoin successful %f amount as been debited from your bank account",bamo);
				printf("your item will be deliverd");
			}
			else
			{
				printf("entered pin number is wrong\n your oreder as been cancelled");
			}
			
			break;
		}
		case 2:
			{
			
			printf("selected google pay");
			printf("enter upi pin");
			scanf("%d",&pin);
			if(pin==1234)
			{
				printf("\ntransactoin successful %f amount as been debited from your bank account",bamo);
			}
			else
			{
				printf("entered pin number is wrong\n your oreder as been cancelled");
			}
			
			break;
		}
		case 3:
			{
			
			printf("selected paytm pay");
			printf("enter upi pin");
			scanf("%d",&pin);
			if(pin==1234)
			{
				printf("\ntransactoin successful %f amount as been debited from your paytm linked bank account",bamo);
			}
			else
			{
				printf("entered pin number is wrong\n your oreder as been cancelled");
			}
			
			break;
		}
			
}
	
}


void cd()
{
	char na[20];
	int cvv;
	float ba;
	long int cn;
	printf("\nenter card holder name\n");
	scanf("%s",&na);
	printf("\nenter card number\n");
	scanf("%ld",&cn);
	printf("\nenter card cvv number\n");
	scanf("%d",&cvv);
	printf("\nenter the bill amount \n");
	scanf("%f",&ba);
	printf("\nenter the otp recived to number link to bank\n");
	scanf("enter otp");
	int num1,num2;
	srand(time(NULL));
	rand();
	num1=rand();
	printf("%d\n",num1);
	printf("\n enter the otp");
	scanf("%d",&num2);
	if(num1==num2)
	{	
	printf("\ntransaction is succussful %f bill amount is debited from your bank accont\n",ba);
}
}
void address()
{
	struct add a;
	printf("\nenter your address");
	printf("\nenter your state\n");
	scanf("%s",&a.st);
	printf("\nenter your dist \n");
	scanf("%s",&a.ct);
	printf("\nenter mdl\n");
	scanf("%s",&a.mdl);
	printf("enter your village ");
	scanf("%s",&a.vi);
	printf("\nenter your pin code\n");
	scanf("%d",&a.pin);
	printf("enter your house number");
	scanf("%d",&a.hno);
	printf("\nstate:%s\ndisrict:%s\nmandal:%s\npincode:%d\nhouse no:%d\n",a.st,a.ct,a.mdl,a.hno,a.pin);
	printf("\nslectef item will be delivered to above address\n");	
}




void fast()
{
	int fi,po;
	printf("select your fast food item");
	printf("\n1.egg freid rice-50\n2.noodles-50\n3.egg noodles-60\n4.chicken freid rice-70\n5.chicken noodles\n6.gobi rice-65");
	scanf("%d",&fi);
	switch(fi)
	{
		case 1:
				{
					printf("egg rice cost is 50\n");
			
				}
		break;
		case 2:
				{
					printf("noodles cost is 50\n");				
				}
			break;
		case 3:
				{
					printf("egg noodles cost is 60\n");
				}
			break;
			case 4:
				{
					printf("chicken fried rice cost is 70\n");
				}
			break;
			case 5:
				{
					printf("chicken noodles cost is 65\n");
				}
			break;
			case 6:
				{
					printf("gobi rice cost is 65\n");
				}
			break;		
	}
	printf("select your payment method");
	printf("\n1.cash on delivery\n2.upi\n3.credit or debit card\n");
	scanf("%d",&po);
	switch(po)
	{
		case 1:
			cod();
			break;
			case 2:
				upi();
				break;
				case 3:
					cd();
					break;
	}	
}
void business()
{
	printf("\nhere it will dispaly about business account details ");
char ch;
	char hname[20];
	long int hnum;
 FILE *n,*h,*b;
 struct htl ht;
{
	h=fopen("htldet.txt","a");
	n=fopen("hotelnames","a");
	do{
	printf("enter the hotel details");
	printf("enter hotel name:\n");
	scanf("%s",&ht.hn);
	printf("enter the address");
	printf("enter hotel district");
	scanf("%s",&ht.dist);
	printf("enter state");
	scanf("%s",&ht.st);
	printf("enter your place");
	scanf("%s",&ht.pl);
	printf("enter land mark");
	scanf("%s",&ht.lm);
	printf("enter owner name");
	scanf("%s",&ht.hon);
	printf("hotel managager number");
	scanf("%ld",&ht.num);
	fprintf(n,"%s\n",ht.hn);
	fprintf(h,"%s %s %s %s %s %s %ld",ht.hn,ht.st,ht.dist,ht.pl,ht.lm,ht.hon,ht.num);
	printf("enter the data in the file");
	strcat(ht.hn,"txt");
	fclose(h);
	fclose(n);
	b=fopen(ht.hn,"w");
//		while((ch=getchar())!=EOF)
//	{
//		fputc(ch,b);
//	}
	//create a new file for every hotel food item -prices items to be displayed
printf( "do u want to add another hotel?y/n");
scanf("\n%c",&ch);
fclose(b);

}while(ch=='y');
}
}
void hotelnames()
{
struct htl ht;
	char ch,nme[20],fi[20];
	int fip;
	
	FILE *b,*o;
	printf("hotel names are..");
	b=fopen("hotelnames","r");
	while((ch=fgetc(b))!=EOF)
	{
	fseek(b,-1,SEEK_CUR);
	fscanf(b," %s",ht.hn);
	{
		printf(" %s\n",ht.hn);
	}
}
fclose(b);
printf("enter your hotel name");
scanf("%s",nme);//hotel name

b=fopen("hotelnames","r");
	while((ch=fgetc(b))!=EOF)
	{
	
	fseek(b,-1,SEEK_CUR);
	fscanf(b," %s",ht.hn);

//o=fopen(nme,"a");
if(strcmp(ht.hn,nme)==0)
{
printf("enter the data into file");
o=fopen(nme,"a+");
do{
	printf("enter food item");
	scanf("%s",&fi);
	printf("\nenter the food item price");
	scanf("%d",&fip);
	fprintf(o,"%s %d",fi,fip);
printf("are u want to add another item?y/n");
scanf("\n%c",&ch);
}while(ch=='y');
fclose(o);
}
}
//	while((ch=fgetchar())!=EOF)
//	{
//		fputc(ch,o);
//	}
//	{
//	}
//		printf("%c",ch);
}
void hoteldetails()
{
	struct htl ht;
	char ch;
	FILE *k;
	printf("hotel detsils are\n");
	k=fopen("htldet.txt","r");
	while((ch=fgetc(k))!=EOF)
	
	{     
			  fseek(k,-1,SEEK_CUR);
			fscanf(k,"%s %s %s %s %s %s %ld",ht.hn,ht.st,ht.dist,ht.pl,ht.lm,ht.hon,&ht.num);
			printf("hotelname:%s \nstate:%s \ndistrict:%s\n place:%s \nland mark:%s \nhotel owner name:%s hotel owner number %ld\n\n\n\n",ht.hn,ht.st,ht.dist,ht.pl,ht.lm,ht.hon,ht.num);
				
   	}		
}
void addedhotels()
{
	struct htl ht;
	FILE *k,*o;
	char fit[20],on[20],ch;//otel name
	int fitp,opt;
	printf("enter hotel name");
	scanf("%s",&on);
	o=fopen(on,"r");
	k=fopen("htldet.txt","r");
	while((ch=fgetc(k))!=EOF)
	{
		fseek(k,-1,SEEK_CUR);
		fscanf(k,"%s %s %s %s %s %s %ld",ht.hn,ht.st,ht.dist,ht.pl,ht.lm,ht.hon,&ht.num);
		if(strcmp(ht.hn,on)==0)
		{
			
			while((ch=fgetc(o))!=EOF)
			{
				fseek(o,-1,SEEK_CUR);
				fscanf(o,"%s %d",ht.fi,&ht.fip);
				
				printf("item is-%s & price is-%d\n",ht.fi,ht.fip);
			}
		}
	}
	fclose(k);
	fclose(o);
	o=fopen(on,"r");
				printf("select your your food item");
				scanf("%s",&fit);
				printf("enter price");
				scanf("%d",&fitp);	
			while((ch=fgetc(o))!=EOF)
			{
				fseek(o,-1,SEEK_CUR);
				fscanf(o,"%s %d",ht.fi,&ht.fip);
				printf("\n");
				if(ht.fip==fitp)
				
				{
					printf("\nenter your address\n");
					address();
				
				printf("select payment option\n");
				printf("\n1.cod\n2.upi\n3.cd\n");
				scanf("%d",&opt);
				switch(opt)
				{
					case 1: 
					{
						cod();
						break;
					}
					case 2:
						{
							upi();
							break;
						}
					case 3:
						{
							cd();
							break;
					}
				}
			}
			}
			fclose(o);	
}
