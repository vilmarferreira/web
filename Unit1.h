//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Types.hpp>
#include <FMX.WebBrowser.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TWebBrowser *WebBrowser1;
	TWebBrowser *WebBrowser2;
	TWebBrowser *WebBrowser3;
	TWebBrowser *WebBrowser4;
	TWebBrowser *WebBrowser5;
	TWebBrowser *WebBrowser6;
	TWebBrowser *WebBrowser7;
	TWebBrowser *WebBrowser8;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
