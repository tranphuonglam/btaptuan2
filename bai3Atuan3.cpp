#include<iostream>
using namespace std;
int main()
{/*
	 khai bao 1
	 a
	char daytab[2][12] = {
 {31,28,31,30,31,30,31,31,30,31,30,31},
 {31,29,31,30,31,30,31,31,30,31,30,31}
}; 
//b
char daytab[2][12] = {
 {31,28,31,31,30,31,31,30,31,30,31},
 {31,29,31,30,31,31,30,31,30,31}
};
//c
char daytab[][] = {
 {31,28,31,30,31,30,31,31,30,31,30,31},
 {31,29,31,30,31,30,31,31,30,31,30,31}
};
for(int i=0;i<2;i++)
{
	for(int j=0;j<12;j++)
	cout << daytab[i][j] << "\t";
	cout << "\n";
}
//khai bao 2
//a
char daytab[2][12] = {
 31,28,31,30,31,30,31,31,30,31,30,31,
 31,29,31,30,31,30,31,31,30,31,30,31
}; 
//b
char daytab[2][12] = {
 31,28,31,31,30,31,31,30,31,30,31,
 31,29,31,30,31,31,31,30,31,30,31
};*/
//c
char daytab[][] = {
 31,28,31,30,31,30,31,31,30,31,30,31,
 31,29,31,30,31,30,31,31,30,31,30,31
};
for(int i=0;i<2;i++)
{
	for(int j=0;j<12;j++)
	cout << daytab[i][j] << "\t";
	cout << "\n";
}
}
