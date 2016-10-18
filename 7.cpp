#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;

struct account{
	char name[50];
	char address[50];
	char city[20];
	char phone[15];
	long double balance;
	int payDate;
};

void input(account, char);
void revise(account, char);
void askSave(char, account);

int main(){
	char more;
	account member;
	
	input(member, more);
	revise(member, more);
	
return 0;}

void input(account people, char more){

		cout<<"Name: "; cin.getline(people.name,50);
		if(strlen(people.name)==0){
			cout<<"Input Error"; exit(0);
		}
		cout<<"Address: "; cin.getline(people.address,50);
		if(strlen(people.address)==0){
			cout<<"Input Error";exit(0);
		}
		cout<<"City: "; cin.getline(people.city,20);
		if(strlen(people.city)== 0){
			cout<<"Input Error";exit(0);
		}
		cout<<"Phone number: "; cin.getline(people.phone,15);
		if(strlen(people.phone)==0){
			cout<<"Input Error";exit(0);
		}
		cout<<"Account balance: "; cin>>people.balance;
		if(people.balance<0){
			cout<<"You broke?";exit(0);
		}
		cout<<"Last payment date: "; cin>>people.payDate;
		if(people.payDate<0 || people.payDate>31){
			cout<<"Input Error";exit(0);
		}cin.ignore();
		
		cout<<fixed <<setprecision(2)<<showpoint<<right;
		cout<<endl <<endl
			<<"Name: " <<setw(26) <<people.name <<endl
			<<"Address: " <<setw(23) <<people.address<<endl
			<<"City: " <<setw(26) <<people.city<<endl
			<<"Phone number: " <<setw(18)<<people.phone<<endl
			<<"Account balance: " <<setw(15) <<people.balance<<endl
			<<"Last payment date: " <<setw(13) <<people.payDate<<endl;
			askSave(more, people);
	}


void revise(account people, char more){
	int choice;
	cout<<fixed <<setprecision(2)<<showpoint<<right;
		cout<<"1. "<<"Name: " <<setw(26) <<people.name <<endl
			<<"2. "<<"Address: " <<setw(23) <<people.address<<endl
			<<"3. "<<"City: " <<setw(26) <<people.city<<endl
			<<"4. "<<"Phone number: " <<setw(18)<<people.phone<<endl
			<<"5. "<<"Account balance: " <<setw(15) <<people.balance<<endl
			<<"6. "<<"Last payment date: " <<setw(13) <<people.payDate<<endl;
			cout <<"Pick revision"; cin>>choice;
	
	switch(choice){
		case 1 : cout<<"Name: "; cin.getline(people.name,50); 
					if(strlen(people.name)==0){
					cout<<"Error"; exit(0);
					}
				cout<<endl
					<<endl
					<<"Name: " <<setw(26) <<people.name <<endl
					<<"Address: " <<setw(23) <<people.address<<endl
					<<"City: " <<setw(26) <<people.city<<endl
					<<"Phone number: " <<setw(18)<<people.phone<<endl
					<<"Account balance: " <<setw(15) <<people.balance<<endl
					<<"Last payment date: " <<setw(13) <<people.payDate<<endl;
					askSave(more, people);
					;break;
					
		case 2 : cout<<"Address: "; cin.getline(people.address,50); 
					if(strlen(people.address)==0){
					cout<<"Input Error";exit(0);
					}
				cout<<endl
					<<endl
					<<"Name: " <<setw(26) <<people.name <<endl
					<<"Address: " <<setw(23) <<people.address<<endl
					<<"City: " <<setw(26) <<people.city<<endl
					<<"Phone number: " <<setw(18)<<people.phone<<endl
					<<"Account balance: " <<setw(15) <<people.balance<<endl
					<<"Last payment date: " <<setw(13) <<people.payDate<<endl;
					askSave(more, people);
					break;
		
		case 3 : cout<<"City: "; cin.getline(people.city,20); 
					if(strlen(people.city)== 0){
					cout<<"Input Error";exit(0);
					}
				cout<<endl
					<<endl
					<<"Name: " <<setw(26) <<people.name <<endl
					<<"Address: " <<setw(23) <<people.address<<endl
					<<"City: " <<setw(26) <<people.city<<endl
					<<"Phone number: " <<setw(18)<<people.phone<<endl
					<<"Account balance: " <<setw(15) <<people.balance<<endl
					<<"Last payment date: " <<setw(13) <<people.payDate<<endl;
					askSave(more, people);
					break;
		
		case 4 : cout<<"Phone number: "; cin.getline(people.phone,15); 
					if(strlen(people.phone)==0){
					cout<<"Input Error";exit(0);
					}
				cout<<endl
					<<endl
					<<"Name: " <<setw(26) <<people.name <<endl
					<<"Address: " <<setw(23) <<people.address<<endl
					<<"City: " <<setw(26) <<people.city<<endl
					<<"Phone number: " <<setw(18)<<people.phone<<endl
					<<"Account balance: " <<setw(15) <<people.balance<<endl
					<<"Last payment date: " <<setw(13) <<people.payDate<<endl;
					askSave(more, people);
					break;
		
		case 5 : cout<<"Account balance: "; cin>>people.balance;
					if(people.balance<0){
					cout<<"You broke?";exit(0);
					}
				cout<<endl
					<<endl
					<<"Name: " <<setw(26) <<people.name <<endl
					<<"Address: " <<setw(23) <<people.address<<endl
					<<"City: " <<setw(26) <<people.city<<endl
					<<"Phone number: " <<setw(18)<<people.phone<<endl
					<<"Account balance: " <<setw(15) <<people.balance<<endl
					<<"Last payment date: " <<setw(13) <<people.payDate<<endl;
					askSave(more, people);
					break;
		
		case 6 : cout<<"Last payment date: "; cin>>people.payDate; 
					if(people.payDate<0 || people.payDate>31){
					cout<<"Input Error";exit(0);
					}
				cout<<endl
					<<endl
					<<"Name: " <<setw(26) <<people.name <<endl
					<<"Address: " <<setw(23) <<people.address<<endl
					<<"City: " <<setw(26) <<people.city<<endl
					<<"Phone number: " <<setw(18)<<people.phone<<endl
					<<"Account balance: " <<setw(15) <<people.balance<<endl
					<<"Last payment date: " <<setw(13) <<people.payDate<<endl;
					askSave(more, people);
					break;
	}
}

void askSave(char more, account people){
	do{
		cout<<"Save (y/n)? "; cin>>more;
		}while(more!='y' && more!='n');
		if(more=='y'){
			cout<<"Thanks for registering";exit(0);
		}
		else{
			revise(people, more);
		}
}
