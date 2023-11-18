//
// Created by Y on 2023/11/18.
//

#ifndef ONECLICKSTREAM_CPP_MAINAPP_H
#define ONECLICKSTREAM_CPP_MAINAPP_H


#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif



class MainApp : public wxApp
{
public:
    virtual bool OnInit();
    
    void ShowMainFrame(bool is_show);
    
    void InitializeAllImageHandlers();
};



#endif //ONECLICKSTREAM_CPP_MAINAPP_H
