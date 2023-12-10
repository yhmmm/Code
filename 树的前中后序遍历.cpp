#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
struct 
{
    int l=-1,r=-1;
}tree[1001];
void qian(int u)
{
    if(u==-1)
    {
        return;
    }
    cout<<u;
    qian(tree[u].l);
    qian(tree[u].r);
}
void zhong(int u)
{
    if(u==-1)
    {
        return;
    }
    zhong(tree[u].l);
    cout<<u;
    zhong(tree[u].r);
}
void hou(int u)
{
    if(u==0)
    {
        return;
    }
    hou(tree[u].l);
    hou(tree[u].r);
    cout<<u;
}
int main(){

	return 0;
}