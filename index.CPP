	/*PROGRAM NAME:PM SERVICE PROVIDER
	  MADE BY     :PRIYANK MAKWANA
	  CLASS       :XII SCIENCE D*/
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
float tot_amt;  //GLOBAL VARIABLES
unsigned long int mobile2=0,mobile12=0,mobile=0,mobile1=0;
int god,ctry2=0, ctry=0;
char y_n,c_n[20],ct_n[20],xxy,xxyy, y_n1,c_n2[20],ct_n2[20];
//FUNCTION DECLARATION
void page_one();
void page();
void func_two();
void func_one();
void call_block();
void call_divert();
void std();
void exit1();

void page_one()      //ACKNOWLEDGEMENT PAGE
 {
  clrscr();
  cout<<"\n ";
  cout<<"\n 		       						              ";
  cout<<"\n                    MAHARANA MEWAR PUBLIC SCHOOL                             ";
  cout<<"\n 								              ";
  cout<<"\n                    COMPUTER PROJECT                                         ";
  cout<<"\n 								              ";
  cout<<"\n                    TOPIC: PM SERVICE PROVIDER                               ";
  cout<<"\n 								              ";
  cout<<"\n                                 SUBMITTED BY:                               ";
  cout<<"\n                                                PRIYANK MAKWANA              ";
  cout<<"\n                                                MEHUL KUMAWAT                ";
  cout<<"\n 								              ";
  cout<<"\n ";
  getch();
 }

void page()  //DISPLAY PAGE
 {
  clrscr();
cout<<"\n\n  "<<endl;
cout<<"  	               		       	                                    "<<endl;
cout<<"  	                     $$$$$$$   $$$    $$$                           "<<endl;
cout<<"                            $$    $   $$ $  $ $$                           "<<endl;
cout<<"                            $$$$$$$   $$  $$  $$                           "<<endl;
cout<<"                            $$        $$      $$                           "<<endl;
cout<<"                            $$        $$      $$                           "<<endl;
cout<<"  							       	            "<<endl;
cout<<"      SSSSSSS   EEEEEEE   RRRRRRR   VV      VV   II    CCCCC   EEEEEEE     "<<endl;
cout<<"      SS        EE        RR   RR   VV      VV   II   C        EE          "<<endl;
cout<<"      SSSSSSS   EEEEE     RRRRRRR    VV    VV    II   C        EEEEE       "<<endl;
cout<<"           SS   EE        RR RR       VV  VV     II   C        EE          "<<endl;
cout<<"      SSSSSSS   EEEEEEE   RR   RR       VV       II    CCCCC   EEEEEEE     "<<endl;
cout<<"  							                    "<<endl;
cout<<"     PPPPPPP  RRRRRRR   OOOOO   VV      VV  II  DDDDDD   EEEEEEE  RRRRRR   "<<endl;
cout<<"     PP   PP  RR   RR  OO   OO  VV      VV  II  DD   DD  EE       RR  RR   "<<endl;
cout<<"     PPPPPPP  RRRRRRR  OO   OO   VV    VV   II  DD   DD  EEEEE    RRRRRR   "<<endl;
cout<<"     PP       RR RR    OO   OO    VV  VV    II  DD   DD  EE       RR RR    "<<endl;
cout<<"     PP       RR   RR   OOOOO       VV      II  DDDDDD   EEEEEEE  RR  RR   "<<endl;
cout<<"  							                    "<<endl;
cout<<"  "<<endl;
  getch();    //to hold the screen
 }

