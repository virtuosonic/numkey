#ifndef NUMKEYDLG_H
#define NUMKEYDLG_H

//(*Headers(NumKeyDlg)
#include <wx/sizer.h>
#include <wx/statline.h>
#include "NumKey.h"
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class NumKeyDlg: public wxDialog
{
	public:

		NumKeyDlg(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~NumKeyDlg();

		//(*Declarations(NumKeyDlg)
		wxButton* Button1;
		NumKey* Keyboard;
		wxStaticLine* StaticLine1;
		//*)
        double GetValue();
        void SetValue(const double& val);

	private:

		//(*Identifiers(NumKeyDlg)
		static const long ID_KEY;
		static const long ID_STATICLINE1;
		//*)

		//(*Handlers(NumKeyDlg)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
