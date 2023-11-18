//
// Created by Y on 2023/11/18.
//

#include "MainApp.h"

#include <wx/image.h>

#include "../gui/MainFrame.h"

bool MainApp::OnInit()
{
    InitializeAllImageHandlers();
    ShowMainFrame(true);
    return true;
    
}

void MainApp::ShowMainFrame(bool is_show)
{
    MainFrame *frame = new MainFrame(nullptr);
    frame->Show(is_show);
}

void MainApp::InitializeAllImageHandlers()
{
    wxInitAllImageHandlers();
}