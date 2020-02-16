#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    
    string ar[]={"one","two","three","four","five","six","seven","eight","nine"};
    if(a>=1 && a<=9)
    {
    	cout<<ar[a-1]<<endl;
	}
	else
	{
		cout<<"Greater than 9"<<endl;
	}
	
}
