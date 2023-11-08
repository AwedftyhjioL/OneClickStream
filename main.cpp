#include <iostream>

#include "gui/ImguiDemo.h"


int main()
{
    std::cout << "Hello, World!" << std::endl;
    
    Gui::ImguiDemo imgui_test_window;
    imgui_test_window.Run();
    
    return 0;
}
