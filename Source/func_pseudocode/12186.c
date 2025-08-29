__ZNK6google8protobuf11StringPiece12find_last_ofES1_m
__int64 __fastcall google::protobuf::StringPiece::find_last_of(
        __int64 *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // x9
  unsigned __int64 v5; // x9
  bool v6; // cc
  __int64 result; // x0
  __int64 v9; // x8
  unsigned int v10; // t1
  __int64 v11; // x8
  _OWORD v12[16]; // [xsp+0h] [xbp-120h] BYREF

  v4 = a1[1];
  v6 = v4 < 1;
  v5 = v4 - 1;
  v6 = v6 || a3 < 1;
  if ( v6 )
    return -1LL;
  if ( a3 == 1 )
  {
    if ( v5 >= a4 )
      result = a4;
    else
      result = v5;
    v9 = *a1;
    while ( *(unsigned __int8 *)(v9 + result) != *a2 )
    {
      v6 = result-- < 1;
      if ( v6 )
        return -1LL;
    }
    return result;
  }
  memset(v12, 0, sizeof(v12));
  do
  {
    v10 = *a2++;
    *((_BYTE *)v12 + v10) = 1;
    --a3;
  }
  while ( a3 );
  result = v5 >= a4 ? a4 : v5;
  if ( result < 0 )
    return -1LL;
  v11 = *a1;
  while ( !*((_BYTE *)v12 + *(unsigned __int8 *)(v11 + result)) )
  {
    v6 = result-- <= 0;
    if ( v6 )
      return -1LL;
  }
  return result;
}