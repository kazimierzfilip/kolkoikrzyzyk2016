//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

char p1,p2,p3,p4,p5,p6,p7,p8,p9;
char kto;

void setenabled(bool x)
{
     Form1->Pole1->Enabled = x;
     Form1->Pole2->Enabled = x;
     Form1->Pole3->Enabled = x;
     Form1->Pole4->Enabled = x;
     Form1->Pole5->Enabled = x;
     Form1->Pole6->Enabled = x;
     Form1->Pole7->Enabled = x;
     Form1->Pole8->Enabled = x;
     Form1->Pole9->Enabled = x;
}

void spr()
{
  if( (p1==p2 && p2==p3 && p1!='n') ||
  (p4==p5 && p5==p6 && p4!='n') ||
  (p7==p8 && p8==p9 && p7!='n') ||
  (p1==p4 && p4==p7 && p1!='n') ||
  (p2==p5 && p5==p8 && p2!='n') ||
  (p3==p6 && p6==p9 && p3!='n') ||
  (p1==p5 && p5==p9 && p1!='n') ||
  (p3==p5 && p5==p7 && p3!='n') )
  {
    char * w;
    if(kto=='x') w="Wygrywa k�ko";
    else w = "Wygrywa krzy�yk";
    Application->MessageBox(w, "Koniec gry",MB_OK);
    setenabled(false);
  }
  else if( !(p1=='n' || p2=='n' || p3=='n'
          || p4=='n' || p5=='n' || p6=='n'
          || p7=='n' || p8=='n' || p9=='n'))
  {
    Application->MessageBox("Remis", "Koniec gry",MB_OK);
    setenabled(false);
  }

}


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
     Pole1->Picture->LoadFromFile("img/nic.bmp");
     Pole2->Picture->LoadFromFile("img/nic.bmp");
     Pole3->Picture->LoadFromFile("img/nic.bmp");
     Pole4->Picture->LoadFromFile("img/nic.bmp");
     Pole5->Picture->LoadFromFile("img/nic.bmp");
     Pole6->Picture->LoadFromFile("img/nic.bmp");
     Pole7->Picture->LoadFromFile("img/nic.bmp");
     Pole8->Picture->LoadFromFile("img/nic.bmp");
     Pole9->Picture->LoadFromFile("img/nic.bmp");
     Pole1->Picture->LoadFromFile("img/nic.bmp");
     tura->Picture->LoadFromFile("img/osmall.bmp");

     p1='n'; p2='n'; p3='n';
     p4='n'; p5='n'; p6='n';
     p7='n'; p8='n'; p9='n';
     kto='o';
    setenabled(true);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pole1Click(TObject *Sender)
{
    if(p1=='n')
    {
       if(kto=='o')
       {
         Pole1->Picture->LoadFromFile("img/o.bmp");
         p1='o';
         kto='x';
         tura->Picture->LoadFromFile("img/xsmall.bmp");
       }
       else
       {
         Pole1->Picture->LoadFromFile("img/x.bmp");
         p1='x';
         kto='o';
         tura->Picture->LoadFromFile("img/osmall.bmp");
       }
         Pole1->Enabled=false;
         spr();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole2Click(TObject *Sender)
{
if(p2=='n')
    {
       if(kto=='o')
       {
         Pole2->Picture->LoadFromFile("img/o.bmp");
         p2='o';
         kto='x';
         tura->Picture->LoadFromFile("img/xsmall.bmp");
       }
       else
       {
         Pole2->Picture->LoadFromFile("img/x.bmp");
         p2='x';
         kto='o';
         tura->Picture->LoadFromFile("img/osmall.bmp");
       }
         Pole2->Enabled=false;
         spr();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole3Click(TObject *Sender)
{
if(p3=='n')
    {
       if(kto=='o')
       {
         Pole3->Picture->LoadFromFile("img/o.bmp");
         p3='o';
         kto='x';
         tura->Picture->LoadFromFile("img/xsmall.bmp");
       }
       else
       {
         Pole3->Picture->LoadFromFile("img/x.bmp");
         p3='x';
         kto='o';
         tura->Picture->LoadFromFile("img/osmall.bmp");
       }
         Pole3->Enabled=false;
         spr();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole4Click(TObject *Sender)
{
if(p4=='n')
    {
       if(kto=='o')
       {
         Pole4->Picture->LoadFromFile("img/o.bmp");
         p4='o';
         kto='x';
         tura->Picture->LoadFromFile("img/xsmall.bmp");
       }
       else
       {
         Pole4->Picture->LoadFromFile("img/x.bmp");
         p4='x';
         kto='o';
         tura->Picture->LoadFromFile("img/osmall.bmp");
       }
         Pole4->Enabled=false;
         spr();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole5Click(TObject *Sender)
{
if(p5=='n')
    {
       if(kto=='o')
       {
         Pole5->Picture->LoadFromFile("img/o.bmp");
         p5='o';
         kto='x';
         tura->Picture->LoadFromFile("img/xsmall.bmp");
       }
       else
       {
         Pole5->Picture->LoadFromFile("img/x.bmp");
         p5='x';
         kto='o';
         tura->Picture->LoadFromFile("img/osmall.bmp");
       }
         Pole5->Enabled=false;
         spr();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole6Click(TObject *Sender)
{
if(p6=='n')
    {
       if(kto=='o')
       {
         Pole6->Picture->LoadFromFile("img/o.bmp");
         p6='o';
         kto='x';
         tura->Picture->LoadFromFile("img/xsmall.bmp");
       }
       else
       {
         Pole6->Picture->LoadFromFile("img/x.bmp");
         p6='x';
         kto='o';
         tura->Picture->LoadFromFile("img/osmall.bmp");
       }
         Pole6->Enabled=false;
         spr();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole7Click(TObject *Sender)
{
if(p7=='n')
    {
       if(kto=='o')
       {
         Pole7->Picture->LoadFromFile("img/o.bmp");
         p7='o';
         kto='x';
         tura->Picture->LoadFromFile("img/xsmall.bmp");
       }
       else
       {
         Pole7->Picture->LoadFromFile("img/x.bmp");
         p7='x';
         kto='o';
         tura->Picture->LoadFromFile("img/osmall.bmp");
       }
         Pole7->Enabled=false;
         spr();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole8Click(TObject *Sender)
{
if(p8=='n')
    {
       if(kto=='o')
       {
         Pole8->Picture->LoadFromFile("img/o.bmp");
         p8='o';
         kto='x';
         tura->Picture->LoadFromFile("img/xsmall.bmp");
       }
       else
       {
         Pole8->Picture->LoadFromFile("img/x.bmp");
         p8='x';
         kto='o';
         tura->Picture->LoadFromFile("img/osmall.bmp");
       }
         Pole8->Enabled=false;
         spr();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Pole9Click(TObject *Sender)
{
if(p9=='n')
    {
       if(kto=='o')
       {
         Pole9->Picture->LoadFromFile("img/o.bmp");
         p9='o';
         kto='x';
         tura->Picture->LoadFromFile("img/xsmall.bmp");
       }
       else
       {
         Pole9->Picture->LoadFromFile("img/x.bmp");
         p9='x';
         kto='o';
         tura->Picture->LoadFromFile("img/osmall.bmp");
       }
         Pole9->Enabled=false;
         spr();
    }
}
//---------------------------------------------------------------------------
