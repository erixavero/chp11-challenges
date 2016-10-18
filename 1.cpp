#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct movieData{
	string title;
	string director;
	int yearRls;
	int runTime;
};

void printStruct(movieData);

int main(){
	movieData mov1;
	mov1.title= "50 Shapes of Clay";
	mov1.director= "James Wood";
	mov1.yearRls= 2015;
	mov1.runTime= 90;
	
	movieData mov2;
	mov2.title= "Welcome to Hell";
	mov2.director= "Ronald Stump";
	mov2.yearRls= 2005;
	mov2.runTime= 120;
	
	printStruct(mov1);
	printStruct(mov2);
return 0;}

void printStruct(movieData movie){
	cout<<"Title: "<<movie.title <<endl
		<<"Director: "<<movie.director <<endl
		<<"Release year: "<<movie.yearRls <<endl
		<<"Run time: "<<movie.runTime <<" minutes" <<endl;	
cout<<endl;}
