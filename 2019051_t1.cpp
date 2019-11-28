// 2019051_t1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	ofstream fout;
	fout.open("sample.text", ios::out);
	cout << "writing in file" << endl;
	if (fout) {
		for (int a = 0; a < 6; a++) {
			fout << arr[a] << " ";
		}fout.close();
	}
	else {
		cout << "error";
	} 
	ifstream retrive;
	 retrive.open("sample.text",ios::in);
	cout << "retrived array is:" << endl;
	int arr2[5];
	if (retrive) {
		for (int b = 0; b < 6; b++) {
			retrive >> arr[b];
			cout << arr[b];
		}
	} ifstream sum;
	sum.open("sample.text",ios::app)



}

