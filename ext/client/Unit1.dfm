object Form1: TForm1
  Left = 200
  Top = 163
  Width = 934
  Height = 640
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object spl1: TSplitter
    Left = 233
    Top = 0
    Width = 3
    Height = 602
    Cursor = crHSplit
  end
  object mmo1: TMemo
    Left = 0
    Top = 0
    Width = 233
    Height = 602
    Align = alLeft
    Lines.Strings = (
      'mmo1')
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object mmo2: TMemo
    Left = 236
    Top = 0
    Width = 533
    Height = 602
    Align = alClient
    Lines.Strings = (
      'mmo2')
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object grp1: TGroupBox
    Left = 769
    Top = 0
    Width = 149
    Height = 602
    Align = alRight
    Caption = 'grp1'
    TabOrder = 2
    object btn1: TButton
      Left = 40
      Top = 120
      Width = 75
      Height = 25
      Caption = #21551#21160
      TabOrder = 0
      OnClick = btn1Click
    end
    object btnStop: TButton
      Left = 40
      Top = 168
      Width = 75
      Height = 25
      Caption = #20572#27490
      TabOrder = 1
      OnClick = btnStopClick
    end
  end
  object srv1: TServerSocket
    Active = True
    Port = 4004
    ServerType = stNonBlocking
    OnClientConnect = srv1ClientConnect
    OnClientDisconnect = srv1ClientDisconnect
    OnClientRead = srv1ClientRead
    OnClientError = srv1ClientError
    Left = 104
    Top = 32
  end
end
