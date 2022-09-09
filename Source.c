#include <stdio.h>
#include <windows.h>

int i;
int main()
{
	printf("Today is ");
	system("echo %date%");
	printf("\n");
	system("title ShowSecondsInSystemClock");
	printf("Please enter a number\n");
	printf("1. Enable ShowSecondsInSystemClock\n");
	printf("2. Disable ShowSecondsInSystemClock\n");
	printf("3. Restart Explorer\n");
	printf("4. Exit\n");
	
	for (int j = 0; j <= 1024; j+=1)
	{
		scanf_s("%i", &i);
		switch (i)
		{
		case 1: {
			DWORD number = 0x00000001;
			HKEY key;
			if (RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced", 0, KEY_SET_VALUE | KEY_WOW64_64KEY, &key) == ERROR_SUCCESS)
		    if (RegSetValueExW(key, L"ShowSecondsInSystemClock", 0, REG_DWORD, (LPBYTE)&number, sizeof(DWORD)) == ERROR_SUCCESS)
				printf("Value ShowSecondsInSystemClock was changed to 1\n");
			RegCloseKey(key);
		} break;
		case 2: {
			DWORD number = 0x00000000;
			HKEY key;
			if (RegOpenKeyExW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced", 0, KEY_SET_VALUE | KEY_WOW64_64KEY, &key) == ERROR_SUCCESS)
			if (RegSetValueExW(key, L"ShowSecondsInSystemClock", 0, REG_DWORD, (LPBYTE)&number, sizeof(DWORD)) == ERROR_SUCCESS)
		    printf("Value ShowSecondsInSystemClock was changed to 0\n");
			RegCloseKey(key);
		} break;
		case 3:system("taskkill /f /im explorer.exe & start explorer.exe"); break;
        case 4:exit(1); break;
		case 32768: system("cls");
			system("color F2"); 
			printf("Hello World!\n"); break;
		case -32768: for (int j = 0; j <= 1024; j += 1)
		{
			system("title EASTER EGG");
			system("cls");
			printf("Hello World!\n");
			system("color 4F");
			system("color 2F");
			system("color 4F");
			system("color 9F");
		}
		case 9669: for (int j = 0; j <= 1024; j += 1)
		{
			system("title #StopWar");
			system("cls");
			printf("StopWar!\n");
			system("color 96");
		    system("color 69");
		}
		case 100: system("cls"); 
			system("wmic os get version");
			printf("User name: ");
			system("echo %username%");
			printf("Windows folder: ");
			system("echo %windir%");
			printf("\n");
			system("pause");
			exit(1); break;
		default: printf("Please write the correct number\n"); break;
		}
	}
		
}