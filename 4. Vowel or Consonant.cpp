#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character to check vowel or not: ";
	cin>>ch;
	if(ch=='a' | ch=='A' | ch=='e'| ch=='E'| ch=='i'| ch=='I'| ch=='o'| ch=='O'| ch=='u' | ch=='U')	
	cout<<ch<<" is a Vowel";
	else
	cout<<ch<<" is a Consonant";
	return 0;
}
