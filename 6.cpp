#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct soccer{
	string name;
	int num;
	int score;
};

void input(soccer []);
void table(soccer []);

int main(){
	soccer player[12];
	
	input(player);
	table(player);
	
return 0;}

void input(soccer player[]){
	for(int i=0;i<12;i++){
		cout<<"First name: "; cin>>player[i].name;
		cout<<"Number: "; cin>>player[i].num;
		cout<<"score: "; cin>>player[i].score;
		if(player[i].num<0 || player[i].score<0){
			cout<<"Invalid input";break;
		}
	}
}

void table(soccer player[]){
	
	for(int i=0;i<12;i++){
		cout<<player[i].name <<setw(50) <<player[i].num <<setw(50) <<player[i].score <<endl;
	}
}
