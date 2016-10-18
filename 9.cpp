#include<iostream>
#include<iomanip>
using namespace std;

struct monthlyInput{
int housing,
	 utilities,
	 household,
	 transport,
	 food,
	 medic,
	 insurance,
	 entertainment,
	 clothing,
	 misc,
	 total;
};

struct monthlyBudget{
const int housing= 500,
	 utilities= 150,
	 household= 65,
	 transport= 50,
	 food= 250,
	 medic= 30,
	 insurance= 100,
	 entertainment= 150,
	 clothing= 75,
	 misc= 50,
	 total= 500+150+65+50+250+30+100+150+75+50;
};

void input(monthlyInput);
void compare(monthlyInput, monthlyBudget);

int main(){
	cout<<"MONTHLY EXPENSES" <<endl;
	monthlyInput pay;
	monthlyBudget plan;
	input(pay);
	compare(pay, plan);
	
return 0;}

void input(monthlyInput pay){
	cout<<"Housing: "; cin>>pay.housing;
	cout<<"Utilities: "; cin>>pay.utilities;
	cout<<"Household: "; cin>>pay.household;
	cout<<"Transportation: "; cin>>pay.transport;
	cout<<"Food: "; cin>>pay.food;
	cout<<"Medical: "; cin>>pay.medic;
	cout<<"Insurance: "; cin>>pay.insurance;
	cout<<"Entertainment: "; cin>>pay.entertainment;
	cout<<"Clothing: "; cin>>pay.clothing;
	cout<<"Miscellaneous: "; cin>>pay.misc;
	if(pay.housing<0 || pay.utilities<0 || pay.household<0 || pay.transport<0 || pay.food<0 || pay.medic<0 || pay.insurance<0 || pay.entertainment<0 || pay.clothing<0 || pay.misc<0){
		cout<<"Wow you broke!"; exit(0);
	}
	else{
	pay.total= pay.housing + pay.utilities + pay.household + pay.transport + pay.food + pay.medic + pay.insurance
				+ pay.entertainment + pay.clothing + pay.misc;
	}
}

void compare(monthlyInput pay, monthlyBudget plan){
	cout<<"Housing-- Expectation: " <<plan.housing <<setw(12) <<"Reality: " <<pay.housing;
	if(plan.housing>pay.housing){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.housing==pay.housing){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
	
	cout<<"Utilities-- Expectation: " <<plan.utilities <<setw(12) <<"Reality: " <<pay.utilities;
	if(plan.utilities>pay.utilities){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.utilities==pay.utilities){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
	
	cout<<"Household-- Expectation: " <<plan.household <<setw(12) <<"Reality: " <<pay.household;
	if(plan.household>pay.household){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.household==pay.household){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
	
	cout<<"Transportation-- Expectation: " <<plan.transport <<setw(12) <<"Reality: " <<pay.transport;
	if(plan.transport>pay.transport){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.transport==pay.transport){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
	
	cout<<"Food-- Expectation: " <<plan.food <<setw(12) <<"Reality: " <<pay.food;
	if(plan.food>pay.food){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.food==pay.food){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
	
	cout<<"Medical-- Expectation: " <<plan.medic <<setw(12) <<"Reality: " <<pay.medic;
	if(plan.medic>pay.medic){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.medic==pay.medic){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
	
	cout<<"Insurance-- Expectation: " <<plan.insurance <<setw(12) <<"Reality: " <<pay.insurance;
	if(plan.insurance>pay.insurance){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.insurance==pay.insurance){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
	
	cout<<"Entertainment-- Expectation: " <<plan.entertainment <<setw(12) <<"Reality: " <<pay.entertainment;
	if(plan.entertainment>pay.entertainment){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.entertainment==pay.entertainment){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
	
	cout<<"Clothing-- Expectation: " <<plan.clothing <<setw(12) <<"Reality: " <<pay.clothing;
	if(plan.clothing>pay.clothing){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.clothing==pay.clothing){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
	
	cout<<"Misc-- Expectation: " <<plan.misc <<setw(12) <<"Reality: " <<pay.misc;
	if(plan.misc>pay.misc){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.misc==pay.misc){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
	
	cout<<"Total-- Expectation: " <<plan.total <<setw(12) <<"Reality: " <<pay.total;
	if(plan.total>pay.total){
		cout<<" Underbudget"<<endl;
	}
	else if(plan.total==pay.total){
		cout<<" Jackpot!"<<endl;
	}
	else{
		cout<<" Overbudget"<<endl;
	}
}
