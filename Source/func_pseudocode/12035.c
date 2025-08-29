__ZN6google8protobuf17FastInt64ToBufferExPc
_BYTE *__fastcall google::protobuf::FastInt64ToBuffer(unsigned __int64 this, _BYTE *a2, char *a3)
{
  unsigned __int64 v3; // x8
  _BYTE *result; // x0
  bool v5; // cf
  char v6; // w8
  unsigned __int64 v7; // x10
  unsigned __int64 v8; // x10
  bool v9; // cc

  v3 = this;
  a2[21] = 0;
  if ( (this & 0x8000000000000000LL) != 0 )
  {
    if ( this < 0xFFFFFFFFFFFFFFF7LL )
    {
      v7 = -10LL - this;
      result = a2 + 19;
      a2[20] = (v7 % 0xA) | 0x30;
      v8 = v7 / 0xA + 1;
      do
      {
        *result-- = (v8 % 0xA) | 0x30;
        v9 = v8 > 9;
        v8 /= 0xAuLL;
      }
      while ( v9 );
    }
    else
    {
      v6 = 48 - this;
      result = a2 + 19;
      a2[20] = v6;
    }
    *result = 45;
  }
  else
  {
    result = a2 + 21;
    do
    {
      *--result = (v3 % 0xA) | 0x30;
      v5 = v3 >= 0xA;
      v3 /= 0xAuLL;
    }
    while ( v5 );
  }
  return result;
}