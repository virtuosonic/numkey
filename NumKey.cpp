#include "NumKey.h"

//(*InternalHeaders(NumKey)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(NumKey)
const long NumKey::ID_STATICTEXT1 = wxNewId();
const long NumKey::ID_BUTTON1 = wxNewId();
const long NumKey::ID_BUTTON2 = wxNewId();
const long NumKey::ID_BUTTON3 = wxNewId();
const long NumKey::ID_BUTTON4 = wxNewId();
const long NumKey::ID_BUTTON5 = wxNewId();
const long NumKey::ID_BUTTON6 = wxNewId();
const long NumKey::ID_BUTTON7 = wxNewId();
const long NumKey::ID_BUTTON8 = wxNewId();
const long NumKey::ID_BUTTON9 = wxNewId();
const long NumKey::ID_BUTTON10 = wxNewId();
const long NumKey::ID_BUTTON11 = wxNewId();
const long NumKey::ID_BUTTON12 = wxNewId();
const long NumKey::ID_BUTTON13 = wxNewId();
//*)

BEGIN_EVENT_TABLE(NumKey,wxPanel)
	//(*EventTable(NumKey)
	//*)
END_EVENT_TABLE()

NumKey::NumKey(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(NumKey)
	wxGridBagSizer* GridBagSizer1;

	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
	GridBagSizer1 = new wxGridBagSizer(0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("0"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	GridBagSizer1->Add(StaticText1, wxGBPosition(0, 0), wxGBSpan(1, 2), wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	GridBagSizer1->Add(Button1, wxGBPosition(3, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("2"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	GridBagSizer1->Add(Button2, wxGBPosition(3, 1), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(this, ID_BUTTON3, _("3"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	GridBagSizer1->Add(Button3, wxGBPosition(3, 2), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button4 = new wxButton(this, ID_BUTTON4, _("4"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	GridBagSizer1->Add(Button4, wxGBPosition(2, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button5 = new wxButton(this, ID_BUTTON5, _("5"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	GridBagSizer1->Add(Button5, wxGBPosition(2, 1), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button6 = new wxButton(this, ID_BUTTON6, _("6"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	GridBagSizer1->Add(Button6, wxGBPosition(2, 2), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button7 = new wxButton(this, ID_BUTTON7, _("7"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	GridBagSizer1->Add(Button7, wxGBPosition(1, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button8 = new wxButton(this, ID_BUTTON8, _("8"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	GridBagSizer1->Add(Button8, wxGBPosition(1, 1), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button9 = new wxButton(this, ID_BUTTON9, _("9"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	GridBagSizer1->Add(Button9, wxGBPosition(1, 2), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button10 = new wxButton(this, ID_BUTTON10, _("0"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
	GridBagSizer1->Add(Button10, wxGBPosition(4, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button11 = new wxButton(this, ID_BUTTON11, _("."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
	GridBagSizer1->Add(Button11, wxGBPosition(4, 1), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button12 = new wxButton(this, ID_BUTTON12, _("+/-"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON12"));
	GridBagSizer1->Add(Button12, wxGBPosition(4, 2), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button13 = new wxButton(this, ID_BUTTON13, _("C"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON13"));
	GridBagSizer1->Add(Button13, wxGBPosition(0, 2), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(GridBagSizer1);
	GridBagSizer1->Fit(this);
	GridBagSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton3Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton4Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton5Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton6Click);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton7Click);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton8Click);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton9Click);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton10Click);
	Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton11Click);
	Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton12Click);
	Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NumKey::OnButton13Click);
	//*)
}

NumKey::~NumKey()
{
	//(*Destroy(NumKey)
	//*)
}

double NumKey::GetValue()
{
	double retval;
	StaticText1->GetLabel().ToDouble(&retval);
	return retval;
}

void NumKey::SetValue(const double& val)
{
	StaticText1->SetLabel(wxString::FromDouble(val));
}

void NumKey::AppendNumber(unsigned num)
{
	wxString tstr;
	if(StaticText1->GetLabel() == "0")
		StaticText1->SetLabel(wxString::FromDouble(num));
	else
	{
		tstr = StaticText1->GetLabel();
		tstr.Append(wxString::FromDouble(num));
		StaticText1->SetLabel(tstr);
	}
}


void NumKey::OnButton13Click(wxCommandEvent& event)
{
	StaticText1->SetLabel("0");
}

void NumKey::OnButton11Click(wxCommandEvent& event)
{
	wxString tstr(StaticText1->GetLabel());
	if(tstr.Contains(".")) return;
	//else
	tstr.Append(".");
	StaticText1->SetLabel(tstr);
}


void NumKey::OnButton12Click(wxCommandEvent& event)
{
	double tval = 0x00;
	StaticText1->GetLabel().ToDouble(&tval);
	tval *= -1;
	StaticText1->SetLabel(wxString::FromDouble(tval));
}

void NumKey::OnButton1Click(wxCommandEvent& event)
{
	AppendNumber(1);
}

void NumKey::OnButton2Click(wxCommandEvent& event)
{
	AppendNumber(2);
}

void NumKey::OnButton3Click(wxCommandEvent& event)
{
	AppendNumber(3);
}

void NumKey::OnButton4Click(wxCommandEvent& event)
{
	AppendNumber(4);
}

void NumKey::OnButton5Click(wxCommandEvent& event)
{
	AppendNumber(5);
}

void NumKey::OnButton6Click(wxCommandEvent& event)
{
	AppendNumber(6);
}

void NumKey::OnButton7Click(wxCommandEvent& event)
{
	AppendNumber(7);
}

void NumKey::OnButton8Click(wxCommandEvent& event)
{
	AppendNumber(8);
}

void NumKey::OnButton9Click(wxCommandEvent& event)
{
	AppendNumber(9);
}

void NumKey::OnButton10Click(wxCommandEvent& event)
{
    AppendNumber(0);
}
