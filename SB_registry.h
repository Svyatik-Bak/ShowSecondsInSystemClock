#include <windows.h>

void SRCreateKey(struct HKEY__ *a, LPCSTR b)  //SR = Svyatik Registry
{
  HKEY hKey;
  RegCreateKeyExA(a, b, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL);
}

void SRDeleteKey(struct HKEY__ *a, LPCWSTR b)
{
  HKEY hKey;
  RegCreateKeyExW(a, b, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL);
}

void SRCreateValue_DWORD(struct HKEY__ *a, LPCWSTR b, LPCWSTR v, DWORD c)
{
    HKEY key;
    RegOpenKeyExW(a, b, 0, KEY_SET_VALUE | KEY_WOW64_64KEY, &key);
    RegSetValueExW(key, v, 0, REG_DWORD, (LPBYTE)&c, sizeof(DWORD));
    RegCloseKey(key);
}

void SRCreateValue_STRING(struct HKEY__ *HKEY1, LPCWSTR path, LPCWSTR ValueName, LPCWSTR Value)
{
    HKEY key;
    RegOpenKeyExW(HKEY1, path, 0, KEY_SET_VALUE, &key);
    RegSetValueExW(key, ValueName, 0, REG_SZ, (const BYTE*)Value, (lstrlen(Value)+1) * sizeof(TCHAR));
    RegCloseKey(key);
}
