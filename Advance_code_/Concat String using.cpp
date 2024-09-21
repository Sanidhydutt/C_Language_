#include<iostream>
#include<string.h>
using namespace std;

int main(){

char name[60];

strcpy(name,"Be");
strcat(name,"");
strcat(name,"The");
strcat(name,"");
strcat(name,"Developer");


cout << "\n The String is = " << name;

 return 0;
}
