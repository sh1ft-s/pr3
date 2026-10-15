#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    wchar_t callsign[100];

    wscanf(L"%ls", callsign);

    wprintf(L"Агент %ls авторизован в системе\n", callsign);

    return 0;
}