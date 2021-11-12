#include<conio.h>
#include<stdio.h>
#include<setcolor.h>
#include<gotoxy.h>
#include<string.h>

void view_table();
void details();

int main()
{
	int ch;
	system("cls");
	gotoxy(45,0);
	fcolor(2);
	printf(":->PERIODIC TABLE<-:\n");
	gotoxy(45,1);
	printf("  ================");
	gotoxy(32,3);
	fcolor(6);
	printf("1). View Table\t\t2). Details about Element");
	gotoxy(51,5);
	fcolor(4);
	printf("3). Exit");
	gotoxy(46,8);
	fcolor(15);
	printf("Enter Your Choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		view_table();
		break;
	case 2:
		details();
		break;
	case 3:
		exit(0);
	default:
		gotoxy(48,13);
		printf("Invalid Choice!");
		gotoxy(43,15);
		printf("Press any key to continue");
		getch();
		system("cls");
		main();
		break;
	}
	getch();
}

void view_table()
{
	int i,j;
	char elements[118][3]={
		"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar",
		"K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br",
		"Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te",
		"I","Xe","Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm",
		"Yb","Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn",
		"Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr",
		"Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fl","Mc","Lv","Ts","Og"};
		system("cls");
		fcolor(6);
		gotoxy(10,5);
		for(i=0;i<=21;i++)
		{
			for(j=0;j<=108;j++)
			{
				if(i==0 && j==0)
				{
					gotoxy(10+j,5+i);
					printf("%c",218);
				}
				if(i==0 && j==108)
				{
					gotoxy(10+j,5+i);
					printf("%c",191);
				}
				if(i==21 && j==0)
				{
					gotoxy(10+j,5+i);
					printf("%c",192);
				}
				if(i==21 && j==108)
				{
					gotoxy(10+j,5+i);
					printf("%c",217);
				}
				if(i==0 && j>0 && j<108 && j%6==0)
				{
					gotoxy(10+j,5+i);
					printf("%c",194);
				}
				if(i==21 && j>0 && j<108 && j%6==0)
				{
					gotoxy(10+j,5+i);
					printf("%c",193);
				}
				if(j==0 && i>0 && i<21 && i%3==0)
				{
					gotoxy(10+j,5+i);
					printf("%c",195);
				}
				if(j==108 && i>0 && i<21 && i%3==0)
				{
					gotoxy(10+j,5+i);
					printf("%c",180);
				}
				if(j%6!=0 && i>=0 && i%3==0 && j<108)
				{
					gotoxy(10+j,5+i);
					printf("%c",196);
				}
				if(i%3!=0 && j>=0 && j%6==0 && i<21)
				{
					gotoxy(10+j,5+i);
					printf("%c",179);
				}
				if(i%3==0 && j%6==0 && i>0 && j>0 && i<21 && j<108)
				{
					gotoxy(10+j,5+i);
					printf("%c",197);
				}
			}
		}
		gotoxy(16,5);
		printf("%c",191);
		gotoxy(112,5);
		printf("%c",218);
		for(i=5;i<8;i++)
		{
			for(j=17;j<=111;j++)
			{
				gotoxy(j,i);
				printf(" ");
			}
		}
		gotoxy(22,8);
		printf("%c",191);
		gotoxy(82,8);
		printf("%c",218);
		for(i=8;i<14;i++)
		{
			for(j=23;j<=81;j++)
			{
				gotoxy(j,i);
				printf(" ");
			}
		}
		for(i=78;i<=96;i++)
		{
			if(i%6==0)
			{
				gotoxy(10+i,8);
				printf("%c",194);
			}
		}
		gotoxy(22,11);
		printf("%c",180);
		gotoxy(82,11);
		printf("%c",195);
		for(i=18;i<=70;i++)
		{
			if(i%6==0)
			{
				gotoxy(10+i,14);
				printf("%c",194);
			}
		}
		for(i=0;i<=6;i++)
		{
			for(j=0;j<=84;j++)
			{
				if(i==0 && j==0)
				{
					gotoxy(22+j,28+i);
					printf("%c",218);
				}
				if(i==0 && j==84)
				{
					gotoxy(22+j,28+i);
					printf("%c",191);
				}
				if(i==6 && j==0)
				{
					gotoxy(22+j,28+i);
					printf("%c",192);
				}
				if(i==6 && j==84)
				{
					gotoxy(22+j,28+i);
					printf("%c",217);
				}
				if(i==0 && j>0 && j<84 && j%6==0)
				{
					gotoxy(22+j,28+i);
					printf("%c",194);
				}
				if(i==6 && j>0 && j<84 && j%6==0)
				{
					gotoxy(22+j,28+i);
					printf("%c",193);
				}
				if(i>0 && i<6 && i%3==0 && j>0 && j<84 && j%6==0)
				{
					gotoxy(22+j,28+i);
					printf("%c",197);
				}
				if(j%6!=0 && i>=0 && i%3==0 && j<84)
				{
					gotoxy(22+j,28+i);
					printf("%c",196);
				}
				if(i%3!=0 && j>=0 && j%6==0 && i<6)
				{
					gotoxy(22+j,28+i);
					printf("%c",179);
				}
			}
		}
		gotoxy(22,31);
		printf("%c",195);
		gotoxy(106,31);
		printf("%c",180);

		gotoxy(12,6);
		printf("1.");
		gotoxy(12,7);
		printf("%s",elements[0]);
		gotoxy(114,6);
		printf("2.");
		gotoxy(114,7);
		printf("%s",elements[1]);
		for(i=0;i<2;i++)
		{
			gotoxy(12+6*i,9);
			printf("%d.",i+3);
			gotoxy(12+6*i,10);
			printf("%s",elements[2+i]);
		}
		for(i=0;i<6;i++)
		{
			gotoxy(84+6*i,9);
			printf("%d.",i+5);
			gotoxy(84+6*i,10);
			printf("%s",elements[4+i]);
		}
		for(i=0;i<2;i++)
		{
			gotoxy(12+6*i,12);
			printf("%d.",i+11);
			gotoxy(12+6*i,13);
			printf("%s",elements[10+i]);
		}
		for(i=0;i<6;i++)
		{
			gotoxy(84+6*i,12);
			printf("%d.",i+13);
			gotoxy(84+6*i,13);
			printf("%s",elements[12+i]);
		}
		for(i=0;i<18;i++)
		{
			gotoxy(12+6*i,15);
			printf("%d.",i+19);
			gotoxy(12+6*i,16);
			printf("%s",elements[i+18]);
		}
		for(i=0;i<18;i++)
		{
			gotoxy(12+6*i,18);
			printf("%d.",i+37);
			gotoxy(12+6*i,19);
			printf("%s",elements[i+36]);
		}
		for(i=0;i<3;i++)
		{
			gotoxy(12+6*i,21);
			printf("%d.",i+55);
			gotoxy(12+6*i,22);
			printf("%s",elements[54+i]);
		}
		for(i=0;i<15;i++)
		{
			gotoxy(30+6*i,21);
			printf("%d.",i+72);
			gotoxy(30+6*i,22);
			printf("%s",elements[i+71]);
		}
		for(i=0;i<3;i++)
		{
			gotoxy(12+6*i,24);
			printf("%d.",i+87);
			gotoxy(12+6*i,25);
			printf("%s",elements[86+i]);
		}
		for(i=0;i<15;i++)
		{
			gotoxy(30+6*i,24);
			printf("%d.",i+104);
			gotoxy(30+6*i,25);
			printf("%s",elements[i+103]);
		}
		for(i=0;i<14;i++)
		{
			gotoxy(24+6*i,29);
			printf("%d.",i+58);
			gotoxy(24+6*i,30);
			printf("%s",elements[i+57]);
		}
		for(i=0;i<14;i++)
		{
			gotoxy(24+6*i,32);
			printf("%d.",i+90);
			gotoxy(24+6*i,33);
			printf("%s",elements[i+89]);
		}
		for(i=1;i<=18;i++)
		{
			if(i==1 || i==18)
			{
				gotoxy(7+6*i,4);
				printf("%d",i);
			}
			if(i==2 || (i>12 && i<18))
			{
				gotoxy(7+6*i,7);
				printf("%d",i);
			}
			if(i>=3 && i<=12)
			{
				gotoxy(7+6*i,13);
				printf("%d",i);
			}
		}
		fcolor(7);
		gotoxy(29,35);
		printf(":Press 1 to go to menu 0 to get details about an element or 2 to exit: ");
		scanf("%d",&i);
		if(i!=0 && i!=1)
			exit(0);
		if(i==1)
			main();
		if(i==0)
			details();
}

