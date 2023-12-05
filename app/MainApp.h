//
// Created by Y on 2023/11/18.
//

#ifndef ONECLICKSTREAM_CPP_MAINAPP_H
#define ONECLICKSTREAM_CPP_MAINAPP_H


#include <wx/wxprec.h>

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "../basic/enum.h"

class MainApp : public wxApp
{
public:
    virtual bool OnInit();
    
    void Localize(Language l);
    
    void ShowMainFrame(bool is_show);
    
    void InitializeAllImageHandlers();
    
    
private:

};



#endif //ONECLICKSTREAM_CPP_MAINAPP_H
