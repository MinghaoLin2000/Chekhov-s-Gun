__ZNK6google8protobuf11StringPiece13find_first_ofES1_m
__int64 __fastcall google::protobuf::StringPiece::find_first_of(
        google::protobuf::StringPiece *a1,
        unsigned __int8 *a2,
        __int64 a3,
        signed __int64 a4)
{
  __int64 v4; // x8
  int v6; // w1
  unsigned int v8; // t1
  _OWORD v9[16]; // [xsp+0h] [xbp-120h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v4 = *((_QWORD *)a1 + 1);
  if ( v4 < 1 || a3 < 1 )
    return -1LL;
  if ( a3 != 1 )
  {
    memset(v9, 0, sizeof(v9));
    do
    {
      v8 = *a2++;
      *((_BYTE *)v9 + v8) = 1;
      --a3;
    }
    while ( a3 );
    if ( v4 > a4 )
    {
      while ( !*((_BYTE *)v9 + *(unsigned __int8 *)(*(_QWORD *)a1 + a4)) )
      {
        if ( v4 == ++a4 )
          return -1LL;
      }
      return a4;
    }
    return -1LL;
  }
  v6 = (char)*a2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::StringPiece::find(a1, v6, a4);
}