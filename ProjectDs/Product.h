
#pragma once

#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Product
{
	int id;
	string name;
	string category;
	float price;
	int sellerId;
    public :
	float rate;
	vector<int>rates;
	static int productNum;
	Product(string name, string category, float price, int sellerId);
	string getcategory();
	string getname();
	int getid();
};

