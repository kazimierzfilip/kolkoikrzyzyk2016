object Form1: TForm1
  Left = 410
  Top = 315
  Width = 559
  Height = 388
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Pole1: TImage
    Left = 16
    Top = 16
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole1Click
  end
  object Pole2: TImage
    Left = 112
    Top = 16
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole2Click
  end
  object Pole3: TImage
    Left = 208
    Top = 16
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole3Click
  end
  object Pole4: TImage
    Left = 16
    Top = 112
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole4Click
  end
  object Pole5: TImage
    Left = 112
    Top = 112
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole5Click
  end
  object Pole6: TImage
    Left = 208
    Top = 112
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole6Click
  end
  object Pole7: TImage
    Left = 16
    Top = 208
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole7Click
  end
  object Pole8: TImage
    Left = 112
    Top = 208
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole8Click
  end
  object Pole9: TImage
    Left = 208
    Top = 208
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole9Click
  end
  object Label1: TLabel
    Left = 344
    Top = 56
    Width = 138
    Height = 29
    Caption = 'Tura gracza:'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Myriad Pro SemiExt'
    Font.Style = []
    ParentFont = False
  end
  object tura: TImage
    Left = 480
    Top = 56
    Width = 30
    Height = 30
  end
  object Button1: TButton
    Left = 384
    Top = 168
    Width = 105
    Height = 57
    Caption = 'Od nowa'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Myriad Pro SemiExt'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
end
