#include<iostream>
using namespace std;
void mainOption( string name, string cnic, double balance);
void depositMoney(string name, string cnic, double balance);
void withdrawMoney(string name, string cnic, double balance);


void mainOption(string name, string cnic, double balance)
{
	int option;
	cout<<"\tSELECT YOUR OPTION : ";
	cin>>option;
	
	if(option==1)
	{
		cout<<"\tYOUR NAME : "<<name<<endl;
		cout<<"\tYOUR CNIC : "<<cnic<<endl;
		cout<<"\tYOUR BALANCE : "<<balance<<endl;
		mainOption(name,  cnic, balance);
	}
	else if(option==2)
	{
		depositMoney(name, cnic , balance);
	}
	else if(option==3)
	{
		withdrawMoney(name, cnic , balance);
	}
	else
	{
		cout<<"\tINVALID CHOICE!"<<endl<<endl;
		mainOption( name,  cnic, balance );
	}
}
void depositMoney(string name,string cnic, double balance)
{
	double moreMoney;
	cout<<"\tENTER THE AMOUNT YOU WANT TO DEPOSIT : ";
	cin>>moreMoney;
	
	double newMoney=moreMoney+balance;
	balance=+newMoney;
	cout<<"\tYOUR BALANCE : "<<newMoney<<endl<<endl;
	
	mainOption(name,  cnic, balance);
}
void withdrawMoney(string name,string cnic,double balance)
{
	double lessMoney;
	cout<<"\tENTER THE AMOUNT YOU WANT TO WITHDRAW : ";
	cin>>lessMoney;
	
	if(lessMoney>balance)
	{
		cout<<"\tINSUFFICIENT BALANCE . RECHARGE NOW ."<<endl;
		cout<<"\tYOUR BALANCE = "<<balance<<endl<<endl;
	}
	else
	{
		double lessNewMoney=balance-lessMoney;
	    balance= lessNewMoney;
		cout<<"\tYOUR BALANCE : "<<lessNewMoney<<endl<<endl;
	}
	
	mainOption(name,  cnic, balance);
}


int main()
{
	cout<<"\t\tWELCOME TO ASAR BANKING SYSTEM"<<endl<<endl;
	string name;
	cout<<"\tENTER YOUR NAME : ";
	getline(cin,name);
	
	string cnic;
	cout<<"\tENTER YOUR CNIC (with Dashes) : ";
	cin>>cnic;
	
	double balance=500;
	cout<<"\tYOUR BALANCE = "<<balance<<endl<<endl;
	
	cout<<"\tSELECT YOUR OPTION : "<<endl;
	cout<<"\t1. PRINT ACCOUNT DETAILS"<<endl;
	cout<<"\t2. DEPOSIT "<<endl;
	cout<<"\t3. WITHDRAW "<<endl<<endl;
	
	mainOption(name,cnic,balance);
	return 0;
}