void func_two()      //CUSTOMER SERVICES
 {
  tot_amt=0.0;//INITIALISATION
  int chh;
  b1:        //LABEL
  clrscr();
  cout<<"\n\a";
cout<<""<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	     		* POST-PAID SERVICES *                           "<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	           1.TARRIF                                              "<<endl;
cout<<"	     	                                                         "<<endl;
cout<<"	           2.FESTIVAL OFFERS                                     "<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	           3.LATEST TUNES                                        "<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	           4.GPRS                                                "<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	           5.EXIT                                                "<<endl;
cout<<"                                                                         "<<endl;
cout<<""<<endl;
cout<<"\n Enter your choice(1-5):";
 cin>>chh;
  switch(chh)
   {
    case 1:
    clrscr();  //initialisation so that no garbage value gets stored
    char c='Y',me[][20]={"0","0","0"},medi[3][20]={"FREE-SMS-PLAN","ROAMING-PLAN","ISD-PLAN"};
    int const price[3]={45,67,78};int q=0,ch2,p=0,n,pr[]={0,0,0};
cout<<"\n";
cout<<"\n                               TARRIF-PLANS";
cout<<"\n________________________________________________________________________________";
cout<<"\n                                    PLAN 1         PLAN 2         PLAN 3";
cout<<"\n________________________________________________________________________________";
cout<<"\n      Local Call to Airtel"                                                     ;
cout<<"\n                                  0.50 Rs./Min   0.50 Rs./Min   0.30 Rs./Min "  ;
cout<<"\n      Local Call to Other GSM"                                                   ;
cout<<"\n                                  0.60Rs./Min    0.50Rs./Min    0.30Rs./Min "  ;
cout<<"\n      Local Call to Landline"                                                     ;
cout<<"\n                                  0.60Rs./Min    0.50Rs./Min    0.40Rs./Min " ;
cout<<"\n      STD Call to Airtel"                                                          ;
cout<<"\n                                  0.50Rs./Min    1.25Rs./Min    0.75Rs./Min ";
cout<<"\n      STD Call to Other GSM"                                                        ;
cout<<"\n                                  0.60Rs./Min    1.25Rs./Min    0.75Rs./Min ";
cout<<"\n\n";
    getch();
    clrscr();
cout<<"\n\n";
cout<<"\n\n                               LATEST PLAN";
cout<<"\n________________________________________________________________________________";
cout<<"\n\n\tSno."<<"\t"<<"NAME"<<"\t\t   "<<"    PRICE\n\n\n";
    for(int i=0;i<3;i++)  //USE OF FOR-LOOP
	cout<<"\t"<<i+1<<".\t"<<medi[i]<<"\t\t"<<price[i]<<"\n\n";
cout<<"\n\n";
   do    //USE OF DO-LOOP
  {
  cout<<"\n Enter your choice(1-3):";
  cin>>ch2;
  n=ch2-1;             //CALCULATION OF AMOUNT
  strcpy(me[q],medi[n]);
  pr[q]=price[n];
  p=p+pr[q];
  q++;
  cout<<"\n\n total amount:"<<p;
  tot_amt=tot_amt+p;
  cout<<"\n\n WANT TO ADD MORE PLANS??(Y/N)";
  cin>>c;
  if(c=='N')
  goto b1;         //JUMP STATEMENT
   }while(c=='Y');
  break;
   case 2:
   clrscr();
cout<<"\n\n\n\n§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§\n";
cout<<"\n\n                            .....FESTIVAL OFFERS.....\n";
cout<<"\n\n\n-------------------------------------------------------------------------------\n";
cout<<"\n\n\n * Ek Pe Ek Offers : Hello Tunes , Astrology on demand , Mirchi Mobile,";
cout<<"\n\n     Talkies , Friendz Chat & get Music, Movie & lots of Fun offers of"    ;
cout<<"\n\n     your choice at just 10p for 10 days.";
cout<<"\n\n\n * Prepaid customers can now get additional talktime during the festive"  ;
cout<<"\n\n     season on recharging their accounts.Call 121 (toll free) or"            ;
cout<<"\n\n     1212 (toll free/direct offer)";
cout<<"\n\n\n * Special offers on all new postpaid connections: attractive benefits up"  ;
cout<<"\n\n     to 30th November, 2010. The free offers include 100 mins to any local"    ;
cout<<"\n\n     Airtel mobile phone, 100 sms to any Local mobile and 500 MB of data usage." ;
cout<<"\n\n     This offer is open for all tariff plans.";
cout<<"\n\n\n * Sawal 10 Lakh ka contest : dial 5670330 (toll-free) or SMS ACT LAKH to 111.\n";
cout<<"\n\n\n§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§§";
  getch();
  goto b1;   //JUMP STATEMENT
  break;
   case 3:
   clrscr();       //INITIALISTION so that no garbage value gets stored
   char medii[10][100]={"TERE MAST-MAST DO NAIN...DABANGG","NAINA TERE.................ROBOT","TITLE TRACK...I HATE LUV STORIES","SURILI ANKHIYON VALE........VEER","GAL MEETHI-MEETHI BOL......AISHA","TITLE TRACK..............DABANGG","TITLE TRACK............GOLMAAL-3","TITLE TRACK......ANJAANA-ANJAANI","ZOOR KA JATKA.....ACTION REPLAYY","NEEND UDI...............GUZARISH"};
   int const pricee[10]={45,15,67,78,10,56,67,85,23,12};int qq=0,ch22,p1=0,nn,prr[]={0,0,0,0,0,0,0,0,0,0};
   char cc='Y',mee[][100]={"0","0","0","0","0","0","0","0","0","0"};
cout<<"\n\n\n\n";
cout<<"\n\n\n                            LATEST TUNES";
cout<<"\n\n\n";
cout<<"\n\n\n\n   Sno.\t       NAME\t\t\t                       PRICE \n\n";
cout<<"\n\n\n********************************************************************************\n";
  for(i=0;i<10;i++) //USE OF FOR-LOOP
  {
   cout<<"   "<<i+1<<"."<<"\t"<<medii[i]<<"\t\t\tRs "<<pricee[i]<<"\n\n";
  }
cout<<"\n\n\n*******************************************************************************";
b8://LABEL
cout<<"\n\n Enter your choice(1-10):";
cin>>ch22;
nn=ch22-1;    //CALCULATION OF TOTAL AMOUNT
strcpy(mee[qq],medii[nn]);
prr[qq]=pricee[nn];
p1=p1+prr[qq];
qq++;
cout<<"\n\n total amount:"<<p1;
tot_amt=tot_amt+p1;
cout<<"\n\n WANT TO ADD MORE PLANS??(Y/N)";
cin>>cc;
if(cc=='N')
goto b1;
else
 goto b8;
 break;
  case 4:
  int p2=0,yno,choice;
  b: //LABEL
  clrscr();
  cout<<"\n\n\n\a";
cout<<"  GPRS-SERVICE  "<<endl;
cout<<"                                                                         "<<endl;
cout<<"                                                                         "<<endl;
cout<<"        							          "<<endl;
cout<<"          1. ACTIVATING GPRS.. 				          "<<endl;
cout<<"                                                                         "<<endl;
cout<<"          2. DOWNLOAD COST..	                                          "<<endl;
cout<<"                                                                         "<<endl;
cout<<"          3.EXIT..                	                                  "<<endl;
cout<<"                                                                         "<<endl;
cout<<"          ENTER YOUR CHOICE.				                  "<<endl;
cout<<"                                                                         "<<endl;
cout<<"                                                                         "<<endl;
cout<<"                                                                         "<<endl;
cout<<""<<endl;
 cin>>choice;
  switch(choice)   //USE OF SWITCH CASE
  {
   case 1:
   clrscr();
cout<<"\n\n\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n\n\n                           GPRS SERVICES";
cout<<"\n\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n\n                        GENERAL INFORMATION";
cout<<"\n\n\n *  General packet radio service (GPRS) is a packet oriented mobile data service";
cout<<"\n\n      on the 2G and 3G cellular communication systems global system for mobile"     ;
cout<<"\n\n      communications (GSM)";
cout<<"\n\n\n *  GPRS extends the GSM circuit switched data capabilities and givesg services:";
cout<<"\n\n    -> 'Always on' internet access"                                                 ;
cout<<"\n\n    -> Multimedia messaging service (MMS)"                                         ;
cout<<"\n\n    -> Push to talk over cellular (PoC/PTT)"                                      ;
cout<<"\n\n    -> Instant messaging and presencewireless village"                          ;
cout<<"\n\n    -> Internet applications for smart devices through WAP"                     ;
cout<<"\n\n    -> Point-to-point (P2P) service: inter-networking with the Internet (IP)";
cout<<"\n\n\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
   getch();
   clrscr();
cout<<"\n\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n\n\n            FOR ACTIVATING GPRS SERVICES...... CHARGE Rs 35/-";
cout<<"\n\n\n\n\n  FOLLOW THE ORDER ::";
cout<<"\n\n\n\n OPEN THE 'SETTINGS'---> OPEN CONFIRURATION ---> CONNECT TO SERVICE PROVIDER";
cout<<"\n                                                                   |";
cout<<"\n                                                                   ";
cout<<"\n   GPRS ACTIVATED <--- CHANGE PREFFERED ACCESS POINT TO 'MOBILE OFFICE'";
cout<<"\n\n\n\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n\n\n\n\t\tDO YOU WANT TO ACTIVATE(press 1:yes or 2:no) ??\n";
cin>>yno;
 if(yno==1)   //CONDITION CHECKING
 {
 p2=35;
 tot_amt=tot_amt+p2;
 cout<<"\n\n\t\t\t TOTAL AMOUNT TO BE PAID : : "<<tot_amt;
  getch();
  goto b;
 }
 else
 goto b;
 break;
 case 2:
 clrscr();
cout<<"\n\n\n\n";
cout<<"\n\n\n                             DOWNLOAD COSTS";
cout<<"\n\n\n\n";
cout<<"\n\n\n\n            NAME                  BYTES                PRICE";
cout<<"\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\n\n       1. RINGTONES             < 250 KB               Rs 10/-";
cout<<"\n\n                                > 250 KB               Rs 20/-";
cout<<"\n\n       2. SONGS                   20  MB               Rs 25/-";
cout<<"\n\n       3. VIDEO SONGS           > 250 MB               Rs 40/-";
cout<<"\n\n       4. MOVIES                > 5   GB               Rs 50/-";
cout<<"\n\n       5. AIRTEL DELIGHT          50  KB               Rs 20/-";
cout<<"\n\n       6. SURFING                 -                    Rs 0.30/KB";
cout<<"\n\n\n";
cout<<"\n\n\n";
getch();
  goto b;
  break;
 case 3:
 goto b1;
 break;
 }
 break;
 case 5:
 clrscr();
 char cn[40],date[9]; //INITIALISATION
 for(i=5;i<75;i++)  //USE OF FOR-LOOP FOR BILL-PRINTING
 {
  gotoxy(i,2);
  cout<<"ß";
 }
 for(i=5;i<75;i++)
 {
 gotoxy(i,49);
 cout<<"ß";
 }
 for(i=2;i<50;i++)
 {
 gotoxy(76,i);
 cout<<"ß ß ";
 }
 for(i=6;i<75;i++)
 {
 gotoxy(i,5);
 cout<<"-";
 }
 gotoxy(29,4);
 cout<<"PM SERVICE PROVIDER";
 for(i=6;i<75;i++)
 {
 gotoxy(i,7);
 cout<<"-";
 }
 gotoxy(29,6);
 cout<<"POST-PAID SERVICE";
 for(i=6;i<75;i++)
 {
 gotoxy(i,9);
 cout<<"-";
 }
 gotoxy(20,8);
 cout<<"101 ,Mahaveer Nagar Sec-4,Udaipur(Raj.)";
 gotoxy(9,10);
 cout<<"NAME OF CUSTOMER::";
 gotoxy(58,10);
 cout<<"DATE:";
 for(i=6;i<75;i++)
 {
 gotoxy(i,11);
 cout<<"-";
 }
 gotoxy(20,13);
 cout<<"AFTER ACTIVATING POST-PAID SERVICES";
 gotoxy(20,15);
 cout<<"YOU HAVE BEEN CHARGED Rs "<<tot_amt;
 gotoxy(20,17);
 cout<<"DEPOSITE AMOUNT TO MAIN AIRTEL OFFICE";
 gotoxy(20,19);
 cout<<"            !! THANK-YOU !! ";
 gotoxy(25,20);
 cout<<" ...ENJOY PM SERVICES... ";
 for(i=6;i<75;i++)
 {
 gotoxy(i,22);
 cout<<"-";
 }
 gotoxy(25,23);
 cout<<"TOTAL COST";
 gotoxy(55,23);
 cout<<"Rs "<<tot_amt;
 for(i=2;i<50;i++)
 {
 gotoxy(2,i);
 cout<<"ß ß ";
 }
 gotoxy(29,10);
 gets(cn);
 gotoxy(65,10);
 cin>>date;
  getch();
  }
 getch();
 }
