#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPermutation(string str1, string str2)
{
	int n1 = str1.length();
	int n2 = str2.length();
	
	if(n1 != n2)
		return false;
		
	sort(str1.begin() , str1.end());
	sort(str2.begin() , str2.end());

	for(int i=0; i<n1; i++)
	{
		if(str1[i] != str2[i])
			{
				return false;
				break;
			}
	}
	return true;
	
}
int main()
{

	char str1[100];
	char str2[100];
	cin>>str1>>str2;
	
	cout << (isPermutation(str1, str2) ? "true" : "false");
}
