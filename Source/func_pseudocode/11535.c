__ZN6google8protobuf8internal12ExtensionSet5ClearEv
_BYTE *__fastcall google::protobuf::internal::ExtensionSet::Clear(_BYTE *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  _BYTE *v3; // x19
  _QWORD *v4; // x19
  _QWORD *v5; // x20
  _QWORD *v6; // t1
  _QWORD *v7; // x9
  _QWORD *v8; // x8
  bool v9; // zf

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  if ( *((unsigned __int16 *)this + 4) >= 0x101u )
  {
    v6 = (_QWORD *)*v1;
    v4 = v1 + 1;
    v5 = v6;
    if ( v6 != v4 )
    {
      do
      {
        this = google::protobuf::internal::ExtensionSet::Extension::Clear((_BYTE *)v5 + 40);
        v7 = (_QWORD *)v5[1];
        if ( v7 )
        {
          do
          {
            v8 = v7;
            v7 = (_QWORD *)*v7;
          }
          while ( v7 );
        }
        else
        {
          do
          {
            v8 = (_QWORD *)v5[2];
            v9 = *v8 == (_QWORD)v5;
            v5 = v8;
          }
          while ( !v9 );
        }
        v5 = v8;
      }
      while ( v8 != v4 );
    }
  }
  else if ( *((_WORD *)this + 5) )
  {
    v2 = 32LL * *((unsigned __int16 *)this + 5);
    v3 = v1 + 1;
    do
    {
      this = google::protobuf::internal::ExtensionSet::Extension::Clear(v3);
      v3 += 32;
      v2 -= 32LL;
    }
    while ( v2 );
  }
  return this;
}