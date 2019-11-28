// 2019051_t2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int x;
	char arr[100];
	ofstream fout;
      fout.open("sample.text",ios::out);
	  if(fout){
		  cout << "enter your name:";
		  cin>>arr;
		  cout << "\nenter your age:";
		  cin >> x;
		  fout  << arr  << x;
	  }
	 
}

