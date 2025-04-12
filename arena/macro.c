#include <windows.h>
#include <stdio.h>

void pressKey(WORD key) {
    keybd_event(key, 0, 0, 0);  // Press key
    keybd_event(key, 0, KEYEVENTF_KEYUP, 0);  // Release key
}

int main() {
    printf("Hold CONTROL to spam Left & Right arrows...\n");

    while (1) {
        if (GetAsyncKeyState(VK_SHIFT) & 0x8000) {  // CTRL is being held
            pressKey(VK_LEFT);
            Sleep(100);
            pressKey(VK_DOWN);
            Sleep(100);
        } else {
            Sleep(10);  // Reduce CPU usage when not active
        }
    }
    
    return 0;
}
