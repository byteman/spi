//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::btn1Click(TObject *Sender)
{
      srv1->Active = true;  
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnStopClick(TObject *Sender)
{
       srv1->Active = false;    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::srv1ClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
     AnsiString info;

     info.printf("Socket[%x] connected", Socket);

     mmo1->Lines->Add(info);   
}
//---------------------------------------------------------------------------

void __fastcall TForm1::srv1ClientDisconnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
     AnsiString info;

     info.printf("Socket[%x] Disconnected", Socket);

     mmo1->Lines->Add(info);
}
static char receiveBuff[10*1024*1024];
AnsiString strHttp;
//---------------------------------------------------------------------------
void __fastcall TForm1::srv1ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
    int size = Socket->ReceiveLength();


    int len = Socket->ReceiveBuf(receiveBuff, size);

    strHttp = receiveBuff;

    int pos = strHttp.Pos("\r\n\r\n");

    if(pos > 0)
    {
         mmo2->Lines->Add(strHttp.SubString(0,pos));
         mmo2->Lines->Add("                                  ");
         mmo2->Lines->Add("                                  ");
         mmo2->Lines->Add("                                   ");
    }

    // info.printf("Socket[%x] Received %d", Socket,size);
     //mmo1->Lines->Add(info);
     //mmo1->Lines->Add(receiveBuff);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::srv1ClientError(TObject *Sender,
      TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{
     AnsiString info;

     info.printf("Socket[%x] Error", Socket);
     ErrorCode = 0;
     mmo1->Lines->Add(info);
}
//---------------------------------------------------------------------------
