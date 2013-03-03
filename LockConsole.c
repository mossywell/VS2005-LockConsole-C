#define _WIN32_WINNT 0x0500
#include <Windows.h>

void WinMainCRTStartup(void)
{
	LockWorkStation();
}