//CLASS-DECLARATION
class stud
{
public:            //PUBLIC DATA-MEMBERS
char name[20], address[20],city[20],state[20];
unsigned long int ph_no,pcode;
stud() //CONSTRUCTOR
{                     //INITIALISATION
strcpy(name,"NULL");
strcpy(address,"NULL");
strcpy(city,"NULL");
strcpy(state,"NOT_ACTIVATED");
ph_no=0;
pcode=0;
}                 //CLASS MEMBER-FUNCTION
void get(void);
void search(char name[25]);
void show(void);
void modify(void);
unsigned long int get_p()
 {
  return ph_no;
 }
char* genam()
 {
  return name;
 }
}s;//END OF CLASS AND DECLARATION OF GLOBAL CLASS OBJECT
void stud::get(void) //FUNCTIONS OF CLASS
 {  //DATA ENTRY
  cout<<"\n\n\t\t\tEnter name     -> ";
  gets(name);
  cout<<"\n\t\t\tEnter address	-> ";
  gets(address);
  cout<<"\n\t\t\tEnter mobile no(10-digits)   ->";
  cin>>ph_no;
  cout<<"\n\t\t\tEnter city ->";
  gets(city);
  cout<<"\n\t\t\tEnter state ->";
  gets(state);
  cout<<"\n\t\t\tEnter pin code ->";
  cin>>pcode;
  cout<<"\n\n_______________________________________________________________________________";
  getch();
 }
