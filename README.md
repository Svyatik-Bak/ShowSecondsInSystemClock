# ShowSecondsInSystemClock
This tool allows you to enable seconds in system clock

![Screenshot_2022-10-41-06-19-05-51-379](https://user-images.githubusercontent.com/89962566/194375329-ca99c25e-7967-4294-a770-b9041b7ae117.png)

# Command Prompt
Enable: reg add HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Advanced /v ShowSecondsInSystemClock /t REG_dword /d 1 /f

Disable: reg add HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Advanced /v ShowSecondsInSystemClock /t REG_dword /d 0 /f

# Used
Qt: 6.3.1
Compiler: MinGW
[SB_registry.h](https://github.com/Svyatik-Bak/SB_registry.h)
