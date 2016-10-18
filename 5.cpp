#include<iostream>
#include<iomanip>
using namespace std;

enum month {
		JAN, FEB, MAR, APR, MAY, JUN, JUL,
		AUG, SEP, OCT, NOV, DEC
	};

struct weather{
	float rainfall;
	float hiTemp;
	float loTemp;
	float avgTemp;
};

void input(weather [], month);
void annualAvg(weather []);
void sortMin(weather [], month);
void sortMax(weather [], month);
void displayMonth(month);

int main(){
	month weatherCheck;
	
	weather mnth[12];
	
	input(mnth, weatherCheck);
	annualAvg(mnth);
	
	sortMax(mnth, weatherCheck);
	sortMin(mnth, weatherCheck);
	
return 0;}

void input(weather mnth[], month weatherCheck){
	for(weatherCheck=JAN; weatherCheck<= DEC ; weatherCheck= static_cast<month>(weatherCheck+1)){
		cout<<"month: "; displayMonth(weatherCheck) ;cout<<endl
			<<"rainfall: "; cin>>mnth[weatherCheck].rainfall;
		cout<<"high Temp: "; cin>>mnth[weatherCheck].hiTemp;
		cout<<"low Temp: "; cin>>mnth[weatherCheck].loTemp;
		mnth[weatherCheck].avgTemp= (mnth[weatherCheck].hiTemp+mnth[weatherCheck].loTemp)/2;
		if(mnth[weatherCheck].rainfall<0 || mnth[weatherCheck].hiTemp<0 || mnth[weatherCheck].loTemp<0){
			cout<<"Invalid input";break;
		}
		else{
		cout<<"average Temp: "; cout<<mnth[weatherCheck].avgTemp <<endl;
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

void sortMax(weather mnth[],month weatherCheck) {
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
    for(weatherCheck=JAN ; weatherCheck<=DEC ; weatherCheck= static_cast<month>(weatherCheck+1)){
    	if(mnth[weatherCheck].loTemp==minValue){
    		displayMonth(weatherCheck); cout<<" ";
		}
	}
}

void sortMin(weather mnth[],month weatherCheck) {
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
    cout<<endl
	 <<"All time low: " <<minValue <<" month ";
    for(weatherCheck=JAN ; weatherCheck<=DEC ; weatherCheck= static_cast<month>(weatherCheck+1)){
    	if(mnth[weatherCheck].loTemp==minValue){
    		displayMonth(weatherCheck); cout<<" ";
		}
	}
}

void displayMonth(month name){
	switch(name){
		case JAN : cout<<"JAN";break;
		case FEB : cout<<"FEB";break;
		case MAR : cout<<"MAR";break;
		case APR : cout<<"APR";break;
		case MAY : cout<<"MAY";break;
		case JUN : cout<<"JUN";break;
		case JUL : cout<<"JUL";break;
		case AUG : cout<<"AUG";break;
		case SEP : cout<<"SEP";break;
		case OCT : cout<<"OCT";break;
		case NOV : cout<<"NOV";break;
		case DEC : cout<<"DEC";break;
	}
}