void stud::show(void)
 {     //DATA DISPLAY
 cout<<"\n\n";
 cout<<"                  NAME            :"<<"\t";puts(name);cout<<"\n";
 cout<<"                  ADDRESS         :"<<"\t";puts(address);cout<<"\n";
 cout<<"                  CITY            :"<<"\t";puts(city);cout<<"\n";
 cout<<"                  STATE           :"<<"\t";puts(state);cout<<"\n";
 cout<<"                  MOBILE NO       :"<<"\t"<<ph_no<<"\n";
 cout<<"                  PIN-CODE        :"<<"\t"<<pcode<<"\n";
 cout<<"\n\n_________________________________________________________________________";
 cout<<"\n\n_________________________________________________________________________";
 getch();
 }
void stud::modify(void)
 { //DATA MODIFICATION
  char nm[50]=" ",ad[50]=" ",cc[20]=" ",ss[20]=" ";
  unsigned long int pp,uu;
 cout<<"\n\n\n\n";
 cout<<"             NAME         :"<<"\t"<<name<<"\n";
 cout<<"             ADDRESS      :"<<"\t"<<address<<"\n";
 cout<<"             CITY         :"<<"\t"<<city<<"\n";
 cout<<"             STATE        :"<<"\t"<<state<<"\n";
 cout<<"             MOBILE NO    :"<<"\t"<<ph_no<<"\n";
 cout<<"             PIN-CODE     :"<<"\t"<<pcode<<"\n";
 cout<<"\n\n\n_________________________________________________________________________";
 cout<<"\n\n\n_________________________________________________________________________";
 cout<<"\n\n               ENTER NEW DETAILS"<<endl;
 cout<<"\n\n\t   NEW NAME :(ENTER ' N ' TO RETAIN OLD ONE)";
 gets(nm);
 cout<<"\n\n\t   NEW ADDRESS :(ENTER ' N ' TO RETAIN OLD ONE)";
 gets(ad);
 cout<<"\n\n\t   NEW MOBILE_NO :(ENTER ' 1 ' TO RETAIN OLD ONE)";
 cin>>pp;
 cout<<"\n\n\t   NEW CITY :(ENTER ' N ' TO RETAIN OLD ONE)";
 gets(cc);
 cout<<"\n\n\t   NEW STATE :(ENTER ' N ' TO RETAIN OLD ONE)";
 gets(ss);
 cout<<"\n\n\t   NEW PIN-CODE :(ENTER ' 1 ' TO RETAIN OLD ONE)";
 cin>>uu;
 if(strcmp(nm,"N")!=0)
 strcpy(name,nm);
 if(strcmp(ad,"N")!=0)
 strcpy(address,ad);
 if(pp!=1)
 {
 ph_no=pp;
 }
 if(strcmp(cc,"N")!=0)
 strcpy(city,cc);
 if(strcmp(ss,"N")!=0)
 strcpy(state,ss);
 if(uu!=1)
 {
 pcode=uu;
 }
} //END OF MODIFY FUNCTION
void stud::search(char name[25])
 { //RECORD SEARCHING
 char  found='n';
 ifstream f("rec.dat",ios::binary|ios::in);//CONSTRUCTOR OPENING FILE
 while(!f.eof())
  {
 f.read((char*)&s,sizeof(s));
 if(strcmp(name,genam())==0)
 {
 s.show();
 found='y';
 break;
 }
 }
 if(found=='n')
 cout<<"\n\n\n\t\tNAME NOT FOUND!!\n";
 f.close();
 }//END OF CLASS INLINE FUNCTIONS

