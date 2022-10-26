# ShowSecondsInSystemClock
This tool allows you to enable seconds in system clock

![Screenshot_2022-10-41-06-19-05-51-379](https://user-images.githubusercontent.com/89962566/194375329-ca99c25e-7967-4294-a770-b9041b7ae117.png)

# Command Prompt
Enable: reg add HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Advanced /v ShowSecondsInSystemClock /t REG_dword /d 1 /f

Disable: reg add HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Advanced /v ShowSecondsInSystemClock /t REG_dword /d 0 /f

# [Download x86_64 Binary](https://github.com/Svyatik-Bak/ShowSecondsInSystemClock/releases/download/1.2/ShowSecondsInSystemClock.exe)
# [Download Source Code](https://github.com/Svyatik-Bak/ShowSecondsInSystemClock/archive/refs/tags/1.2.zip)

# Used
Compiler: MinGW
```gcc main.c icon.o -o ShowSecondsInSystemClock.exe -municode```
[SB_registry.h](https://github.com/Svyatik-Bak/SB_registry.h)
