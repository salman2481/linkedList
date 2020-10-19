//The nodeClass to serve the nodes that act as LIST objects

#include<iostream>
#include<fstream>
using namespace std;

class cNode {
    //data members
	int data;
public:
    //reference to nextNode of list
	cNode *nextNode;

    //Constructors
	cNode() { data = 0; nextNode = NULL; }
	cNode(int number) { data = number; nextNode = NULL; }

    //Constructors for File Handling
	cNode(ifstream &inFile) { inFile.read((char*)this, sizeof(this)); }
	cNode(ofstream &oFile) { oFile.write((char*)this, sizeof(this)); }
	
    //Functions for File Handling
	void writeNodetoFile(ofstream &outData) { outData.write((char*)this, sizeof(this)); }
	void readNodefromFile(ifstream &inData) { inData.read((char*)this, sizeof(this)); }

    //Getter Setters
	int getData() { return data; }
	void setData(int numb) { data = numb; }
	
    //Printing Node Data
    void printNode() { cout << data; }
};
#pragma once

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
