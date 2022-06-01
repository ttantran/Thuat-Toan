#include<bits/stdc++.h>
using namespace std;

int n,k, X[100];
void Try(int i)//xay dung bit thu i cho xau nhi phan
{
	for(int j=0; j<=1;j++)
	{
		X[i]=j;
		if(i == n)
		{
			for(int i=1; i<=n ; i++)
			cout <<X[i] ;
			cout << endl;
		}
		else{
			Try(i+1);
		}
	}
	
}
//X[i-1]<X[i] <=n-k+i
void Try2(int i) //to hop chap k cua n
{
	for(int j=X[i-1]+1;j<=n-k+i;j++)
	{
		X[i]=j;
		if(i==k)
		{
			for(int i=1;i<=k;i++)
			{
				cout <<X[i];
			}
			cout << endl;
		}
		else{
			Try2(i+1);
		}
	}
}

bool used[100];
//used[i] == true: trong cau hinh hien tai chua i
//used[i] == false: gia tri hien tai chua su dung i

void Try3(int i)//hoan vi n phan tu
{
	for(int j=1; j<=n; j++)
	{
		if(used[j]==false)
		{
			//gia tri j chua duoc gan cho cac phan tu X[1]->X[i-1]
			X[i]=j;
			used[j]=true;
		    if(i==n)
		    {
			    for(int i=1; i<=n;i++) cout <<X[i];
			    cout << endl;
		    }
		    else{
			    Try3(i+1);
		    }
		    used[j] = false;
		}
	}
}
int main()
{
    cin >> n;
    Try3(1);
}
