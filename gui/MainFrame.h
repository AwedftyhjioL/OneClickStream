///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.0.0-0-g0efcecf)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/choice.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar1;
		wxMenu* m_menu_General;
		wxMenu* m_menu_Load;
		wxMenu* m_menu_export;
		wxMenu* m_menu_help;
		wxStaticText* m_staticText9;
		wxButton* m_button_language_option;
		wxStaticText* m_staticText6;
		wxChoice* m_choice1;
		wxStaticText* m_staticText7;
		wxChoice* m_choice2;
		wxButton* m_button3;

	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("MainFrame"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,300 ), long style = wxDEFAULT_FRAME_STYLE|wxBORDER_THEME|wxFULL_REPAINT_ON_RESIZE|wxTAB_TRAVERSAL, const wxString& name = wxT("main_window") );

		~MainFrame();

};