void func_one() //FUNCTION FOR CUSTOMER RECORDS
 {
 clrscr();
 int g,y,ch; //VARIABLE DECLARATION
 stud s,s1,s2;
 char name[20], name1[20],n[25];
 z://LABEL
 clrscr();
 cout<<"\n\n\n\n\a";  //SERVICE MENU
cout<<""<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	                * CUSTOMER SERVICES *	                         "<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	     	   1. TO ADD RECORD OF NEW CUSTOMER                      "<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	           2. TO SHOW RECORDS OF ALL CUSTOMERS                   "<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	           3. TO SEARCH A PARTICULAR RECORD                      "<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	           4. TO MODIFY A PARTICULAR RECORD                      "<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	           5. TO DELETE A PARTICULAR RECORD                      "<<endl;
cout<<"	                                                                 "<<endl;
cout<<"	           6.EXIT                                                "<<endl;
cout<<"	                                                                 "<<endl;
cout<<""<<endl;
 cout<<"\n\n\t\t\t Enter the choice ->";
 cin>>ch;
 switch(ch)   //USE OF SWITCH CASE
 {
case  1:  //responsible for addition of record
  clrscr();
  char ans1='y', ans11;
  ofstream fo("air.dat",ios::app|ios::binary);//FILE OPENING
  cout<<"\n\n\n\n                       ...ADDITION OF CUSTOMER'S RECORDS...";
  cout<<"\n\n________________________________________________________________________________\n";
  while(ans1=='y')
  {
  s.get();
  fo.write((char *)&s,sizeof(s));
  cout<<"\n\n\n\tRECORD ADDED TO THE FILE!!\n";
  cout<< "\n\n\n\nWANT TO ENTER MORE RECORDS?(y/n).. ";
  cin>>ans1;
  }
  fo.close();
  cout<< "\n\n\n\t    WANT TO GO TO MAIN MENU :-";
  cin>>ans11;
  if(ans11=='Y'||ans11=='y')
  {goto z;}
  break;
case  2:  // will show all the contents of the file
  clrscr();
  fstream fil;
  char ans12;
  fil.open("air.dat",ios::binary|ios::in|ios::out);
  if(!fil)
  {
   cout<<"\n\tCANNOT OPEN FILE!!";
  }
  fil.seekg(0,ios::beg);
  cout<<"\n\tCONTENTS OF THE FILE";
  fil.read((char*)&s,sizeof(s));
  while(!fil.eof())
  {
  s.show();
  fil.read((char*)&s,sizeof(s));
  }
  fil.close();
  cout<< "   Do you want to continue :-";
  cin>>ans12;
  if(ans12=='Y'||ans12=='y')
  {goto z;}
  break;
case 3: // search
  clrscr();
  char ans13;
  cout<<"\n\n\n\n\n Name you want to search?";
  gets(n);
  s.search(n);
  cout<< "   Do you want to continue :-";
  cin>>ans13;
  if(ans13=='Y'||ans13=='y')
  {goto z;}
  break;
case 4:  //for the modification
  clrscr();
  fstream fio;
  char name[20],ans4, address[20],found='f'; unsigned long int ph_no,ppp;
  long pos;
  fio.open("air.dat",ios::binary|ios::in|ios::out);
  cout<<"\n\n\n\t Enter the PH_NO whose record is to be modified  :";
  cin>>ppp;
  while(!fio.eof())
  {
   pos=fio.tellg();
   fio.read((char *)&s2,sizeof(s2));
   if(s2.get_p()==ppp)
   {
    s2.modify();
    fio.seekg(pos);
    fio.write((char*)&s2,sizeof(s2));
    found='t' ;
    break;
   }
  }
  if(found=='f')
  cout<<"\n\tRECORD NOT FOUND!!";
  fio.seekg(0);
  clrscr();
  cout<<"\n\n\t  NOW THE FILE CONTAIN:- \n";
  while(!fio.eof())
  {
   fio.read((char*)&s,sizeof(s));
   s.show();
  }
  fio.close();
  cout<< "\n\n\t   WANT TO GO TO THE MAIN MENU :-";
  cin>>ans4;
  if(ans4=='Y'||ans4=='y')
  {goto z;}
  break;
case 5:  //responsible for the deletion of the record
  clrscr();
  char na[40],foun='f',confirm='n',ans5;
  clrscr();
  ifstream iff;
  ofstream file;
  int i;
  iff.open("air.dat",ios::in);
  file.open("tem.dat",ios::out);
  cout<<"\n \t\t\tENTER THE NAME WHOSE RECORD YOU WANT TO DELETE :-";
  gets(na);
  while(!iff.eof())
  {
  iff.read((char*)&s1,sizeof(s1));
  if(strcmp(na,s1.genam())==0)
  {
  foun='t';
  s.show();
  cout<<"\n\n\n\tARE YOU SURE YOU WANT TO DELETE THIS RECORD?(y/n)..";
  cin>>confirm;
  if(confirm=='n')
  file.write((char*)&s1,sizeof(s1));
  else
  break;
  }
  else
  file.write((char*)&s1,sizeof(s1));
  }
  if(foun=='f')
  cout<<"record not found!!\n";
  iff.close();
  file.close();
  remove("air.dat");
  rename("tem.dat","air.dat");
  iff.open("air.dat",ios::in);
  cout<<"\n\tNOW THE FILE CONTAINS\n";
  while(!iff.eof())
  {
  iff.read((char*)&s,sizeof(s));
  if(iff.eof())
  break;
  s.show();
  }
  iff.close();
  getch();
  cout<< "\n\n\t   WANT TO GO TO THE MAIN MENU:- ";
  cin>>ans5;
  if (ans5=='y' || ans5=='Y')
  {goto z;}
   else
   if (ans5=='n' || ans5=='N')
   {getch();
   exit(1);
  }
  break;
case 6: //EXIT TO MAIN MENU
  clrscr();
  break;
 }//END-OF-SWITCH
getch();
}//END OF FUNCTION
void std()//START OF STD FUNCTION
 {
 clrscr();
 cout<<"\n\n\t\t\t    NATIONAL STD CODES";
 cout<<"\n\t\t\t    ------------------ ";
 cout<<"\n\n\t\t\t CITIES           STD CODES ";
 cout<<"\n\t\t\t ------           --------- ";
 cout<<"\n\n\t\t\t1.AHEMDABAD   ®     0272  ";
 cout<<"\n\n\t\t\t2.AJMER       ®	    0145  ";
 cout<<"\n\n\t\t\t3.ALLAHABAD   ®	    0532  ";
 cout<<"\n\n\t\t\t4.BARODA      ®	    0265  ";
 cout<<"\n\n\t\t\t5.BHATINDA    ®	    0614  ";
 cout<<"\n\n\t\t\t6.BHOPAL      ®	    0755  ";
 cout<<"\n\n\t\t\t7.CALCUTTA    ®	    0145  ";
 cout<<"\n\n\t\t\t8.JAIPUR      ®	    0145  ";
 cout<<"\n\n\t\t\t9.KANPUR      ®	    0512  ";
 cout<<"\n\n\t\t\t10.LUCKNOW    ®	    0522  ";
 cout<<"\n\n\t\t\t11.MOHALI     ®	    0172  ";
 cout<<"\n\n\t\t\t12.MYSORE     ®     0821  ";
 cout<<"\n\n\t\t\t13.NEW DELHI  ®	    011  ";
 cout<<"\n\n\t\t\t14.PATNA      ®     0612  ";
 cout<<"\n\n\t\t\t15.PUNE       ®     0212  ";
 cout<<"\n\n\t\t\t16.RAIPUR     ®     0771  ";
 cout<<"\n\n\t\t\t17.SURAT      ®	    0261  ";
 cout<<"\n\n\t\t\t18.UDAIPUR    ®	    0294  ";
 cout<<"\n\n\t\t\t19.UJJAIN     ®	    0734  ";
 cout<<"\n\n\t\t\t20.VELLORE    ®     0416  ";
 getch();
 }//END OF STD FUNCTION

