__ZN6google8protobuf17FastInt32ToBufferEiPc
_BYTE *__fastcall google::protobuf::FastInt32ToBuffer(google::protobuf *this, _BYTE *a2, char *a3)
{
  unsigned int v3; // w8
  _BYTE *result; // x0
  bool v5; // cf
  char v6; // w8
  unsigned int v7; // w10
  unsigned int v8; // w11
  unsigned int v9; // w10
  bool v10; // cc

  v3 = (unsigned int)this;
  a2[11] = 0;
  if ( ((unsigned int)this & 0x80000000) != 0 )
  {
    if ( (unsigned int)this < 0xFFFFFFF7 )
    {
      v7 = -10 - (_DWORD)this;
      v8 = (-10 - (int)this) / 0xAu;
      result = a2 + 9;
      a2[10] = (v7 % 0xA) | 0x30;
      v9 = v8 + 1;
      do
      {
        *result-- = (v9 % 0xA) | 0x30;
        v10 = v9 > 9;
        v9 /= 0xAu;
      }
      while ( v10 );
    }
    else
    {
      v6 = 48 - (_BYTE)this;
      result = a2 + 9;
      a2[10] = v6;
    }
    *result = 45;
  }
  else
  {
    result = a2 + 11;
    do
    {
      *--result = (v3 % 0xA) | 0x30;
      v5 = v3 >= 0xA;
      v3 /= 0xAu;
    }
    while ( v5 );
  }
  return result;
}