#include <stdio.h>
int i;
int main()
{
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
		case 1:system("reg add HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced /v ShowSecondsInSystemClock /t REG_dword /d 1 /f"); break;
		case 2:system("reg add HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced /v ShowSecondsInSystemClock /t REG_dword /d 0 /f"); break;
		case 3:system("taskkill /f /im explorer.exe & start explorer.exe"); break;
		case 4:exit(1); break;
		default: printf("Please write the correct number\n"); break;
		}
	}
		
}