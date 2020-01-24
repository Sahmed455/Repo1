#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
//#include<fstream.h>
#include<stdlib.h>

using namespace std;

int main()
{
	//clrscr();
	ifstream ifile;
	char fname[20];
	string temp;
	string s[100];
	int line_No=0;
	cout<<"Enter file name to read and display its content (like file.txt) : ";
	cin>>fname;
	ifile.open(fname);
	if(!ifile)
	{
		cout<<"Error in opening file..!!";
		//getchar(" ");
		exit(0);
	}
	int i=0;
	while(ifile.eof()==0)
	{
        //ifile>>s;
        	//ifile>>temp;
        	getline(ifile,temp);
        	//cout<<temp<<"\n";
        	s[i++].append(temp);
        	line_No++;
        	//getchar(" ");
        	
        //cout<<s<<" ";
	}
	for(i=0;i<line_No;i++)
	{
		cout<<s[i]<<endl;
	}
	//cout<<s[i];
	//getchar(" ");
	cout<<"\n";
	ifile.close();
	//getch();
return 0;
}
