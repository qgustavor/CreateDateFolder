#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    time_t t = time(NULL);
    struct tm tm;
    localtime_s(&tm, &t);

    char folderName[MAX_PATH];
    snprintf(folderName, sizeof(folderName), "%02d-%02d-%02d",
             tm.tm_year % 100, tm.tm_mon + 1, tm.tm_mday);

    char basePath[MAX_PATH];
    GetModuleFileNameA(NULL, basePath, MAX_PATH);
    char *lastSlash = strrchr(basePath, '\');
    if (lastSlash) *lastSlash = '\0';

    char fullPath[MAX_PATH];
    snprintf(fullPath, sizeof(fullPath), "%s\\%s", basePath, folderName);

    CreateDirectoryA(fullPath, NULL);

    return 0;
}
