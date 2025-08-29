__ZN12ObjConverterD2Ev
void __fastcall ObjConverter::~ObjConverter(ObjConverter *this)
{
  char *v2; // x20
  char *v3; // x22
  char *v4; // x21
  void *v5; // x0
  char *v6; // x9
  char *v7; // x8
  bool v8; // zf
  void *v9; // x0
  void *v10; // x0
  void *v11; // x0
  void *v12; // x0
  void *v13; // x0
  char *v14; // [xsp+8h] [xbp-28h] BYREF

  *(_QWORD *)this = off_1000185C8;
  v2 = (char *)this + 104;
  v3 = (char *)*((_QWORD *)this + 13);
  v4 = (char *)this + 112;
  if ( v3 != (char *)this + 112 )
  {
    do
    {
      if ( *((_QWORD *)v3 + 7) )
      {
        v5 = (void *)sub_100010048();
        operator delete(v5);
      }
      v6 = (char *)*((_QWORD *)v3 + 1);
      if ( v6 )
      {
        do
        {
          v7 = v6;
          v6 = *(char **)v6;
        }
        while ( v6 );
      }
      else
      {
        do
        {
          v7 = (char *)*((_QWORD *)v3 + 2);
          v8 = *(_QWORD *)v7 == (_QWORD)v3;
          v3 = v7;
        }
        while ( !v8 );
      }
      v3 = v7;
    }
    while ( v7 != v4 );
  }
  if ( *((char *)this + 351) < 0 )
    operator delete(*((void **)this + 41));
  if ( *((char *)this + 327) < 0 )
    operator delete(*((void **)this + 38));
  if ( *((char *)this + 303) < 0 )
    operator delete(*((void **)this + 35));
  if ( *((char *)this + 279) < 0 )
    operator delete(*((void **)this + 32));
  v9 = (void *)*((_QWORD *)this + 27);
  if ( v9 )
  {
    *((_QWORD *)this + 28) = v9;
    operator delete(v9);
  }
  sub_100010F90((char *)this + 184, *((_QWORD *)this + 24));
  v14 = (char *)this + 160;
  sub_100011098(&v14);
  v14 = (char *)this + 136;
  sub_100010FF4(&v14);
  sub_100010F90(v2, *((_QWORD *)this + 14));
  v10 = (void *)*((_QWORD *)this + 10);
  if ( v10 )
  {
    *((_QWORD *)this + 11) = v10;
    operator delete(v10);
  }
  v11 = (void *)*((_QWORD *)this + 7);
  if ( v11 )
  {
    *((_QWORD *)this + 8) = v11;
    operator delete(v11);
  }
  v12 = (void *)*((_QWORD *)this + 4);
  if ( v12 )
  {
    *((_QWORD *)this + 5) = v12;
    operator delete(v12);
  }
  v13 = (void *)*((_QWORD *)this + 1);
  if ( v13 )
  {
    *((_QWORD *)this + 2) = v13;
    operator delete(v13);
  }
}