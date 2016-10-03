#include "NumKeyDlg.h"

//(*InternalHeaders(NumKeyDlg)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(NumKeyDlg)
const long NumKeyDlg::ID_KEY = wxNewId();
const long NumKeyDlg::ID_STATICLINE1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(NumKeyDlg,wxDialog)
	//(*EventTable(NumKeyDlg)
	//*)
END_EVENT_TABLE()

NumKeyDlg::NumKeyDlg(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(NumKeyDlg)
	wxButton* Button2;
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("Enter a number"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	FlexGridSizer1->AddGrowableRow(0);
	Keyboard = new NumKey(this,ID_KEY);
	FlexGridSizer1->Add(Keyboard, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, wxID_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_OK"));
	BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, wxID_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("wxID_CANCEL"));
	BoxSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	//*)
	GetSizer()->Layout();

}

NumKeyDlg::~NumKeyDlg()
{
	//(*Destroy(NumKeyDlg)
	//*)
}

double NumKeyDlg::GetValue()
{
    return Keyboard->GetValue();
}

void NumKeyDlg::SetValue(const double& val)
{
    Keyboard->SetValue(val);
}
