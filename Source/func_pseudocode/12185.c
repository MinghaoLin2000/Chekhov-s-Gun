__ZNK6google8protobuf11StringPiece17find_first_not_ofES1_m
__int64 __fastcall google::protobuf::StringPiece::find_first_not_of(
        _QWORD *a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // x8
  unsigned int v5; // t1
  _OWORD v7[16]; // [xsp+0h] [xbp-120h] BYREF

  v4 = a1[1];
  if ( v4 < 1 )
    return -1LL;
  if ( a3 < 1 )
    return 0LL;
  if ( a3 != 1 )
  {
    memset(v7, 0, sizeof(v7));
    do
    {
      v5 = *a2++;
      *((_BYTE *)v7 + v5) = 1;
      --a3;
    }
    while ( a3 );
    if ( v4 > a4 )
    {
      while ( *((_BYTE *)v7 + *(unsigned __int8 *)(*a1 + a4)) )
      {
        if ( v4 == ++a4 )
          return -1LL;
      }
      return a4;
    }
    return -1LL;
  }
  if ( v4 <= (unsigned __int64)a4 )
    return -1LL;
  while ( *(unsigned __int8 *)(*a1 + a4) == *a2 )
  {
    if ( v4 == ++a4 )
      return -1LL;
  }
  return a4;
}