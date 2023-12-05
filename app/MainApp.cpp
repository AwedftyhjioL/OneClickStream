//
// Created by Y on 2023/11/18.
//

#include "MainApp.h"

#include <wx/image.h>
#include <wx/intl.h>
#include <wx/uilocale.h>

#include "../gui/MainFrame.h"

bool MainApp::OnInit()
{
    /*Localize(Language::kSimplifiedChinese);*/
    /*wxLocale* locale = new wxLocale(wxLANGUAGE_ENGLISH);*/
    /*wxLocale* locale = new wxLocale(wxLANGUAGE_DEFAULT);*/
    
    /*wxLocale* locale = new wxLocale(wxLANGUAGE_CHINESE_CHINA);
    locale->AddCatalogLookupPathPrefix(wxT("./locales"));
    if(!locale->AddCatalog(wxT("zh_CN")))
    {
        wxMessageBox(_("Failed to AddCatalog zh_CN"), "wxLocale", wxOK | wxICON_INFORMATION);
    }*/
    
    /*if(!locale->AddCatalog(wxT("en")))
    {
        wxMessageBox(_("Failed to AddCatalog en"), "wxLocale", wxOK | wxICON_INFORMATION);
    }*/
    
    wxLocale* locale = new wxLocale(wxLANGUAGE_JAPANESE);
    locale->AddCatalogLookupPathPrefix(wxT("./locales"));
    if(!locale->AddCatalog(wxT("ja")))
    {
        wxMessageBox(_("Failed to AddCatalog ja"), "wxLocale", wxOK | wxICON_INFORMATION);
    }
    
    
    /*wxUILocale::UseDefault();
    wxLocale::AddCatalogLookupPathPrefix("./locales");
    
    // 创建wxTranslations对象并加载翻译
    auto translations = new wxTranslations();
    translations->AddCatalog("zh_CN");
    wxTranslations::Set(translations);*/
    
    InitializeAllImageHandlers();
    ShowMainFrame(true);
    return true;
    
}

/*void MainApp::Localize(Language l)
{
    
    wxUILocale::UseDefault();
    wxLocale::AddCatalogLookupPathPrefix("/locales");
    
    // 创建wxTranslations对象并加载翻译
    auto translations = new wxTranslations();
    translations->AddCatalog("zh_CN");
    wxTranslations::Set(translations);
}*/

void MainApp::ShowMainFrame(bool is_show)
{
    MainFrame *frame = new MainFrame(nullptr);
    frame->Show(is_show);
}

void MainApp::InitializeAllImageHandlers()
{
    wxInitAllImageHandlers();
}