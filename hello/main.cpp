#include <windows.h>

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow) {
    MessageBox(NULL, "Hello, World!", "My first GUI", MB_OK);
    return 0;
}