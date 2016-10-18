#include<iostream>
#include<string>
#include<iomanip>
using namespace std;



struct soccer{
	char name[50];
	int num;
	int score;
};

void input(soccer []);
void table(soccer []);
void scoreCount(soccer []);
void scoreMax(soccer []);

int main(){
	soccer player[12];
	
	input(player);
	table(player);
	scoreCount(player);
	scoreMax(player);
	
return 0;}

void input(soccer player[]){
	for(int i=0;i<12;i++){
		cout<<"Name: "; cin.getline(player[i].name,50);
		cout<<"Number: "; cin>>player[i].num;
		cout<<"score: "; cin>>player[i].score; 
		if(player[i].num<0 || player[i].score<0){
			cout<<"Invalid input";break;
		}cin.ignore();
	}
}

void table(soccer player[]){
	for(int i=0;i<12;i++){
		cout<<player[i].name <<setw(15) <<player[i].num <<setw(15) <<player[i].score <<endl;
	}
}

void scoreCount(soccer player[]){
	double total;
	for(int i=0; i<12;i++){
		total =+ player[i].score;
	}
	cout<<"Total score: " <<total <<endl
		<<"average score: " <<total/12;
	
cout<<endl;}

void scoreMax(soccer player[]) {
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < 11; startScan++) {
        minIndex = startScan;
        minValue = player[startScan].score;
        for(int index = startScan + 1; index < 12; index++) {
            if (player[index].score < minValue) {
                minValue = player[index].score;
                minIndex = index;
            }
        }
        player[minIndex].score = player[startScan].score;
        player[startScan].score = minValue;
    }
    cout<<"High score: " <<minValue;
    for(int i=0;i<12;i++){
    	if(minValue==player[i].score){
    		cout<<" by " <<player[i].name <<" number " <<player[i].num;
		}
	}
}
