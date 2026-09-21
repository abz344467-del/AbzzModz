#include <Windows.h>
#include "main.h"
#include "menu.h"

namespace
{
    bool menuOpen = false;
}

namespace AbzzModz
{
    void Initialize()
    {
        menuOpen = false;
    }

    void Update()
    {
        if (GetAsyncKeyState(VK_F5) & 1)
        {
            menuOpen = !menuOpen;
        }

        if (menuOpen)
        {
            // Menu rendering will be added next.
        }
    }
}
