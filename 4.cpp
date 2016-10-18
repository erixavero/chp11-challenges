#include<iostream>
#include<iomanip>
using namespace std;

struct weather{
	float rainfall;
	float hiTemp;
	float loTemp;
	float avgTemp;
};

void input(weather []);
void annualAvg(weather []);
void sortMin(weather []);
void sortMax(weather []);

int main(){
	weather mnth[12];
	
	input(mnth);
	annualAvg(mnth);
	
	sortMax(mnth);
	sortMin(mnth);
	
return 0;}

void input(weather mnth[]){
	for(int i=0; i<12;i++){
		cout<<"month: " <<i+1 <<endl
			<<"rainfall: "; cin>>mnth[i].rainfall;
		cout<<"high Temp: "; cin>>mnth[i].hiTemp;
		cout<<"low Temp: "; cin>>mnth[i].loTemp;
		mnth[i].avgTemp= (mnth[i].hiTemp+mnth[i].loTemp)/2;
		if(mnth[i].rainfall<0 || mnth[i].hiTemp<0 || mnth[i].loTemp<0){
			cout<<"Invalid input";break;
		}
		else{
		cout<<"average Temp: "; cout<<mnth[i].avgTemp <<endl;
		}
	}
cout<<endl;}

void annualAvg(weather mnth[]){
	double annualRain, annualTemp;
	for(int i=0;i<12;i++){
		annualRain += mnth[i].rainfall;
		annualTemp += mnth[i].avgTemp;
	}
	cout<<fixed <<setprecision(2);
	cout<<"Total rain: " <<annualRain<<endl
		<<"Average annual rain: " <<annualRain/12<<endl
		<<"Average annual temp: " <<annualTemp/12;
cout<<endl;}

void sortMax(weather mnth[]) {
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < 11; startScan++) {
        minIndex = startScan;
        minValue = mnth[startScan].hiTemp;
        for(int index = startScan + 1; index < 12; index++) {
            if (mnth[index].hiTemp < minValue) {
                minValue = mnth[index].hiTemp;
                minIndex = index;
            }
        }
        mnth[minIndex].hiTemp = mnth[startScan].hiTemp;
        mnth[startScan].hiTemp = minValue;
    }
    cout<<"All time high: " <<minValue <<" month ";
    for(int i=0; i<12;i++){
    	if(mnth[i].loTemp==minValue){
    		cout<<i+1 <<endl;
		}
	}
}

void sortMin(weather mnth[]) {
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < 11; startScan++) {
        minIndex = startScan;
        minValue = mnth[startScan].loTemp;
        for(int index = startScan + 1; index < 12; index++) {
            if (mnth[index].loTemp > minValue) {
                minValue = mnth[index].loTemp;
                minIndex = index;
            }
        }
        mnth[minIndex].loTemp = mnth[startScan].loTemp;
        mnth[startScan].loTemp = minValue;
    }
    cout<<"All time low: " <<minValue <<" month ";
    for(int i=0; i<12;i++){
    	if(mnth[i].loTemp==minValue){
    		cout<<i+1 <<endl;
		}
	}
}
