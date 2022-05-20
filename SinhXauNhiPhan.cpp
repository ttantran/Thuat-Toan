#include<iostream>
using namespace std;

//Khoi tao cau hinh dau tien
//while(<khi chua phai cau hinh cuoi cung>)
// {
//     In ra cau lenh hien tai
//     sinh ra cau hinh tiep theo
// }

int n,k, a[100],ok;
void ktao()
{
    for(int i=1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void sinh(){
    //Bat dau tu bit cuoi cung, va di tim bit 0 dau tien
    int i= n;
    while(i>=1 && a[i]==1)
    {
        a[i]=0;
        --i;
    }
    if(i==0)
    {
        ok=0;//cau hinh cuoi cung
    }
    else{
        a[i]=1;
    }
}

//xau 
bool check()
{
    int cnt=0;
    for(int i=1; i <= n; i++)
    {
        cnt+=a[i];
    }
    return cnt == k;
}
int main(){
    cin >> n;
    ok=1;
    ktao();
    while(ok)
    {
        for(int i=1; i<=n ;i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}