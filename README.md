# ShowSecondsInSystemClock
This tool allows you to enable seconds in system clock

![Screenshot_2022-08-35-25-17-37-24-109](https://user-images.githubusercontent.com/89962566/186708945-92e6903b-982c-47e1-8ee6-de47c444d251.png)

#Command Prompt
Enable: reg add HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Advanced /v ShowSecondsInSystemClock /t REG_dword /d 1 /f
Disable: reg add HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows\CurrentVersion\Explorer\Advanced /v ShowSecondsInSystemClock /t REG_dword /d 0 /f
