#ifndef NUMKEY_H
#define NUMKEY_H

//(*Headers(NumKey)
#include <wx/stattext.h>
#include <wx/panel.h>
#include <wx/gbsizer.h>
#include <wx/button.h>
//*)
#include <wx/dialog.h>

class NumKey: public wxPanel
{
	public:

		NumKey(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~NumKey();

		//(*Declarations(NumKey)
		wxButton* Button4;
		wxButton* Button1;
		wxStaticText* StaticText1;
		wxButton* Button2;
		wxButton* Button6;
		wxButton* Button10;
		wxButton* Button11;
		wxButton* Button5;
		wxButton* Button3;
		wxButton* Button7;
		wxButton* Button9;
		wxButton* Button13;
		wxButton* Button8;
		wxButton* Button12;
		//*)
        double GetValue();
        void SetValue(const double& val);
	private:

		//(*Identifiers(NumKey)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_BUTTON8;
		static const long ID_BUTTON9;
		static const long ID_BUTTON10;
		static const long ID_BUTTON11;
		static const long ID_BUTTON12;
		static const long ID_BUTTON13;
		//*)

		//(*Handlers(NumKey)
		void  OnButton13Click(wxCommandEvent& event);
		void OnButton11Click(wxCommandEvent& event);
		void OnButton12Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnButton5Click(wxCommandEvent& event);
		void OnButton6Click(wxCommandEvent& event);
		void OnButton7Click(wxCommandEvent& event);
		void OnButton8Click(wxCommandEvent& event);
		void OnButton9Click(wxCommandEvent& event);
		void OnButton10Click(wxCommandEvent& event);
		//*)

        void AppendNumber(unsigned num);
		DECLARE_EVENT_TABLE()
};

#endif
