#include<iostream>
#include<fstream>
using namespace std;
int main(){
int n;
cout<<"Enter no. of students\n";
	cin>>n;
             ofstream fout;
	fout.open("record.txt");
	cout<<"Enter the Detail of students : "<<endl;
	for(int i=0;i<n;i++){
		string name,branch;
		int mis;
		cout<<"Enter the Detail of student : "<<i+1<<"\n"<<"Name : ";
		cin>>name;
		cout<<"Branch : ";
		cin>>branch;
		cout<<"MIS NO. : ";
		cin>>mis;
		fout<<"\t\t\t\tDetail of student "<<i+1<<"\n";
		fout<<"Name : "<<name<<"\n";
		fout<<"Branch : "<<branch<<"\n";
		fout<<"MIS No. : "<<mis<<"\n";}}