void details()
{
	char str[15];
	int ch;
    typedef struct
    {
        char *name,*symbol,*SOM,*category,*EPS,*EC;
        int atmN;
		float atmM; 
    }element;
	element e;
	system("cls");
	gotoxy(30,5);
	fcolor(2);
	printf("Enter element Name, Atomic number or Symbol to get its details: ");
	scanf("%s",&str);
	if(stricmp(str,"1")==0 || stricmp(str,"H")==0 || stricmp(str,"Hydrogen")==0)
	{
		e.name="Hydrogen";
		e.symbol="H";
		e.SOM="GAS";
		e.category="Reactive NonMetal";
		e.EPS="1";
		e.EC="1s1";
		e.atmN=1;
		e.atmM=1.008;
	}
	if(stricmp(str,"2")==0 || stricmp(str,"He")==0 || stricmp(str,"Helium")==0)
	{
		e.name="Helium";
		e.symbol="He";
		e.SOM="GAS";
		e.category="Noble Gas";
		e.EPS="2";
		e.EC="1s2";
		e.atmN=2;
		e.atmM=4.002;
	}
	if(stricmp(str,"3")==0 || stricmp(str,"Li")==0 || stricmp(str,"Lithium")==0)
	{
		e.name="Lithium";
		e.symbol="li";
		e.SOM="SOLID";
		e.category="Alkali Metals";
		e.EPS="2 1";
		e.EC="[He] 2s1";
		e.atmN=3;
		e.atmM=6.94;
	}
	if(stricmp(str,"4")==0 || stricmp(str,"Be")==0 || stricmp(str,"Beryllium")==0)
	{
		e.name="Beryllium";
		e.symbol="Be";
		e.SOM="SOLID";
		e.category="Alkaline Earth Metal";
		e.EPS="2 2";
		e.EC="[He] 2s2";
		e.atmN=4;
		e.atmM=9.012;
	}
	if(stricmp(str,"5")==0 || stricmp(str,"B")==0 || stricmp(str,"Boron")==0)
	{
		e.name="Boron";
		e.symbol="B";
		e.SOM="SOLID";
		e.category="Metalloid";
		e.EPS="2 3";
		e.EC="[He] 2s2 2p1";
		e.atmN=5;
		e.atmM=10.81;
	}
	if(stricmp(str,"6")==0 || stricmp(str,"C")==0 || stricmp(str,"Carbon")==0)
	{
		e.name="Cabon";
		e.symbol="C";
		e.SOM="SOLID";
		e.category="Reactive NonMetal";
		e.EPS="2 4";
		e.EC="[He] 2s2 2p2";
		e.atmN=6;
		e.atmM=12.011;
	}
	if(stricmp(str,"7")==0 || stricmp(str,"N")==0 || stricmp(str,"Nitrogen")==0)
	{
		e.name="Nitrogen";
		e.symbol="N";
		e.SOM="GAS";
		e.category="Reactive NonMetal";
		e.EPS="2 5";
		e.EC="[He] 2s2 2p3";
		e.atmN=7;
		e.atmM=14.007;
	}
	if(stricmp(str,"8")==0 || stricmp(str,"O")==0 || stricmp(str,"Oxygen")==0)
	{
		e.name="Oxygen";
		e.symbol="O";
		e.SOM="GAS";
		e.category="Reactive NonMetal";
		e.EPS="2 6";
		e.EC="[He] 2s2 2p4";
		e.atmN=8;
		e.atmM=15.999;
	}
	if(stricmp(str,"9")==0 || stricmp(str,"F")==0 || stricmp(str,"Fluorine")==0)
	{
		e.name="Flourine";
		e.symbol="F";
		e.SOM="GAS";
		e.category="Reactive NonMetal";
		e.EPS="2 7";
		e.EC="[He] 2s2 2p5";
		e.atmN=9;
		e.atmM=18.998;
	}
	if(stricmp(str,"10")==0 || stricmp(str,"Ne")==0 || stricmp(str,"Neon")==0)
	{
		e.name="Neon";
		e.symbol="Ne";
		e.SOM="GAS";
		e.category="Noble Gas";
		e.EPS="2 8";
		e.EC="[He] 2s2 2p6";
		e.atmN=10;
		e.atmM=20.18;
	}
	if(stricmp(str,"11")==0 || stricmp(str,"Na")==0 || stricmp(str,"Sodium")==0)
	{
		e.name="Sodium";
		e.symbol="Na";
		e.SOM="SOLID";
		e.category="Alkali Metal";
		e.EPS="2 8 1";
		e.EC="[Ne] 3s1";
		e.atmN=11;
		e.atmM=22.989;
	}
	if(stricmp(str,"12")==0 || stricmp(str,"Mg")==0 || stricmp(str,"Magnesium")==0)
	{
		e.name="Magnesium";
		e.symbol="Mg";
		e.SOM="SOLID";
		e.category="Alkaline Earth Metal";
		e.EPS="2 8 2";
		e.EC="[Ne] 3s2";
		e.atmN=12;
		e.atmM=24.305;
	}
	if(stricmp(str,"13")==0 || stricmp(str,"Al")==0 || stricmp(str,"Aluminum")==0)
	{
		e.name="Aluminium";
		e.symbol="Al";
		e.SOM="SOLID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 3";
		e.EC="[Ne] 3s2 3p1";
		e.atmN=13;
		e.atmM=26.982;
	}
	if(stricmp(str,"14")==0 || stricmp(str,"Si")==0 || stricmp(str,"Silicon")==0)
	{
		e.name="Silicon";
		e.symbol="Si";
		e.SOM="SOLID";
		e.category="Metalloid";
		e.EPS="2 8 4";
		e.EC="[Ne] 3s2 3p2";
		e.atmN=14;
		e.atmM=28.085;
	}
	if(stricmp(str,"15")==0 || stricmp(str,"P")==0 || stricmp(str,"Phosphorus")==0)
	{
		e.name="Phosphorus";
		e.symbol="P";
		e.SOM="SOLID";
		e.category="Reactive NonMetal";
		e.EPS="2 8 5";
		e.EC="[Ne] 3s2 3p3";
		e.atmN=15;
		e.atmM=30.974;
	}
	if(stricmp(str,"16")==0 || stricmp(str,"S")==0 || stricmp(str,"Sulfur")==0)
	{
		e.name="Sulphur";
		e.symbol="S";
		e.SOM="SOLID";
		e.category="Reactive NonMetal";
		e.EPS="2 8 6";
		e.EC="[Ne] 3s2 3p4";
		e.atmN=16;
		e.atmM=32.06;
	}
	if(stricmp(str,"17")==0 || stricmp(str,"Cl")==0 || stricmp(str,"Chlorine")==0)
	{
		e.name="Chlorine";
		e.symbol="Cl";
		e.SOM="GAS";
		e.category="Reactive NonMetal";
		e.EPS="2 8 7";
		e.EC="[Ne] 3s2 3p5";
		e.atmN=17;
		e.atmM=35.45;
	}
	if(stricmp(str,"18")==0 || stricmp(str,"Ar")==0 || stricmp(str,"Argon")==0)
	{
		e.name="Argon";
		e.symbol="Ar";
		e.SOM="GAS";
		e.category="Noble Gas";
		e.EPS="2 8 8";
		e.EC="[Ne] 3s2 3p6";
		e.atmN=18;
		e.atmM=39.948;
	}
	if(stricmp(str,"19")==0 || stricmp(str,"K")==0 || stricmp(str,"Potassium")==0)
	{
		e.name="Potassium";
		e.symbol="K";
		e.SOM="SOLID";
		e.category="Alkali Metal";
		e.EPS="2 8 8 1";
		e.EC="[Ar] 4s1";
		e.atmN=19;
		e.atmM=39.098;
	}
	if(stricmp(str,"20")==0 || stricmp(str,"Ca")==0 || stricmp(str,"Calcium")==0)
	{
		e.name="Calcium";
		e.symbol="Ca";
		e.SOM="SOLID";
		e.category="Alkaline Earth Metal";
		e.EPS="2 8 8 2";
		e.EC="[Ar] 4s2";
		e.atmN=20;
		e.atmM=40.078;
	}
	if(stricmp(str,"21")==0 || stricmp(str,"Sc")==0 || stricmp(str,"Scandium")==0)
	{
		e.name="Scandium";
		e.symbol="Sc";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 9 2";
		e.EC="[Ar] 3d1 4s2";
		e.atmN=21;
		e.atmM=44.955;
	}
	if(stricmp(str,"22")==0 || stricmp(str,"Ti")==0 || stricmp(str,"Titanium")==0)
	{
		e.name="Titanium";
		e.symbol="Ti";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 10 2";
		e.EC="[Ar] 3d2 4s2";
		e.atmN=22;
		e.atmM=47.867;
	}
	if(stricmp(str,"23")==0 || stricmp(str,"V")==0 || stricmp(str,"Vanadium")==0)
	{
		e.name="Vanadium";
		e.symbol="V";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 11 2";
		e.EC="[Ar] 3d3 4s2";
		e.atmN=23;
		e.atmM=50.941;
	}
	if(stricmp(str,"24")==0 || stricmp(str,"Cr")==0 || stricmp(str,"Chromium")==0)
	{
		e.name="Chromium";
		e.symbol="Cr";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 13 1";
		e.EC="[Ar] 3d5 4s1";
		e.atmN=24;
		e.atmM=51.996;
	}
	if(stricmp(str,"25")==0 || stricmp(str,"Mn")==0 || stricmp(str,"Manganese")==0)
	{
		e.name="Manganese";
		e.symbol="Mn";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 13 2";
		e.EC="[Ar] 3d5 4s2";
		e.atmN=25;
		e.atmM=54.938;
	}
	if(stricmp(str,"26")==0 || stricmp(str,"Fe")==0 || stricmp(str,"Iron")==0)
	{
		e.name="Iron";
		e.symbol="Fe";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 14 2";
		e.EC="[Ar] 3d6 4s2";
		e.atmN=26;
		e.atmM=55.845;
	}
	if(stricmp(str,"27")==0 || stricmp(str,"Co")==0 || stricmp(str,"Cobalt")==0)
	{
		e.name="Cobalt";
		e.symbol="Co";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 15 2";
		e.EC="[Ar] 3d7 4s2";
		e.atmN=27;
		e.atmM=58.933;
	}
	if(stricmp(str,"28")==0 || stricmp(str,"Ni")==0 || stricmp(str,"Nickel")==0)
	{
		e.name="Nickel";
		e.symbol="Ni";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 16 2";
		e.EC="[Ar] 3d8 4s2";
		e.atmN=28;
		e.atmM=58.693;
	}
	if(stricmp(str,"29")==0 || stricmp(str,"Cu")==0 || stricmp(str,"Copper")==0)
	{
		e.name="Copper";
		e.symbol="Cu";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 1";
		e.EC="[Ar] 3d10 4s1";
		e.atmN=29;
		e.atmM=63.546;
	}
	if(stricmp(str,"30")==0 || stricmp(str,"Zn")==0 || stricmp(str,"Zinc")==0)
	{
		e.name="Zinc";
		e.symbol="Zn";
		e.SOM="SOLID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 2";
		e.EC="[Ar] 3d10 4s2";
		e.atmN=30;
		e.atmM=65.38;
	}
	if(stricmp(str,"31")==0 || stricmp(str,"Ga")==0 || stricmp(str,"Gallium")==0)
	{
		e.name="Gallium";
		e.symbol="Ga";
		e.SOM="SOLID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 3";
		e.EC="[Ar] 3d10 4s2 4p1";
		e.atmN=31;
		e.atmM=69.723;
	}
	if(stricmp(str,"32")==0 || stricmp(str,"Ge")==0 || stricmp(str,"Germanium")==0)
	{
		e.name="Germanium";
		e.symbol="Ge";
		e.SOM="SOLID";
		e.category="Metalloid";
		e.EPS="2 8 18 4";
		e.EC="[Ar] 3d10 4s2 4p2";
		e.atmN=32;
		e.atmM=72.63;
	}
	if(stricmp(str,"33")==0 || stricmp(str,"As")==0 || stricmp(str,"Arsenic")==0)
	{
		e.name="Arsenic";
		e.symbol="As";
		e.SOM="SOLID";
		e.category="Metalloid";
		e.EPS="2 8 18 5";
		e.EC="[Ar] 3d10 4s2 4p3";
		e.atmN=33;
		e.atmM=74.922;
	}
	if(stricmp(str,"34")==0 || stricmp(str,"Se")==0 || stricmp(str,"Selenium")==0)
	{
		e.name="Selenium";
		e.symbol="Se";
		e.SOM="SOLID";
		e.category="Reactive NonMetal";
		e.EPS="2 8 18 6";
		e.EC="[Ar] 3d10 4s2 4p4";
		e.atmN=34;
		e.atmM=78.971;
	}
	if(stricmp(str,"35")==0 || stricmp(str,"Br")==0 || stricmp(str,"Bromine")==0)
	{
		e.name="Bromine";
		e.symbol="Br";
		e.SOM="LIQUID";
		e.category="Reactive NonMetal";
		e.EPS="2 8 18 7";
		e.EC="[Ar] 3d10 4s2 4p5";
		e.atmN=35;
		e.atmM=79.904;
	}
	if(stricmp(str,"36")==0 || stricmp(str,"Kr")==0 || stricmp(str,"Krypton")==0)
	{
		e.name="Krypton";
		e.symbol="Kr";
		e.SOM="GAS";
		e.category="Noble Gas";
		e.EPS="2 8 18 8";
		e.EC="[Ar] 3d10 4s2 4p6";
		e.atmN=36;
		e.atmM=83.798;
	}
	if(stricmp(str,"37")==0 || stricmp(str,"Rb")==0 || stricmp(str,"Rubidium")==0)
	{
		e.name="Rubidium";
		e.symbol="Rb";
		e.SOM="SOLID";
		e.category="Alkali Metal";
		e.EPS="2 8 18 8 1";
		e.EC="[Kr] 5s1";
		e.atmN=37;
		e.atmM=85.467;
	}
	if(stricmp(str,"38")==0 || stricmp(str,"Sr")==0 || stricmp(str,"Strontium")==0)
	{
		e.name="Strontium";
		e.symbol="Sr";
		e.SOM="SOLID";
		e.category="Alkaline Earth Metal";
		e.EPS="2 8 18 8 2";
		e.EC="[Kr] 5s2";
		e.atmN=38;
		e.atmM=87.62;
	}
	if(stricmp(str,"39")==0 || stricmp(str,"Y")==0 || stricmp(str,"Yttrium")==0)
	{
		e.name="Yttrium";
		e.symbol="Y";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 9 2";
		e.EC="[Kr] 4d1 5s2";
		e.atmN=39;
		e.atmM=88.905;
	}
	if(stricmp(str,"40")==0 || stricmp(str,"Zr")==0 || stricmp(str,"Zirconium")==0)
	{
		e.name="Zirconium";
		e.symbol="Zr";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 10 2";
		e.EC="[Kr] 4d2 5s2";
		e.atmN=40;
		e.atmM=91.224;
	}
	if(stricmp(str,"41")==0 || stricmp(str,"Nb")==0 || stricmp(str,"Niobium")==0)
	{
		e.name="Niobium";
		e.symbol="Nb";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 12 1";
		e.EC="[Kr] 4d4 5s1";
		e.atmN=41;
		e.atmM=92.906;
	}
	if(stricmp(str,"42")==0 || stricmp(str,"Mo")==0 || stricmp(str,"Molybdenum")==0)
	{
		e.name="Molybdenum";
		e.symbol="Mo";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 13 1";
		e.EC="[Kr] 4d5 5s1";
		e.atmN=42;
		e.atmM=95.95;
	}
	if(stricmp(str,"43")==0 || stricmp(str,"Tc")==0 || stricmp(str,"Technetium")==0)
	{
		e.name="Technetium";
		e.symbol="Tc";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 13 2";
		e.EC="[Kr] 4d5 5s2";
		e.atmN=43;
		e.atmM=98;
	}
	if(stricmp(str,"44")==0 || stricmp(str,"Ru")==0 || stricmp(str,"Ruthenium")==0)
	{
		e.name="Ruthenium";
		e.symbol="Ru";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 15 1";
		e.EC="[Kr] 4d7 5s1";
		e.atmN=44;
		e.atmM=101.07;
	}
	if(stricmp(str,"45")==0 || stricmp(str,"Rh")==0 || stricmp(str,"Rhodium")==0)
	{
		e.name="Rhodium";
		e.symbol="Rh";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 16 1";
		e.EC="[Kr] 4d8 5s1";
		e.atmN=45;
		e.atmM=102.91;
	}
	if(stricmp(str,"46")==0 || stricmp(str,"Pd")==0 || stricmp(str,"Palladium")==0)
	{
		e.name="Palladium";
		e.symbol="Pd";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 18";
		e.EC="[Kr] 4d10";
		e.atmN=46;
		e.atmM=106.42;
	}
	if(stricmp(str,"47")==0 || stricmp(str,"Ag")==0 || stricmp(str,"Silver")==0)
	{
		e.name="Silver";
		e.symbol="Ag";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 18 1";
		e.EC="[Kr] 4d10 5s1";
		e.atmN=47;
		e.atmM=107.87;
	}
	if(stricmp(str,"48")==0 || stricmp(str,"Cd")==0 || stricmp(str,"Cadmium")==0)
	{
		e.name="Cadmium";
		e.symbol="Cd";
		e.SOM="SOLID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 18 2";
		e.EC="[Kr] 4d10 5s2";
		e.atmN=48;
		e.atmM=112.41;
	}
	if(stricmp(str,"49")==0 || stricmp(str,"In")==0 || stricmp(str,"Indium")==0)
	{
		e.name="Indium";
		e.symbol="In";
		e.SOM="SOLID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 18 3";
		e.EC="[Kr] 4d10 5s2 5p1";
		e.atmN=49;
		e.atmM=114.82;
	}
	if(stricmp(str,"50")==0 || stricmp(str,"Sn")==0 || stricmp(str,"Tin")==0)
	{
		e.name="Tin";
		e.symbol="Sn";
		e.SOM="SOLID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 18 4";
		e.EC="[Kr] 4d10 5s2 5p2";
		e.atmN=50;
		e.atmM=118.71;
	}
	if(stricmp(str,"51")==0 || stricmp(str,"Sb")==0 || stricmp(str,"Antimony")==0)
	{
		e.name="Antimony";
		e.symbol="Sb";
		e.SOM="SOLID";
		e.category="Metalloid";
		e.EPS="2 8 18 18 5";
		e.EC="[kr] 4d10 5s2 5p3";
		e.atmN=51;
		e.atmM=121.76;
	}
	if(stricmp(str,"52")==0 || stricmp(str,"Te")==0 || stricmp(str,"Tellurium")==0)
	{
		e.name="Tellurium";
		e.symbol="Te";
		e.SOM="SOLID";
		e.category="Metalloid";
		e.EPS="2 8 18 18 6";
		e.EC="[Ar] 4d10 5s2 5p4";
		e.atmN=33;
		e.atmM=74.922;
	}
	if(stricmp(str,"53")==0 || stricmp(str,"I")==0 || stricmp(str,"Iodine")==0)
	{
		e.name="Iodine";
		e.symbol="I";
		e.SOM="SOLID";
		e.category="Reactive NonMetal";
		e.EPS="2 8 18 18 7";
		e.EC="[Kr] 4d10 5s2 5p5";
		e.atmN=53;
		e.atmM=126.90;
	}
	if(stricmp(str,"54")==0 || stricmp(str,"Xe")==0 || stricmp(str,"Xenon")==0)
	{
		e.name="Xenon";
		e.symbol="Xe";
		e.SOM="GAS";
		e.category="Noble Gas";
		e.EPS="2 8 18 18 8";
		e.EC="[Kr] 4d10 5s2 5p6";
		e.atmN=54;
		e.atmM=131.29;
	}
	if(stricmp(str,"55")==0 || stricmp(str,"Cs")==0 || stricmp(str,"Cesium")==0)
	{
		e.name="Caesium";
		e.symbol="Cs";
		e.SOM="SOLID";
		e.category="Alkali Metal";
		e.EPS="2 8 18 18 8 1";
		e.EC="[Xe] 6s1";
		e.atmN=55;
		e.atmM=132.905;
	}
	if(stricmp(str,"56")==0 || stricmp(str,"Ba")==0 || stricmp(str,"Barium")==0)
	{
		e.name="Barium";
		e.symbol="Ba";
		e.SOM="SOLID";
		e.category="Alkaline Earth Metal";
		e.EPS="2 8 18 18 8 2";
		e.EC="[Xe] 6s2";
		e.atmN=56;
		e.atmM=137.327;
	}
	if(stricmp(str,"57")==0 || stricmp(str,"La")==0 || stricmp(str,"Lanthanum")==0)
	{
		e.name="Lanthanum";
		e.symbol="La";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 18 9 2";
		e.EC="[Xe] 5d1 6s2";
		e.atmN=57;
		e.atmM=138.91;
	}
	if(stricmp(str,"58")==0 || stricmp(str,"Ce")==0 || stricmp(str,"Cerium")==0)
	{
		e.name="Cerium";
		e.symbol="Ce";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 19 9 2";
		e.EC="[xe] 4f1 5d1 6s2";
		e.atmN=58;
		e.atmM=140.12;
	}
	if(stricmp(str,"59")==0 || stricmp(str,"Pr")==0 || stricmp(str,"Praseodymium")==0)
	{
		e.name="Praseodymium";
		e.symbol="Pr";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 21 8 2";
		e.EC="[xe] 4f3 6s2";
		e.atmN=59;
		e.atmM=140.91;
	}
	if(stricmp(str,"60")==0 || stricmp(str,"Nd")==0 || stricmp(str,"Neodymium")==0)
	{
		e.name="Neodymium";
		e.symbol="Nd";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 22 8 2";
		e.EC="[xe] 4f4 6s2";
		e.atmN=60;
		e.atmM=144.24;
	}
	if(stricmp(str,"61")==0 || stricmp(str,"Pm")==0 || stricmp(str,"Promethium")==0)
	{
		e.name="Promethium";
		e.symbol="Pm";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 23 8 2";
		e.EC="[xe] 4f5 6s2";
		e.atmN=61;
		e.atmM=145;
	}
	if(stricmp(str,"62")==0 || stricmp(str,"Sm")==0 || stricmp(str,"Samarium")==0)
	{
		e.name="Samarium";
		e.symbol="Sm";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 24 8 2";
		e.EC="[xe] 4f6 6s2";
		e.atmN=62;
		e.atmM=150.36;
	}
	if(stricmp(str,"63")==0 || stricmp(str,"Eu")==0 || stricmp(str,"Europium")==0)
	{
		e.name="Europium";
		e.symbol="Eu";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 25 8 2";
		e.EC="[xe] 4f7 6s2";
		e.atmN=63;
		e.atmM=151.96;
	}
	if(stricmp(str,"64")==0 || stricmp(str,"Gd")==0 || stricmp(str,"Gadolinium")==0)
	{
		e.name="Gadolinium";
		e.symbol="Gd";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 25 9 2";
		e.EC="[xe] 4f7 5d1 6s2";
		e.atmN=64;
		e.atmM=157.25;
	}
	if(stricmp(str,"65")==0 || stricmp(str,"Tb")==0 || stricmp(str,"Terbium")==0)
	{
		e.name="Terbium";
		e.symbol="Tb";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 27 8 2";
		e.EC="[xe] 4f9 6s2";
		e.atmN=65;
		e.atmM=158.93;
	}
	if(stricmp(str,"66")==0 || stricmp(str,"Dy")==0 || stricmp(str,"Dysprosium")==0)
	{
		e.name="Dysprosium";
		e.symbol="Dy";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 28 8 2";
		e.EC="[xe] 4f10 6s2";
		e.atmN=66;
		e.atmM=162.50;
	}
	if(stricmp(str,"67")==0 || stricmp(str,"Ho")==0 || stricmp(str,"Holmium")==0)
	{
		e.name="Holmium";
		e.symbol="Ho";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 29 8 2";
		e.EC="[xe] 4f11 6s2";
		e.atmN=67;
		e.atmM=164.93;
	}
	if(stricmp(str,"68")==0 || stricmp(str,"Er")==0 || stricmp(str,"Erbium")==0)
	{
		e.name="Erbium";
		e.symbol="Er";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 30 8 2";
		e.EC="[xe] 4f12 6s2";
		e.atmN=68;
		e.atmM=167.26;
	}
	if(stricmp(str,"69")==0 || stricmp(str,"Tm")==0 || stricmp(str,"Thulium")==0)
	{
		e.name="Thulium";
		e.symbol="Tm";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 31 8 2";
		e.EC="[xe] 4f13 6s2";
		e.atmN=69;
		e.atmM=168.93;
	}
	if(stricmp(str,"70")==0 || stricmp(str,"Yb")==0 || stricmp(str,"Ytterbium")==0)
	{
		e.name="Ytterbium";
		e.symbol="Yb";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 32 8 2";
		e.EC="[xe] 4f14 6s2";
		e.atmN=70;
		e.atmM=173.05;
	}
	if(stricmp(str,"71")==0 || stricmp(str,"Lu")==0 || stricmp(str,"Lutetium")==0)
	{
		e.name="Lutetium";
		e.symbol="Ho";
		e.SOM="SOLID";
		e.category="Lanthanides";
		e.EPS="2 8 18 32 9 2";
		e.EC="[xe] 4f14 5d1 6s2";
		e.atmN=71;
		e.atmM=174.97;
	}
	if(stricmp(str,"72")==0 || stricmp(str,"Hf")==0 || stricmp(str,"Hafnium")==0)
	{
		e.name="Hafnium";
		e.symbol="Hf";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 10 2";
		e.EC="[xe] 4f14 5d2 6s2";
		e.atmN=72;
		e.atmM=178.49;
	}
	if(stricmp(str,"73")==0 || stricmp(str,"Ta")==0 || stricmp(str,"Tantalum")==0)
	{
		e.name="Tantalum";
		e.symbol="Ta";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 11 2";
		e.EC="[xe] 4f14 5d3 6s2";
		e.atmN=73;
		e.atmM=180.947;
	}
	if(stricmp(str,"74")==0 || stricmp(str,"W")==0 || stricmp(str,"Tungsten")==0)
	{
		e.name="Tungsten";
		e.symbol="Ta";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 12 2";
		e.EC="[xe] 4f14 5d4 6s2";
		e.atmN=74;
		e.atmM=183.84;
	}
	if(stricmp(str,"75")==0 || stricmp(str,"Re")==0 || stricmp(str,"Rhenium")==0)
	{
		e.name="Rhenium";
		e.symbol="Re";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 13 2";
		e.EC="[xe] 4f14 5d5 6s2";
		e.atmN=75;
		e.atmM=186.21;
	}
	if(stricmp(str,"76")==0 || stricmp(str,"Os")==0 || stricmp(str,"Osmium")==0)
	{
		e.name="Osmium";
		e.symbol="Os";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 14 2";
		e.EC="[xe] 4f14 5d6 6s2";
		e.atmN=76;
		e.atmM=190.23;
	}
	if(stricmp(str,"77")==0 || stricmp(str,"Ir")==0 || stricmp(str,"Iridium")==0)
	{
		e.name="Iridium";
		e.symbol="Ir";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 15 2";
		e.EC="[xe] 4f14 5d7 6s2";
		e.atmN=77;
		e.atmM=192.22;
	}
	if(stricmp(str,"78")==0 || stricmp(str,"Pt")==0 || stricmp(str,"Platinum")==0)
	{
		e.name="Platinum";
		e.symbol="Pt";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 17 1";
		e.EC="[xe] 4f14 5d9 6s1";
		e.atmN=78;
		e.atmM=195.08;
	}
	if(stricmp(str,"79")==0 || stricmp(str,"Au")==0 || stricmp(str,"Gold")==0)
	{
		e.name="Gold";
		e.symbol="Au";
		e.SOM="SOLID";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 18 1";
		e.EC="[xe] 4f14 5d10 6s1";
		e.atmN=79;
		e.atmM=196.97;
	}
	if(stricmp(str,"80")==0 || stricmp(str,"Hg")==0 || stricmp(str,"Mercury")==0)
	{
		e.name="Mercury";
		e.symbol="Hg";
		e.SOM="LIQUID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 32 18 2";
		e.EC="[xe] 4f14 5d10 6s2";
		e.atmN=80;
		e.atmM=200.59;
	}
	if(stricmp(str,"81")==0 || stricmp(str,"Tl")==0 || stricmp(str,"Thallium")==0)
	{
		e.name="Thallium";
		e.symbol="Tl";
		e.SOM="SOLID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 32 18 3";
		e.EC="[xe] 4f14 5d10 6s2 6p1";
		e.atmN=81;
		e.atmM=204.38;
	}
	if(stricmp(str,"82")==0 || stricmp(str,"Pb")==0 || stricmp(str,"Lead")==0)
	{
		e.name="Lead";
		e.symbol="Pb";
		e.SOM="SOLID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 32 18 4";
		e.EC="[xe] 4f14 5d10 6s2 6p2";
		e.atmN=82;
		e.atmM=207.2;
	}
	if(stricmp(str,"83")==0 || stricmp(str,"Bi")==0 || stricmp(str,"Bismuth")==0)
	{
		e.name="Bismuth";
		e.symbol="Bi";
		e.SOM="SOLID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 32 18 5";
		e.EC="[xe] 4f14 5d10 6s2 6p3";
		e.atmN=83;
		e.atmM=208.98;
	}
	if(stricmp(str,"84")==0 || stricmp(str,"Po")==0 || stricmp(str,"Polonium")==0)
	{
		e.name="Polonium";
		e.symbol="Po";
		e.SOM="SOLID";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 32 18 6";
		e.EC="[xe] 4f14 5d10 6s2 6p4";
		e.atmN=84;
		e.atmM=209;
	}
	if(stricmp(str,"85")==0 || stricmp(str,"At")==0 || stricmp(str,"Astatine")==0)
	{
		e.name="Astatine";
		e.symbol="At";
		e.SOM="SOLID";
		e.category="Metalloid";
		e.EPS="2 8 18 32 18 7";
		e.EC="[Xe] 4f14 5d10 6s2 6p5";
		e.atmN=85;
		e.atmM=210;
	}
	if(stricmp(str,"86")==0 || stricmp(str,"Rn")==0 || stricmp(str,"Radon")==0)
	{
		e.name="Radon";
		e.symbol="Rn";
		e.SOM="GAS";
		e.category="Noble Gas";
		e.EPS="2 8 18 32 18 8";
		e.EC="[Xe] 4f14 5d10 6s2 6p6";
		e.atmN=86;
		e.atmM=222;
	}
	if(stricmp(str,"87")==0 || stricmp(str,"Fr")==0 || stricmp(str,"Francium")==0)
	{
		e.name="Francium";
		e.symbol="Fr";
		e.SOM="SOLID";
		e.category="Alkali Metal";
		e.EPS="2 8 18 32 18 8 1";
		e.EC="[Rn] 7s1";
		e.atmN=87;
		e.atmM=223;
	}
	if(stricmp(str,"88")==0 || stricmp(str,"Ra")==0 || stricmp(str,"Radium")==0)
	{
		e.name="Radium";
		e.symbol="Ra";
		e.SOM="SOLID";
		e.category="Alkaline Earth Metal";
		e.EPS="2 8 18 32 18 8 2";
		e.EC="[Rn] 7s2";
		e.atmN=88;
		e.atmM=226;
	}
	if(stricmp(str,"89")==0 || stricmp(str,"Ac")==0 || stricmp(str,"Actinium")==0)
	{
		e.name="Actinium";
		e.symbol="Ac";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 18 9 2";
		e.EC="[Rn] 6d1 7s2";
		e.atmN=89;
		e.atmM=227;
	}
	if(stricmp(str,"90")==0 || stricmp(str,"Th")==0 || stricmp(str,"Thorium")==0)
	{
		e.name="Thorium";
		e.symbol="Th";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 18 10 2";
		e.EC="[Rn] 6d2 7s2";
		e.atmN=90;
		e.atmM=232.04;
	}
	if(stricmp(str,"91")==0 || stricmp(str,"Pa")==0 || stricmp(str,"Protactinium")==0)
	{
		e.name="Protactinium";
		e.symbol="Pa";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 20 9 2";
		e.EC="[Rn] 5f2 6d1 7s2";
		e.atmN=91;
		e.atmM=231.04;
	}
	if(stricmp(str,"92")==0 || stricmp(str,"U")==0 || stricmp(str,"Uranium")==0)
	{
		e.name="Uranium";
		e.symbol="U";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 21 9 2";
		e.EC="[Rn] 5f3 6d1 7s2";
		e.atmN=92;
		e.atmM=238.03;
	}
	if(stricmp(str,"93")==0 || stricmp(str,"Np")==0 || stricmp(str,"Neptunium")==0)
	{
		e.name="Neptunium";
		e.symbol="Np";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 22 9 2";
		e.EC="[Rn] 5f4 6d1 7s2";
		e.atmN=93;
		e.atmM=237;
	}
	if(stricmp(str,"94")==0 || stricmp(str,"Pu")==0 || stricmp(str,"Plutonium")==0)
	{
		e.name="Plutonium";
		e.symbol="Pu";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 24 8 2";
		e.EC="[Rn] 5f6 7s2";
		e.atmN=94;
		e.atmM=244;
	}
	if(stricmp(str,"95")==0 || stricmp(str,"Am")==0 || stricmp(str,"Americium")==0)
	{
		e.name="Americium";
		e.symbol="Am";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 25 8 2";
		e.EC="[Rn] 5f7 7s2";
		e.atmN=95;
		e.atmM=243;
	}
	if(stricmp(str,"96")==0 || stricmp(str,"Cm")==0 || stricmp(str,"Curium")==0)
	{
		e.name="Curium";
		e.symbol="Cm";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 25 9 2";
		e.EC="[Rn] 5f7 6d1 7s2";
		e.atmN=96;
		e.atmM=247;
	}
	if(stricmp(str,"97")==0 || stricmp(str,"Bk")==0 || stricmp(str,"Berkelium")==0)
	{
		e.name="Berkelium";
		e.symbol="Bk";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 27 8 2";
		e.EC="[Rn] 5f9 7s2";
		e.atmN=97;
		e.atmM=247;
	}
	if(stricmp(str,"98")==0 || stricmp(str,"Cf")==0 || stricmp(str,"Californium")==0)
	{
		e.name="Californium";
		e.symbol="Cf";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 28 8 2";
		e.EC="[Rn] 5f10 7s2";
		e.atmN=98;
		e.atmM=251;
	}
	if(stricmp(str,"99")==0 || stricmp(str,"Es")==0 || stricmp(str,"Einsteinium")==0)
	{
		e.name="Einsteinium";
		e.symbol="Es";
		e.SOM="SOLID";
		e.category="Actinide";
		e.EPS="2 8 18 32 29 8 2";
		e.EC="[Rn] 5f11 7s2";
		e.atmN=99;
		e.atmM=252;
	}
	if(stricmp(str,"100")==0 || stricmp(str,"Fm")==0 || stricmp(str,"Fermium")==0)
	{
		e.name="Fermium";
		e.symbol="Fm";
		e.SOM="UNKNOWN";
		e.category="Actinide";
		e.EPS="2 8 18 32 30 8 2";
		e.EC="[Rn] 5f12 7s2";
		e.atmN=100;
		e.atmM=257;
	}
	if(stricmp(str,"101")==0 || stricmp(str,"Md")==0 || stricmp(str,"Mendelevium")==0)
	{
		e.name="Mendelevium";
		e.symbol="Md";
		e.SOM="UNKNOWN";
		e.category="Actinide";
		e.EPS="2 8 18 32 31 8 2";
		e.EC="[Rn] 5f13 7s2";
		e.atmN=101;
		e.atmM=258;
	}
	if(stricmp(str,"102")==0 || stricmp(str,"No")==0 || stricmp(str,"Nobelium")==0)
	{
		e.name="Nobelium";
		e.symbol="No";
		e.SOM="UNKNOWN";
		e.category="Actinide";
		e.EPS="2 8 18 32 32 8 2";
		e.EC="[Rn] 5f14 7s2";
		e.atmN=102;
		e.atmM=259;
	}
	if(stricmp(str,"103")==0 || stricmp(str,"Lr")==0 || stricmp(str,"Lawrencium")==0)
	{
		e.name="Lawrencium";
		e.symbol="Lr";
		e.SOM="UNKNOWN";
		e.category="Actinide";
		e.EPS="2 8 18 32 32 8 3";
		e.EC="[Rn] 5f14 7s2 7p1";
		e.atmN=103;
		e.atmM=266;
	}
	if(stricmp(str,"104")==0 || stricmp(str,"Rf")==0 || stricmp(str,"Rutherfordium")==0)
	{
		e.name="Rutherfordium";
		e.symbol="Rf";
		e.SOM="UNKNOWN";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 32 10 2";
		e.EC="[Rn] 5f14 6d2 7s2";
		e.atmN=104;
		e.atmM=267;
	}
	if(stricmp(str,"105")==0 || stricmp(str,"Db")==0 || stricmp(str,"Dubnium")==0)
	{
		e.name="Dubnium";
		e.symbol="Db";
		e.SOM="UNKNOWN";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 32 11 2";
		e.EC="[Rn] 5f14 6d3 7s2";
		e.atmN=105;
		e.atmM=268;
	}
	if(stricmp(str,"106")==0 || stricmp(str,"Sg")==0 || stricmp(str,"Seaborgium")==0)
	{
		e.name="Seaborgium";
		e.symbol="Sg";
		e.SOM="UNKNOWN";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 32 12 2";
		e.EC="[Rn] 5f14 6d4 7s2";
		e.atmN=106;
		e.atmM=269;
	}
	if(stricmp(str,"107")==0 || stricmp(str,"Bh")==0 || stricmp(str,"Bohrium")==0)
	{
		e.name="Bohrium";
		e.symbol="Bh";
		e.SOM="UNKNOWN";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 32 13 2";
		e.EC="[Rn] 5f14 6d5 7s2";
		e.atmN=107;
		e.atmM=270;
	}
	if(stricmp(str,"108")==0 || stricmp(str,"Hs")==0 || stricmp(str,"Hassium")==0)
	{
		e.name="Hassium";
		e.symbol="Hs";
		e.SOM="UNKNOWN";
		e.category="Transition Metal";
		e.EPS="2 8 18 32 32 14 2";
		e.EC="[Rn] 5f14 6d6 7s2";
		e.atmN=108;
		e.atmM=277;
	}
	if(stricmp(str,"109")==0 || stricmp(str,"Mt")==0 || stricmp(str,"Meitnerium")==0)
	{
		e.name="Meitnerium";
		e.symbol="Mt";
		e.SOM="UNKNOWN";
		e.category="Unknown Chemical Properties";
		e.EPS="2 8 18 32 32 15 2";
		e.EC="[Rn] 5f14 6d7 7s2";
		e.atmN=109;
		e.atmM=278;
	}
	if(stricmp(str,"110")==0 || stricmp(str,"Ds")==0 || stricmp(str,"Darmstadtium")==0)
	{
		e.name="Darmstadtium";
		e.symbol="Ds";
		e.SOM="UNKNOWN";
		e.category="Unknown Chemical Properties";
		e.EPS="2 8 18 32 32 17 1";
		e.EC="[Rn] 5f14 6d9 7s1";
		e.atmN=110;
		e.atmM=281;
	}
	if(stricmp(str,"111")==0 || stricmp(str,"Rg")==0 || stricmp(str,"Roentgenium")==0)
	{
		e.name="Roentgenium";
		e.symbol="Rg";
		e.SOM="UNKNOWN";
		e.category="Unknown Chemical Properties";
		e.EPS="2 8 18 32 32 18 1";
		e.EC="[Rn] 5f14 6d10 7s1";
		e.atmN=111;
		e.atmM=282;
	}
	if(stricmp(str,"112")==0 || stricmp(str,"Cn")==0 || stricmp(str,"Copernicium")==0)
	{
		e.name="Copernicium";
		e.symbol="Cn";
		e.SOM="UNKNOWN";
		e.category="Post-Transition Metal";
		e.EPS="2 8 18 32 32 18 2";
		e.EC="[Rn] 5f14 6d10 7s2";
		e.atmN=112;
		e.atmM=285;
	}
	if(stricmp(str,"113")==0 || stricmp(str,"Nh")==0 || stricmp(str,"Nihomium")==0)
	{
		e.name="Nihomium";
		e.symbol="Nh";
		e.SOM="UNKNOWN";
		e.category="Unknown Chemical Properties";
		e.EPS="2 8 18 32 32 18 3";
		e.EC="[Rn] 5f14 6d10 7s2 7p1";
		e.atmN=113;
		e.atmM=286;
	}
	if(stricmp(str,"114")==0 || stricmp(str,"Fl")==0 || stricmp(str,"Flerovium")==0)
	{
		e.name="Flerovium";
		e.symbol="Fl";
		e.SOM="UNKNOWN";
		e.category="Unknown Chemical Properties";
		e.EPS="2 8 18 32 32 18 4";
		e.EC="[Rn] 5f14 6d10 7s2 7p2";
		e.atmN=114;
		e.atmM=289;
	}
	if(stricmp(str,"115")==0 || stricmp(str,"Mc")==0 || stricmp(str,"Moscovium")==0)
	{
		e.name="Moscovium";
		e.symbol="Mc";
		e.SOM="UNKNOWN";
		e.category="Unknown Chemical Properties";
		e.EPS="2 8 18 32 32 18 5";
		e.EC="[Rn] 5f14 6d10 7s2 7p3";
		e.atmN=115;
		e.atmM=290;
	}
	if(stricmp(str,"116")==0 || stricmp(str,"Lv")==0 || stricmp(str,"Livermorium")==0)
	{
		e.name="Livermorium";
		e.symbol="Lv";
		e.SOM="UNKNOWN";
		e.category="Unknown Chemical Properties";
		e.EPS="2 8 18 32 32 18 6";
		e.EC="[Rn] 5f14 6d10 7s2 7p4";
		e.atmN=116;
		e.atmM=293;
	}
	if(stricmp(str,"117")==0 || stricmp(str,"Ts")==0 || stricmp(str,"Tennessine")==0)
	{
		e.name="Tennessine";
		e.symbol="Ts";
		e.SOM="UNKNOWN";
		e.category="Unknown Chemical Properties";
		e.EPS="2 8 18 32 32 18 7";
		e.EC="[Rn] 5f14 6d10 7s2 7p5";
		e.atmN=117;
		e.atmM=294;
	}
	if(stricmp(str,"118")==0 || stricmp(str,"Og")==0 || stricmp(str,"Oganesson")==0)
	{
		e.name="Oganesson";
		e.symbol="Og";
		e.SOM="UNKNOWN";
		e.category="Unknown Chemical Properties";
		e.EPS="2 8 18 32 32 18 8";
		e.EC="[Rn] 5f14 6d10 7s2 7p6";
		e.atmN=118;
		e.atmM=294;
	}
	if(e.atmN>=1 && e.atmN<=118)
	{
		fcolor(6);
		gotoxy(48,10);
		printf("Element name: %s\n",e.name);
		gotoxy(48,11);
		printf("Element Symbol: %s\n",e.symbol);
		gotoxy(48,12);
		printf("Atomic Number: %d\n",e.atmN);
		gotoxy(48,13);
		printf("Atomic Mass: %.3f\n",e.atmM);
		gotoxy(48,14);
		printf("State of matter: %s\n",e.SOM);
		gotoxy(48,15);
		printf("Element Category: %s\n",e.category);
		gotoxy(48,16);
		printf("Electrons per Shell: %s\n",e.EPS);
		gotoxy(48,17);
		printf("Electronic Configuration: %s\n",e.EC);
	}
	else
	{
		fcolor(4);
		gotoxy(55,10);
		printf("No Records found!");
	}
	gotoxy(40,20);
	fcolor(7);
	printf(":Press 1 to search again 0 to Menu or 2 to exit: ");
	scanf("%d",&ch);
	if(ch!=0 && ch!=1)
		exit(0);
	if(ch==1)
		details();
	if(ch==0)
		main();
}