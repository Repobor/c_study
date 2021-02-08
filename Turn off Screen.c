#include <windows.h>

int main(){
    //SendMessageA(-1,0x0112,0xF170,2);
    PostMessage(HWND_BROADCAST,WM_SYSCOMMAND,SC_MONITORPOWER,2);
    return 0;
}