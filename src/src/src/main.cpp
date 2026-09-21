#include <Windows.h>
#include "main.h"
#include "menu.h"

void AbzzModzMain()
{
    AbzzModz::Initialize();

    while (true)
    {
        AbzzModz::Update();
        WAIT(0);
    }
}

BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD reason,
    LPVOID reserved)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);
        scriptRegister(hModule, AbzzModzMain);
    }
    else if (reason == DLL_PROCESS_DETACH)
    {
        scriptUnregister(hModule);
    }

    return TRUE;
}
