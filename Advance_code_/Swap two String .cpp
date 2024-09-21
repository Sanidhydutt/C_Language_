#include<iostream>
#include<string.h>
using namespace std;

int main() {

 char str1[25],str2[25], tmp[25];
 cout << "\n Enter two string :::";
 cin >> str1 >> str2;

 cout << "\n String Before Swapping are :::\n";
 cout << "1. " << str1 << " , 2." << str2;

strcpy( tmp, str1);
strcpy( str1, str2);
strcpy( str2, tmp);

cout << "\n String After Swapping are :::\n";
 cout << "1. " << str1 << " , 2." << str2;




return 0;
}
