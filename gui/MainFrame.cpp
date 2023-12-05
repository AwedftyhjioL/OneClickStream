///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.0.0-0-g0efcecf)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MainFrame.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxFrame( parent, id, title, pos, size, style, name )
{
	this->SetSizeHints( wxSize( 600,300 ), wxDefaultSize );
	this->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	this->SetBackgroundColour( wxColour( 52, 53, 65 ) );

	m_menubar1 = new wxMenuBar( 0|wxBORDER_THEME );
	m_menubar1->SetForegroundColour( wxColour( 60, 63, 65 ) );
	m_menubar1->SetBackgroundColour( wxColour( 60, 63, 65 ) );

	m_menu_General = new wxMenu();
	m_menu_Load = new wxMenu();
	wxMenuItem* m_menu_LoadItem = new wxMenuItem( m_menu_General, wxID_ANY, _("Load"), wxEmptyString, wxITEM_NORMAL, m_menu_Load );
	wxMenuItem* m_menu_load_settings;
	m_menu_load_settings = new wxMenuItem( m_menu_Load, wxID_ANY, wxString( _("Load Settings") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_Load->Append( m_menu_load_settings );

	m_menu_General->Append( m_menu_LoadItem );

	m_menu_export = new wxMenu();
	wxMenuItem* m_menu_exportItem = new wxMenuItem( m_menu_General, wxID_ANY, _("Export"), wxEmptyString, wxITEM_NORMAL, m_menu_export );
	wxMenuItem* m_menuItem_export_settings;
	m_menuItem_export_settings = new wxMenuItem( m_menu_export, wxID_ANY, wxString( _("Export Settings") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_export->Append( m_menuItem_export_settings );

	m_menu_General->Append( m_menu_exportItem );

	wxMenuItem* m_menuItem_settings;
	m_menuItem_settings = new wxMenuItem( m_menu_General, wxID_ANY, wxString( _("Settings") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_General->Append( m_menuItem_settings );

	m_menubar1->Append( m_menu_General, _("General") );

	m_menu_help = new wxMenu();
	wxMenuItem* m_menuItem_help;
	m_menuItem_help = new wxMenuItem( m_menu_help, wxID_ANY, wxString( _("Help") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_help->Append( m_menuItem_help );

	wxMenuItem* m_menuItem_donate;
	m_menuItem_donate = new wxMenuItem( m_menu_help, wxID_ANY, wxString( _("Donate") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_help->Append( m_menuItem_donate );

	wxMenuItem* m_menuItem_about;
	m_menuItem_about = new wxMenuItem( m_menu_help, wxID_ANY, wxString( _("About") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_help->Append( m_menuItem_about );

	m_menubar1->Append( m_menu_help, _("Help") );

	this->SetMenuBar( m_menubar1 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, _("Live Settings"), wxPoint( 0,0 ), wxSize( -1,30 ), 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->SetFont( wxFont( 14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, true, wxT("@悠哉字体") ) );
	m_staticText9->SetForegroundColour( wxColour( 217, 217, 227 ) );
	m_staticText9->SetBackgroundColour( wxColour( 52, 53, 65 ) );
	m_staticText9->SetMinSize( wxSize( -1,30 ) );
	m_staticText9->SetMaxSize( wxSize( -1,30 ) );

	bSizer6->Add( m_staticText9, 0, wxALL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );


	bSizer14->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button_language_option = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxBORDER_DEFAULT );
	m_button_language_option->SetLabelMarkup( wxEmptyString );
	m_button_language_option->SetBitmap( wxBitmap( wxT("res/img/Language_24x24.png"), wxBITMAP_TYPE_ANY ) );
	m_button_language_option->SetMinSize( wxSize( 28,28 ) );
	m_button_language_option->SetMaxSize( wxSize( 28,28 ) );

	bSizer14->Add( m_button_language_option, 0, wxALL, 3 );


	bSizer13->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* m_MainArea;
	m_MainArea = new wxBoxSizer( wxHORIZONTAL );


	m_MainArea->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );


	bSizer11->Add( bSizer10, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	bSizer7->SetMinSize( wxSize( -1,40 ) );
	m_staticText6 = new wxStaticText( this, wxID_ANY, _("Channel Category:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@微软雅黑") ) );
	m_staticText6->SetForegroundColour( wxColour( 214, 214, 219 ) );

	bSizer7->Add( m_staticText6, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	wxArrayString m_choice1Choices;
	m_choice1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice1Choices, 0 );
	m_choice1->SetSelection( 0 );
	bSizer7->Add( m_choice1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer11->Add( bSizer7, 1, wxEXPAND|wxFIXED_MINSIZE, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	bSizer8->SetMinSize( wxSize( -1,40 ) );
	m_staticText7 = new wxStaticText( this, wxID_ANY, _("Channel Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@微软雅黑") ) );
	m_staticText7->SetForegroundColour( wxColour( 214, 214, 219 ) );

	bSizer8->Add( m_staticText7, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	wxArrayString m_choice2Choices;
	m_choice2 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,32 ), m_choice2Choices, 0 );
	m_choice2->SetSelection( 0 );
	m_choice2->SetMinSize( wxSize( -1,32 ) );

	bSizer8->Add( m_choice2, 0, wxALIGN_BOTTOM, 5 );


	bSizer11->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	bSizer9->SetMinSize( wxSize( -1,32 ) );

	bSizer9->Add( 0, 0, 0, wxFIXED_MINSIZE, 5 );

	m_button3 = new wxButton( this, wxID_ANY, _("Start Live"), wxPoint( 0,-1 ), wxSize( 32,32 ), wxBU_EXACTFIT );

	m_button3->SetBitmap( wxNullBitmap );
	m_button3->SetFont( wxFont( 13, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("@微软雅黑") ) );
	m_button3->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_button3->SetBackgroundColour( wxColour( 50, 160, 200 ) );
	m_button3->SetMinSize( wxSize( -1,32 ) );
	m_button3->SetMaxSize( wxSize( -1,32 ) );

	bSizer9->Add( m_button3, 0, 0, 5 );


	bSizer11->Add( bSizer9, 1, wxEXPAND, 5 );


	bSizer11->Add( 0, 0, 4, wxEXPAND, 5 );


	m_MainArea->Add( bSizer11, 1, wxEXPAND, 5 );


	m_MainArea->Add( 60, 0, 1, wxEXPAND, 5 );


	bSizer13->Add( m_MainArea, 1, wxEXPAND, 5 );


	bSizer6->Add( bSizer13, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer6 );
	this->Layout();

	this->Centre( wxBOTH );
}

MainFrame::~MainFrame()
{
}
