_uarpVersionCompare
__int64 __fastcall uarpVersionCompare(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // w8
  unsigned int v3; // w9
  unsigned int v4; // w8
  unsigned int v5; // w9
  unsigned int v7; // w8
  unsigned int v8; // w9
  bool v9; // cf
  bool v10; // zf
  _BOOL4 v11; // w8

  if ( *a1 > *a2 )
    return 2LL;
  if ( *a1 < *a2 )
    return 1LL;
  v2 = a1[1];
  v3 = a2[1];
  if ( v2 > v3 )
    return 2LL;
  if ( v2 < v3 )
    return 1LL;
  v4 = a1[2];
  v5 = a2[2];
  if ( v4 > v5 )
    return 2LL;
  if ( v4 < v5 )
    return 1LL;
  v7 = a1[3];
  v8 = a2[3];
  v9 = v7 >= v8;
  v10 = v7 == v8;
  v11 = v7 < v8;
  if ( !v10 && v9 )
    return 2LL;
  else
    return v11;
}