///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-110-g61ece364)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifdef WX_PRECOMP

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#else
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "wxfbTest_GUI.h"

#include "../bin/resources/icons/balign.xpm"
#include "../bin/resources/icons/copy.xpm"
#include "../bin/resources/icons/cut.xpm"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_menubar1 = new wxMenuBar( 0 );
	file = new wxMenu();
	wxMenuItem* exit;
	exit = new wxMenuItem( file, ID_EXIT, wxString( wxT("E&xit") ) + wxT('\t') + wxT("Alt+F4"), wxT("Exit the Application"), wxITEM_NORMAL );
	file->Append( exit );

	m_menubar1->Append( file, wxT("&File") );

	help = new wxMenu();
	wxMenuItem* about;
	about = new wxMenuItem( help, ID_ABOUT, wxString( wxT("&About") ) + wxT('\t') + wxT("F1"), wxT("About This Application . . ."), wxITEM_NORMAL );
	help->Append( about );

	m_menubar1->Append( help, wxT("&Help") );

	this->SetMenuBar( m_menubar1 );

	m_statusBar1 = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, ID_DEFAULT );
	m_toolBar1 = this->CreateToolBar( wxTB_HORIZONTAL, ID_DEFAULT );
	m_tool1 = m_toolBar1->AddTool( ID_DEFAULT, wxT("tool"), wxBitmap( copy_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_tool2 = m_toolBar1->AddTool( ID_DEFAULT, wxT("tool"), wxBitmap( cut_xpm ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL );

	m_toolBar1->Realize();

}

MainFrame::~MainFrame()
{
}

MainPanel::MainPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_button1 = new wxButton( this, ID_DEFAULT, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button1, 0, wxALL, 5 );

	m_bpButton1 = new wxBitmapButton( this, ID_DEFAULT, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW|0 );

	m_bpButton1->SetBitmap( wxBitmap( balign_xpm ) );
	bSizer2->Add( m_bpButton1, 0, wxALL, 5 );

	m_textCtrl1 = new wxTextCtrl( this, ID_DEFAULT, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_textCtrl1->HasFlag( wxTE_MULTILINE ) )
	{
	m_textCtrl1->SetMaxLength(  );
	}
	#else
	m_textCtrl1->SetMaxLength(  );
	#endif
	bSizer2->Add( m_textCtrl1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText1 = new wxStaticText( this, ID_DEFAULT, wxT("Unicode Test: Максим Емельянов"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox1 = new wxCheckBox( this, ID_DEFAULT, wxT("Check Me!"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_checkBox1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_comboBox1 = new wxComboBox( this, ID_DEFAULT, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	bSizer2->Add( m_comboBox1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( wxHORIZONTAL, this, wxT("Static Box Sizer") );

	m_listBox1 = new wxListBox( sbSizer1->GetStaticBox(), ID_DEFAULT, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_listBox1->Append( wxT("Test1") );
	m_listBox1->Append( wxT("Test2") );
	sbSizer1->Add( m_listBox1, 0, wxALL|wxEXPAND, 5 );

	wxString m_radioBox1Choices[] = { wxT("Test1"), wxT("Test2") };
	int m_radioBox1NChoices = sizeof( m_radioBox1Choices ) / sizeof( wxString );
	m_radioBox1 = new wxRadioBox( sbSizer1->GetStaticBox(), ID_DEFAULT, wxT("wxRadioBox"), wxDefaultPosition, wxDefaultSize, m_radioBox1NChoices, m_radioBox1Choices, 1, wxRA_SPECIFY_COLS );
	m_radioBox1->SetSelection( 0 );
	sbSizer1->Add( m_radioBox1, 0, wxALL|wxEXPAND, 5 );

	m_grid1 = new wxGrid( sbSizer1->GetStaticBox(), ID_DEFAULT, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid1->CreateGrid( 5, 5 );
	m_grid1->EnableEditing( true );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );

	// Columns
	m_grid1->EnableDragColMove( false );
	m_grid1->EnableDragColSize( true );
	m_grid1->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	sbSizer1->Add( m_grid1, 1, wxALL, 5 );


	bSizer1->Add( sbSizer1, 0, wxALL|wxEXPAND, 5 );

	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 0, 2, 0, 0 );

	m_bitmap1 = new wxStaticBitmap( this, ID_DEFAULT, wxBitmap( wxT("../bin/resources/splash.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxSize( 100,20 ), 0 );
	gSizer1->Add( m_bitmap1, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxVERTICAL );

	m_staticText = new wxStaticText( this, ID_DEFAULT, wxT("Static Line"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText->Wrap( -1 );
	bSizer->Add( m_staticText, 0, wxALL, 5 );

	m_staticline1 = new wxStaticLine( this, ID_DEFAULT, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer->Add( m_staticline1, 0, wxALL|wxEXPAND, 5 );

	m_button = new wxButton( this, ID_DEFAULT, wxT("Expanding Button"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer->Add( m_button, 1, wxALL|wxEXPAND, 5 );


	gSizer1->Add( bSizer, 1, wxEXPAND, 5 );

	m_listCtrl = new wxListCtrl( this, ID_DEFAULT, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	gSizer1->Add( m_listCtrl, 0, wxALL|wxEXPAND, 5 );

	wxString m_choice1Choices[] = { wxT("Test1"), wxT("Test2") };
	int m_choice1NChoices = sizeof( m_choice1Choices ) / sizeof( wxString );
	m_choice1 = new wxChoice( this, ID_DEFAULT, wxDefaultPosition, wxDefaultSize, m_choice1NChoices, m_choice1Choices, 0 );
	m_choice1->SetSelection( 0 );
	gSizer1->Add( m_choice1, 0, wxALL|wxEXPAND, 5 );

	m_slider1 = new wxSlider( this, ID_DEFAULT, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	gSizer1->Add( m_slider1, 0, wxALL|wxEXPAND, 5 );

	wxString m_checkList1Choices[] = { wxT("a"), wxT("b"), wxT("g"), wxT("c") };
	int m_checkList1NChoices = sizeof( m_checkList1Choices ) / sizeof( wxString );
	m_checkList1 = new wxCheckListBox( this, ID_DEFAULT, wxDefaultPosition, wxDefaultSize, m_checkList1NChoices, m_checkList1Choices, wxLB_ALWAYS_SB|wxLB_SORT );
	gSizer1->Add( m_checkList1, 1, wxALL|wxEXPAND, 5 );


	bSizer1->Add( gSizer1, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
}

MainPanel::~MainPanel()
{
}
