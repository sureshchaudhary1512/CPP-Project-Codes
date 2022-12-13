#include<iostream>
using namespace std;

int main()
{
	int i,n,count=0;
	cout<<"Enter the Number : ";
	cin>>n;
	    
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
		    count++;
	    }
    } 
    	
	if(count==2)
		cout<<"Prime Number"<<endl;
	else
		cout<<"Not a Prime Number"<<endl; 
			    
	return 0;
	    
}