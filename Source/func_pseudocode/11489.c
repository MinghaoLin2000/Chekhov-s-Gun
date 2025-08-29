__ZN6google8protobuf8internal12ExtensionSet10FindOrNullEi
_DWORD *__fastcall google::protobuf::internal::ExtensionSet::FindOrNull(
        google::protobuf::internal::ExtensionSet *this,
        int a2)
{
  _DWORD *v2; // x8
  unsigned __int64 v3; // x9
  _DWORD *v4; // x10
  unsigned __int64 v5; // x12
  int *v6; // x13
  _DWORD *v7; // x13
  int v8; // t1
  _DWORD *v9; // x8
  int v10; // t1
  _DWORD *v12; // x8
  _DWORD *v13; // x10
  _DWORD *v14; // t1
  _DWORD *v15; // x9
  int v16; // w11
  bool v17; // cc
  _QWORD *v18; // x11
  int v19; // w8
  _DWORD *v20; // x9

  v2 = (_DWORD *)*((_QWORD *)this + 2);
  if ( *((unsigned __int16 *)this + 4) < 0x101u )
  {
    v3 = *((unsigned __int16 *)this + 5);
    if ( *((_WORD *)this + 5) )
    {
      v4 = &v2[8 * v3];
      do
      {
        v5 = v3 >> 1;
        v6 = &v2[8 * (v3 >> 1)];
        v8 = *v6;
        v7 = v6 + 8;
        v3 += ~(v3 >> 1);
        if ( v8 < a2 )
          v2 = v7;
        else
          v3 = v5;
      }
      while ( v3 );
      if ( v2 != v4 )
      {
        v10 = *v2;
        v9 = v2 + 2;
        if ( v10 == a2 )
          return v9;
        else
          return 0LL;
      }
    }
    return 0LL;
  }
  v14 = (_DWORD *)*((_QWORD *)v2 + 1);
  v12 = v2 + 2;
  v13 = v14;
  if ( !v14 )
    return 0LL;
  v15 = v12;
  do
  {
    v16 = v13[8];
    v17 = v16 < a2;
    if ( v16 >= a2 )
      v18 = v13;
    else
      v18 = v13 + 2;
    if ( !v17 )
      v15 = v13;
    v13 = (_DWORD *)*v18;
  }
  while ( *v18 );
  if ( v15 == v12 )
    return 0LL;
  v19 = v15[8];
  v20 = v15 + 10;
  if ( v19 <= a2 )
    return v20;
  else
    return 0LL;
}