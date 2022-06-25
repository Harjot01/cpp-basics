// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ofstream out("test.txt");
	for (int i = 0; i < 100; i++)
	{
		out<<i;
		out.flush();
	}
	
	cout<<"I am Done";
	out.close();
	return 0;
}