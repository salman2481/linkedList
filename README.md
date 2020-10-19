This program deals with Linked List Data Structure with all definitions of class constructors and member functions.</br>Holds code for FILE Handling too.

#include <iostream>
#include<string.h>
#include<ctype.h>
#define MAX 20
using namespace std;
int main()
{
	double number;
	number=5.1;
	cout <<number<<endl;
int	size =sizeof(number);
	cout<<size<<endl<<endl<<endl;
	char name[MAX];
	int x;
	cout <<"enter name:"<<endl;
	cin>>name;
	for(int x;x<strlen(name);x++)
	{
		name[x]=tolower(name[x]);
		
	}
	cout<<endl<<name<<endl;
	int v;
	for(int v=20;v> 1;v--)
	{
		cout<<v<<endl;
	}
	
	return 0;
}
