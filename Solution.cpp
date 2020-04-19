#include <iostream>
using namespace std;

int palindromic(int a[],int n)
{
int i=0, j=n-1;
int count=0;
while(i<=j)
{
if(a[i]==a[j])
{
i++;j--;
}
else if(a[i]>a[j])
{
j--;
a[j]+=a[j+1];
count++;
}
else
{
i++;
a[i]+=a[i-1];
count++;
}
}
cout<<count<<endl; }

int main() {
	//code
	int t;
	cin >> t;
	
	while(t--)
	{
	    int num;
	    cin >> num;
	    int a[num];
	    for(int i=0; i<num; i++) cin >> a[i];
	    
	    palindromic(a,num);
	}
	return 0;
}