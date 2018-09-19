#include<iostream>
#include<cmath>
#include<cstdlib>
#include<fstream>
#define PI 3.14159265
using namespace std;
double sum(double num1,double num2);
double sub(double num1,double num2);
double div(double num1,double num2);
double mul(double num1,double num2);
//////////////////////////////////////////////////////////////////////////////////////////////////////
int fact(int num1);
double pow(double num1,double num2) ;
double sqrt(double num1);
double ln(double num1);
double t(double num1);
/////////////////////////////////////////////////////////////////////////////////////////////////////
void decimal();
void binary();
void octal();
void hexdecimal();
fstream filename ;
/////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

	
	filename.open("calculator.txt",ios::out);
	if(!filename)
	{
         cout<<"error";
	}
filename<<"                       WELCOME TO THE CALCULATOR PROGRAM                    "<<endl;
filename<<"                                     *                                      "<<endl;
filename<<"                                     *                                      "<<endl;
filename<<"                                     *                                      "<<endl;
filename<<"                            *******************                             "<<endl;
filename<<"                                 *********                                  "<<endl;
filename<<"                                    ***                                     "<<endl;
double num1,num2;
int s,n;
char ch;
do
{
////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"                       WELCOME TO THE CALCULATOR PROGRAM                    "<<endl;
    cout<<"                                     *                                      "<<endl;
	cout<<"                                     *                                      "<<endl;
    cout<<"                                     *                                      "<<endl;
	cout<<"                            *******************                             "<<endl;
	cout<<"                                 *********                                  "<<endl;
	cout<<"                                    ***                                     "<<endl;
///////////////////////////////////////////////////////////////////////////////////////////////////
		cout<<"1------calculations oprator"<<endl;
		cout<<"2------power,sqrt,factorial,ln,log"<<endl;
		cout<<"3------sin,cos,tan,sin^-1,cos^-1,tan^-1"<<endl;
		cout<<"4------conversations"<<endl;
		cout<<"*************************************************************"<<endl;
		cout<<"please choice "<<endl;
		cin>>n;
		cout<<"*************************************************************"<<endl;
///////////////////////////////////////////////////////////////////////////////////////////////////
		if(n==1)
		{
char d;
do{
				cout<<"you should choose from many calulations oprators"<<endl;
				cout<<"______________________________________________________________"<<endl;
				cout<<"1----->sumtion"<<endl;
				cout<<"2----->subtraction"<<endl;
				cout<<"3----->division"<<endl;
				cout<<"4----->multiply"<<endl;
				cout<<"______________________________________________________________"<<endl;
				cout<<"choose from many calculations"<<endl;
				cin>>s;
				cout<<"______________________________________________________________"<<endl;
				cout<<"number1  =  "<<endl;
				cin>>num1;
				cout<<"number2  =  "<<endl;
				cin>>num2;
				cout<<"_______________________________________________________________"<<endl<<endl;
				switch(s)
				{
					case 1:
					{
						                   cout<<"This Is Calculation"<<endl; 
                                           cout<<num1<<"   +   "<<num2<<"   =   "<<sum( num1,num2)<<endl;
										   filename<<"result of---->sumtion     =       "<<sum( num1,num2)<<endl;
										   break;
					}
					case 2:
					{
						                   cout<<"This Is Calculation"<<endl;
										   cout<<num1<<"   -   "<<num2<<"   =   "<<sub(num1,num2)<<endl;
										   filename<<"result of---->subtruction =      "<<sub(num1,num2)<<endl;
										   break;
					}
					case 3:
					{
						                   cout<<"This Is Calculation"<<endl;
										   cout<<num1<<"   /   "<<num2<<"   =   "<<div(num1,num2)<<endl;
										   filename<<"result of---->division    =      "<<div(num1,num2)<<endl;
										   break;
					}
					case 4:
					{
						                   cout<<"This Is Calculation"<<endl;
										   cout<<num1<<"   *   "<<num2<<"   =   "<<mul(num1,num2)<<endl;
										   filename<<"result of---->multiply    =      "<<mul(num1,num2)<<endl;
										   break;
					}
		}
				                           filename<<"__________________________________________________________________________"<<endl;
cout<<"if you want repeat this process please press 'y' or 'Y' when want to go main list press any key"<<endl;
cin>>d;
}
while(d=='y' ||d=='Y');
}
//////////////////////////////////////////////////////////////////////////////////////////////////
		else if(n==2)
		{
char d;
do{
				cout<<"you should choose from many oprations"<<endl;cout<<"power,sqrt,factorial,ln,log"<<endl;
				cout<<"________________________________________________________________"<<endl;
				cout<<"1----->factorial"<<endl;
				cout<<"2----->power"<<endl;
				cout<<"3----->sqrt"<<endl;
				cout<<"4----->ln"<<endl;
				cout<<"5----->log"<<endl;
				cout<<"_________________________________________________________________"<<endl;
				cout<<"choose from many calculations"<<endl;
				cin>>s;
				cout<<"_________________________________________________________________"<<endl;
				switch(s)
				{
					case 1:
					{
						cout<<"put your number1 please"<<endl;
						cin>>num1;
											cout<<"enter the facturial"<<"             "<<fact(num1)<<endl;
											filename<<"result of---->facturial   =       " <<fact(num1)<<endl;
											break;
					}
					case 2:
					{
						cout<<"put your number1 please"<<endl;
						cin>>num1;
						cout<<"put your number2 please"<<endl;
						cin>>num2;
											 cout<<"enter the power"<<"                "<<pow(num1,num2)<<endl;
											 filename<<"result of---->power      =       "<<pow(num1,num2)<<endl;
											 break;
					}
					case 3:
					{
						cout<<"put your number1 please"<<endl;
						cin>>num1;
											  cout<<"enter the sqrt"<<"                "<<sqrt(num1)<<endl;
											  filename<<"result of---->sqart     =       "<<sqrt(num1)<<endl;
											  break;
					}
					case 4:
					{
						cout<<"put your number1 please"<<endl;
						cin>>num1;
											   cout<<"enter the ln"<<"                "<<ln(num1)<<endl;
											   filename<<"result of---->ln      =      " <<ln(num1)<<endl;
											   break;
					}
					case 5:
					{
						cout<<"put your number1 please"<<endl;
						cin>>num1;
											   cout<<"enter the log"<<"                 "<<t(num1)<<endl;
											   filename<<"resutlof---->log        =      "<<t(num1)<<endl;
											   break;
					}
		}
				                               filename<<"__________________________________________________________________________"<<endl;
cout<<"if you want repeat this process please press 'y' or 'Y' when want to go main list press any key"<<endl;
cin>>d;
}
while(d=='y' ||d=='Y');
		}
//////////////////////////////////////////////////////////////////////////////////////////////////
		else if(n==3)
		{
char d;
do{
				cout<<"you should choose from many oprations"<<endl;
				cout<<"sin,cos,tan,sin^-1,cos^-1,tan^-1"<<endl;
				cout<<"________________________________________________________________"<<endl;
				cout<<"1----->sin"<<endl;
				cout<<"2----->cos"<<endl;
				cout<<"3----->tan"<<endl;
				cout<<"4----->sin^-1"<<endl;
				cout<<"5----->cos^-1"<<endl;
				cout<<"6----->tan^-1"<<endl;
				cout<<"_________________________________________________________________"<<endl;
				cout<<"choose from many calculations"<<endl;
				cin>>s;
				cout<<"_________________________________________________________________"<<endl;
				switch(s)
				{
						case 1:
						{
												cout<<"put your number1 please"<<endl;
												cin>>num1;
                       
												double result=sin(PI*num1/180.0);
												cout<<"sin("<<num1<<")"<<"="<<result<<endl;
												filename<<"result of---->sin"<<"("<<num1<<")"<<"="<<result<<endl;
												break;
						}
						case 2:
						{
												cout<<"put your number1 please"<<endl;
												cin>>num1;
                       
												double result=cos(PI*num1/180.0);
												cout<<"cos("<<num1<<")"<<"="<<result<<endl;
												filename<<"result of---->cos"<<"("<<num1<<")"<<"="<<result<<endl;
												break;
						}
						case 3:
						{
												double result;
												cout<<"put your number1 please"<<endl;
												cin>>num1;
												if(num1==90 || num1==270)
												{
												result=2;
												}
												else
												result=tan(PI*num1/180.0);
												cout<<"tan("<<num1<<")"<<"="<<result<<endl;
												filename<<"result of---->tan"<<"("<<num1<<")"<<"="<<result<<endl;
												break;
						}
						case 4:
						{
												cout<<"put your number1 please"<<endl;
												cin>>num1;
                       
												double result=1/sin(PI*num1/180.0);
												cout<<"sin^-1("<<num1<<")"<<"="<<result<<endl;
												filename<<"result of---->sin^-1"<<"("<<num1<<")"<<"="<<result<<endl;
												break;
						}
						case 5:
						{
												cout<<"put your number1 please"<<endl;
												cin>>num1;
                       
												double result=1/cos(PI*num1/180.0);
												cout<<"cos^-1("<<num1<<")"<<"="<<result<<endl;
												filename<<"result of---->cos^-1"<<"("<<num1<<")"<<"="<<result<<endl;
												break;
						}
						case 6:
						{
												double result;
												cout<<"put your number1 please"<<endl;
												cin>>num1;
												if(num1==90 || num1==270)
												{
												result=2;
												}
												else
												result=1/tan(PI*num1/180.0);
												cout<<"tan^-1("<<num1<<")"<<"="<<result<<endl;
												filename<<"result of---->tan^-1"<<"("<<num1<<")"<<"="<<result<<endl;
												break;
						}
		}
                                                filename<<"__________________________________________________________________________"<<endl;
cout<<"if you want repeat this process please press 'y' or 'Y' when want to go main list press any key"<<endl;
cin>>d;
}
while(d=='y' ||d=='Y');
		}
		else if(n==4)
		{
char d;
do{
		cout<<"you should choose from many oprations"<<endl;
		cout<<"________________________________________________________________"<<endl;
		cout << " Program to convert number : " << endl;
		cout << " __________________________ " << endl;
		cout << "   " << endl;
		cout << "1 To convert Decimal number to Binary & Octal & Hexdecimal" << endl;
		cout << "2 To convert Binary number to Decimal & Octal & Hexdecimal" << endl;
		cout << "3 To convert Octal number to Dicmal & Binary & Hexdecimal" << endl;
		cout << "4 To convert Hexdecimal number to Decimal & Binary & Octal" << endl;
		cout<<"_________________________________________________________________"<<endl;
		cout<<"choose from many calculations"<<endl;
		cin>>s;
		cout<<"_________________________________________________________________"<<endl;
		switch(s)
		{
		case 1:
		{
							  decimal();
							  break;
		}
		case 2:
		{
							  binary(); 
							  break;
		}
		case 3:
		{
							  octal();
							  break;
		}
		case 4:
		{                 
							  hexdecimal();
							  break;
		}
		}
		                              filename<<"__________________________________________________________________________"<<endl;
cout<<"if you want repeat this process please press 'y' or 'Y' when want to go main list press any key"<<endl;
cin>>d;
}
while(d=='y' ||d=='Y');
		}
		cout<<"Do u Want continue press (y,Y)if not press(any button)";
		cin>>ch;
		system("cls");
}
while( ch == 'y' || ch == 'Y' );
filename.close();
system("pause");
return 0;
}
double sum(double num1,double num2)                           //sumtion the function
{
double result;
result=num1+num2;
return result;
}
double sub(double num1,double num2)                           // subtruction the function
{
double result;
result=num1-num2;
return result;
}
double div(double num1,double num2){                         // division the function
double result;
result=num1/num2;
if(num2==0)
{
cout<<"this is error----please try again"<<endl;
}
else
return result;
}
double mul(double num1,double num2)                          //multiply the function
{
double result;
result=num1*num2;
return result;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
                                                              //facturial the function
int fact(int num1)
{
int result=1;
for(int i=1;i<=num1;i++)
{
result=result*i;
}
return result;
}
double ln(double num1)                                        // lin the function         
{
double result;
result=log10(num1);
return result;
}
double t(double num1)                                         //log the function       
{
double result;
result=log(num1);
return result;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void decimal()                                                    //convert Decimal number to Binary & Octal & Hexdecimal
{
int num,a,bin=0,i=0,z,m,t,mult=1;
int oct=0,r, j=0, mul=1;
int counter,x,q, hex[100];
cout << "Please enter a decimal number : ";
cin >> num;
{
z = num ;
if(z<0)
{
cout<<"\n ERROR please enter a positive number!!!!!" << endl;
}
else
while(z > 0)
{
a = z % 2;
i = a * mult;
bin = bin + i;
mult = mult * 10;
z = z / 2;
}
cout<<"Binary number is = "<<bin<<endl;
{
m= num ;
if(m<0)
{
cout<<"\nERROR please enter a positive number!!!!!"<< endl;
}
else
while(m > 0)
{
r = m % 8;
j = r * mul;
oct = oct + j;
mul = mul * 10;
m = m / 8;
}
cout<<"Octal number is =  " << oct << endl;
}
{
cout << "Hexdecimal number is = ";
t= num ;
for(counter=0;t!=0;counter++)
{
q=t%16;
hex[counter]=q;
t=t/16;
}
filename<<"result of----hexadecimel>";
for(x=counter-1;x>=0;x--)
{
if(hex[x]==10){
cout << "A";
filename<<"A";
}
else if(hex[x]==11){
cout <<"B";
filename<<"B";
}
else if(hex[x]==12){
cout <<"C";
filename<<"C";
}
else if(hex[x]==13){
cout <<"D";
filename<<"D";
}
else if(hex[x]==14){
cout <<"E";
filename<<"E";
}
else if(hex[x]==15){
cout <<"F";
filename<<"F";
}
else {cout <<hex[x];

filename<<hex[x];

}

}}
cout<<endl;
}
filename<<endl;
filename<<"result of----binary>"<<bin<<endl;
filename<<"result of----octal >"<<oct<<endl;
filename<<"_________________________________________________________"<<endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void binary()                                                    //convert Binary number to Decimal & Octal & Hexdecimal
{
int a,dec=0,i=0,bin,mult=1;
int oct=0,r, j=0 , m, mul=1;
int counter,x,q,hex[100],t;
cout<<"Enter the Binary Digit : ";
cin>>bin;
while(bin>0)
{
a = bin % 10;
i = a * mult;
dec = dec + i;
mult = mult * 2;
bin = bin / 10;
}
cout<<"Decimal number is = "<<dec<<endl;
{
m= dec ;
if(m<0)
{
cout<<"\nERROR please enter a positive number!!!!!"<< endl;
}
else
while(m > 0)
{
r = m % 8;
j = r * mul;
oct = oct + j;
mul = mul * 10;
m = m / 8;
}
cout<<"Octal number is =  " << oct << endl;
}
{
cout << "Hexdecimal number is = ";

t= dec ;
for(counter=0;t!=0;counter++)
{
q=t%16;
hex[counter]=q;
t=t/16;
}
filename<<"result of ---hexadecimal>   " ;
for(x=counter-1;x>=0;x--)
{
if(hex[x]==10){
cout << "A";
filename<<"A";}
else if(hex[x]==11){
cout <<"B";
filename<<"B";}
else if(hex[x]==12){
cout <<"C";
filename<<"C";}
else if(hex[x]==13){
cout <<"D";
filename<<"D" ;}
else if(hex[x]==14){
cout <<"E";
filename<<"E";}
else if(hex[x]==15){
cout <<"F";
filename<<"F";}
else
cout <<hex[x];
filename<<hex[x];
}
cout << endl;
}
filename<<endl;
filename<<"result of----decimal>"<<dec<<endl;
filename<<"result of----octal >"<<oct<<endl;
filename<<"_________________________________________________________"<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
void octal()                                                     //convert Octal number to Dicmal & Binary & Hexdecimal
{
int a,dec=0,prod=0,oct,mult=1;
int bin=0,r, pro=0 , m, mul=1;
int counter,x,q,hex[100],t;
cout<<"Enter the Octal number : ";
cin>>oct;
while(oct>0)
{
a = oct % 10;
prod = a * mult;
dec = dec + prod;
mult = mult * 8;
oct = oct / 10;
}
cout<<"Decimal number is = "<<dec<<endl;
{
m = dec ;
if(m<0)
{
cout<<"\nERROR please enter a positive number!!!!!"<< endl;
}
else
while(m > 0)
{
r = m % 2;
pro = r * mul;
bin = bin + pro;
mul = mul * 10;
m = m / 2;
}
cout<<"Binary number is =  " << bin << endl;
}
{
cout << "Hexdecimal number is = ";
t= dec ;
for(counter=0;t!=0;counter++)
{
q=t%16;
hex[counter]=q;
t=t/16;
}
filename<<"result of ---hexadecimal>   " ;
for(x=counter-1;x>=0;x--)
{
if(hex[x]==10){
cout << "A";
filename<< "A" ;}
else if(hex[x]==11){
cout <<"B";
filename<< "B" ;}
else if(hex[x]==12){
cout <<"C";
filename<< "C"; }
else if(hex[x]==13){
cout <<"D";
filename<< "D" ;}
else if(hex[x]==14){
cout <<"E";
filename<<"E" ;}
else if(hex[x]==15){
cout <<"F";
filename<<"F" ;}
else{
cout <<hex[x];
filename<<hex[x];}
}
cout << endl;
}
filename<<endl;
filename<<"result of----decimal>"<<dec<<endl;
filename<<"result of----binary >"<<bin<<endl;
filename<<"_________________________________________________________"<<endl;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void hexdecimal()                                                       //convert Hexdecimal number to Decimal & Binary & Octal
{
int rem,mult=1,prod=0,dec=0,num;
int m,r,pro=0,mul=1,bin=0;
int re, k , po=0 , mu=1 , oct=0 ;
cout<<"Enter the Hexdecumal number : ";
cin>>num;
{
}
while(num>0)
{
rem = num % 10;
prod = rem * mult;
dec = dec + prod;
mult = mult * 16;
num = num / 10;
}
cout<<"Decimal number is = "<<dec<<endl;
{
m = dec ;
if(m<0)
{
cout<<"\nERROR please enter a positive number!!!!!"<< endl;
}
else
while(m > 0)
{
r = m % 2;
pro = r * mul;
bin = bin + pro;
mul = mul * 10;
m = m / 2;
}
cout<<"Binary number is =  " << bin << endl;
}
{
k= dec ;
if(k<0)
{
cout<<"\nERROR please enter a positive number!!!!!"<< endl;
}
else
while(k > 0)
{
re = k % 8;
po = re * mu;
oct = oct + po;
mu = mu * 10;
k = k / 8;
}
cout<<" Octal number is =  " << oct << endl;
}
filename<<endl;
filename<<"result of----decimal>"<<dec<<endl;
filename<<"result of----binary>"<<bin<<endl;
filename<<"result of----octal >"<<oct<<endl;

filename<<"_________________________________________________________"<<endl;
}