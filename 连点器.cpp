#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main(){
    while(1)
    {
    	if(GetAsyncKeyState(VK_F2))//F2
    	{
    		while(1)
			{
                mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP,0,0,0,0);
                Sleep(10);
                if(GetAsyncKeyState(VK_F4))//F4
				{
					break;
				}
            }
		}
	}
    return 0;
}
