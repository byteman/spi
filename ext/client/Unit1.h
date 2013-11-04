//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TServerSocket *srv1;
        TMemo *mmo1;
        TSplitter *spl1;
        TMemo *mmo2;
        TGroupBox *grp1;
        TButton *btn1;
        TButton *btnStop;
        void __fastcall btn1Click(TObject *Sender);
        void __fastcall btnStopClick(TObject *Sender);
        void __fastcall srv1ClientConnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall srv1ClientDisconnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall srv1ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall srv1ClientError(TObject *Sender,
          TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
