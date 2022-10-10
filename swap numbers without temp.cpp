#include <iostream>
using namespace std;

int main()
{	
	int a,b;
	cin>>a>>b;
	 cout<<"Unswaped-->\n";
	 cout<<"a: "<<a<<"\nb: "<<b<<endl;
	 
	 // add both and put on a
	 a=a+b;
	 // change b by subtract b from total
	 b=a-b;
	 // change a by subtract swaped b from total
	 a=a-b;
	 cout<<"Swaped-->\n";
	 cout<<"a: "<<a<<"\nb: "<<b<<endl;
	 
	return 0;
}
