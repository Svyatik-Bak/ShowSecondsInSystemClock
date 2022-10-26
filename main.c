#include <stdio.h>
#include "SB_registry.h"

int i;
int wmain()
{
    for (int j = 0; j <= 1024; j+=1)
    {
    system("cls");
	wprintf(L"Today is ");
	system("echo %date%");
	wprintf(L"\n");
	system("title ShowSecondsInSystemClock");
	wprintf(L"Please enter a number\n");
	wprintf(L"1. Enable ShowSecondsInSystemClock\n");
	wprintf(L"2. Disable ShowSecondsInSystemClock\n");
	wprintf(L"3. Restart Explorer\n");
	wprintf(L"4. Exit\n");
	scanf_s("%i", &i);
		switch (i)
		{
        case 1: SRCreateValue_DWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced", L"ShowSecondsInSystemClock", 0x000001); break;
        case 2: SRCreateValue_DWORD(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced", L"ShowSecondsInSystemClock", 0x000000); break;
		case 3:system("taskkill /f /im explorer.exe & start explorer.exe"); break;
        case 4:exit(1); break;
		case 32768: system("cls");
			system("color F2"); 
			wprintf(L"Hello World!\n"); break;
		case -32768: for (int j = 0; j <= 1024; j += 1)
		{
			system("title EASTER EGG");
			system("cls");
			wprintf(L"Hello World!\n");
			system("color 4F");
			system("color 2F");
			system("color 4F");
			system("color 9F");
		}
		case 9669: for (int j = 0; j <= 1024; j += 1)
		{
			system("title #StopWar");
			system("cls");
			wprintf(L"StopWar!\n");
			system("color 96");
		    system("color 69");
		}
		case 100: system("cls"); 
			system("wmic os get version");
			wprintf(L"User name: ");
			system("echo %username%");
			wprintf(L"Windows folder: ");
			system("echo %windir%");
			wprintf(L"\n");
			system("pause");
			exit(1); break;
	    case 34: { 
		system("taskkill /f /im explorer.exe & start explorer.exe");
		getchar(); 
            system("cls"); } break;
		default: wprintf(L"Please write the correct number\n"); break;
		}
	}
		
}
