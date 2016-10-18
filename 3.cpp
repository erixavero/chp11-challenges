#include<iostream>

using namespace std;

struct division{
	float firstQ;
	float secondQ;
	float thirdQ;
	float fourthQ;
	float annualSales;
	float avgSales;
};

void input(division);

int main(){
	division east;
	east.firstQ;
	east.secondQ;
	east.thirdQ;
	east.fourthQ;
	east.annualSales;
	east.avgSales;
	
	division west;
	west.firstQ;
	west.secondQ;
	west.thirdQ;
	west.fourthQ;
	west.annualSales;
	west.avgSales;
	
	division north;
	north.secondQ;
	north.secondQ;
	north.thirdQ;
	north.fourthQ;
	north.annualSales;
	north.avgSales;
	
	division south;
	south.secondQ;
	south.secondQ;
	south.thirdQ;
	south.fourthQ;
	south.annualSales;
	south.avgSales;
	
	input(east);
	
	input(west);
	
	input(north);
	
	input(south);
	
return 0;}

void input(division side){
	cout<<endl<<"Quarterly Sales" <<endl
		<<"Enter first quarter: "; cin>>side.firstQ;
	cout<<"Enter second quarter: "; cin>>side.secondQ;
	cout<<"Enter third quarter: "; cin>>side.thirdQ;
	cout<<"Enter fourth quarter: "; cin>>side.fourthQ;
	side.annualSales= side.firstQ+side.secondQ+side.thirdQ+side.fourthQ;
	side.avgSales= side.annualSales/4;
	if(side.firstQ<0 || side.secondQ<0 || side.thirdQ<0 || side.fourthQ<0){
		cout<<"Invalid input";
	}
	else{
		cout<<"Annual sale: "<<side.annualSales<<endl
			<<"Average sale: " <<side.avgSales;
	}
}
