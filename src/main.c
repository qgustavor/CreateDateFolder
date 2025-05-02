#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;

    time_t t = time(NULL);
    struct tm tm;
    localtime_s(&tm, &t);

    char dateFolder[16];
    snprintf(dateFolder, sizeof(dateFolder), "%02d-%02d-%02d",
             tm.tm_year % 100, tm.tm_mon + 1, tm.tm_mday);

    char fullPath[MAX_PATH];
    snprintf(fullPath, sizeof(fullPath), "%s\\%s", argv[1], dateFolder);

    if (!CreateDirectoryA(fullPath, NULL)) {
        if (GetLastError() != ERROR_ALREADY_EXISTS) return 1;
    }

    return 0;
}