void exit1() //START OF EXIT FUNCTION
 {  int i;
 clrscr();
 for(i=4;i<74;i++)  //BORDER DESIGNING
 {
 gotoxy(i,4);
 cout<<"ß";
 }
 for(i=4;i<74;i++)
 {
 gotoxy(i,23);
 cout<<"ß";
 }
 for(i=4;i<24;i++)
 {
 gotoxy(75,i);
 cout<<"ß ß ";
 }
 for(i=21;i<55;i++)
 {
 gotoxy(i,9);
 cout<<"*";
 }
 gotoxy(24,11);
 cout<<"FOR MORE DETAIL  LOG ON TO:::";
 gotoxy(28,13);
 cout<<"www.mp_services.com";
 for(i=21;i<55;i++)
 {
 gotoxy(i,15);
 cout<<"*";
 }
 for(i=10;i<15;i++)
 {
 gotoxy(21,i);
 cout<<"";
 }
 for(i=10;i<15;i++)
 {
 gotoxy(54,i);
 cout<<"";
 }
 for(i=4;i<24;i++)
 {
 gotoxy(4,i);
 cout<<"ß ß ";
 }
 getch();
 } //end of exit function

void main()// STARTING OF MAIN FUNCTION
 {
 clrscr();
 cout<<"\n\n\n";
 cout<<"\n                      WEL-COME  TO  PM Service Provider\n";
 cout<<"\n\a                          @PPPPPPPPPPPPPPPPPPP@                              ";
 cout<<"\n\a                          @PP                P@           ";
 cout<<"\n\a                          @PP                P@         ";
 cout<<"\n\a                          @PP                P@       ";
 cout<<"\n\a                          @PP                P@ ";
 cout<<"\n\a                          @PP                P@   ";
 cout<<"\n\a                          @PP                P@";
 cout<<"\n\a                          @PPPPPPPPPPPPPPPPPPP@                 ";
 cout<<"\n\a                          @PP          MMM     MMM                ";
 cout<<"\n\a                          @PP         MM  MM  MM  MM                ";
 cout<<"\n\a                          @PP        MM    MMMM    MM              ";
 cout<<"\n\a                          @PP       MM      MM      MM          ";
 cout<<"\n\a                          @PP      MM                MM       ";
 cout<<"\n\a                    @@@@@@@PP     MM                  MM  ";
 cout<<"\n\a                   @PPPPPPPPP     MM                  MM \n\n";
 getch();
 clrscr();
 page_one();
 getch();
 clrscr();
 page();
 getch();
 xx:
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n"; //MASTER-MENU
 cout<<"\n\n\t|******************************************************|";
 cout<<"\n\n\t|                  AIRTEL SERVICES                     |";
 cout<<"\n\n\t|------------------------------------------------------|";
 cout<<"\n\n\t|                                                      |";
 cout<<"\n\n\t|                                                      |";
 cout<<"\n\n\t|              1.CUSTOMER SERVICES                     |";
 cout<<"\n\n\t|                                                      |";
 cout<<"\n\n\t|              2.POST-PAID MOBILE SERVICES             |";
 cout<<"\n\n\t|                                                      |";
 cout<<"\n\n\t|              3.STD-CODES                             |";
 cout<<"\n\n\t|                                                      |";
 cout<<"\n\n\t|              4.EXIT                                  |";
 cout<<"\n\n\t|                                                      |";
 cout<<"\n\n\t|******************************************************|";
 cout<<"\n\n\n\n\n\n\t\t\tENTER YOUR CHOICE = ";
 cin>>god;
 switch(god)//USE OF SWITCH
 {
 case 1:
 clrscr();
 func_one();
 clrscr();
 cout<<"\n\n\n\n\n\t\t WANT TO GO TO MAIN MENU ::(Y/N)??";
 cin>>xxy;
 if(xxy=='Y')
 goto xx;
 else
 exit(0);
 break;
 case 2:
 clrscr();
 func_two();
 clrscr();
 cout<<"\n\n\n\n\n\t\t WANT TO GO TO MAIN MENU ::(Y/N)??";
 cin>>xxyy;
 if(xxyy=='Y')
 goto xx;
 else
 exit(0);
 break;
 case 3:
 std();
 clrscr();
 cout<<"\n\n\n\n\n\t\t WANT TO GO TO MAIN MENU ::(Y/N)??";
 cin>>xxy;
 if(xxy=='Y')
 goto xx;
 else
 exit(0);
 break;
 case 4:
 exit1();
 exit(0);
 break;
 }//END OF SWITCH
 getch();
} //ENF OF MAIN FUNCTION
