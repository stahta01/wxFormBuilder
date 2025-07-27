///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-110-g61ece364)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/checklst.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class GenInheritedClassDlgBase
///////////////////////////////////////////////////////////////////////////////
class GenInheritedClassDlgBase : public wxDialog
{
	private:

	protected:
		wxStaticText* m_instructionsStaticText;
		wxCheckListBox* m_formsCheckList;
		wxStaticText* m_classNameStaticText;
		wxTextCtrl* m_classNameTextCtrl;
		wxStaticText* m_fileNameStaticText;
		wxTextCtrl* m_fileNameTextCtrl;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;

		// Virtual event handlers, override them in your derived class
		virtual void OnFormsSelected( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFormsToggle( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClassNameChange( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFileNameChange( wxCommandEvent& event ) { event.Skip(); }


	public:

		GenInheritedClassDlgBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Generate Inherited Class"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );

		~GenInheritedClassDlgBase();

};

