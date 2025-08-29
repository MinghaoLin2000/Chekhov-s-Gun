__ZN6google8protobuf2io16CodedInputStream20ReadVarint32FallbackEj
__int64 __fastcall google::protobuf::io::CodedInputStream::ReadVarint32Fallback(
        google::protobuf::io::CodedInputStream *this,
        int a2)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x10
  unsigned int v4; // w9
  __int64 v5; // x8
  __int64 Varint64Fallback; // x8
  char v7; // w1
  int v8; // w8
  __int64 v9; // x11

  v3 = *(_QWORD *)this;
  v2 = *((_QWORD *)this + 1);
  if ( (int)(v2 - *(_QWORD *)this) <= 9 && (v2 <= v3 || *(char *)(v2 - 1) < 0) )
  {
    Varint64Fallback = (unsigned int)google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this);
    if ( (v7 & 1) == 0 )
      return -1LL;
  }
  else
  {
    v4 = a2 + (*(unsigned __int8 *)(v3 + 1) << 7) - 128;
    if ( *(char *)(v3 + 1) < 0 )
    {
      v4 = v4 + (*(unsigned __int8 *)(v3 + 2) << 14) - 0x4000;
      if ( *(char *)(v3 + 2) < 0 )
      {
        v4 = v4 + (*(unsigned __int8 *)(v3 + 3) << 21) - 0x200000;
        if ( *(char *)(v3 + 3) < 0 )
        {
          v8 = *(char *)(v3 + 4);
          v4 = v4 + (v8 << 28) - 0x10000000;
          if ( v8 < 0 )
          {
            v9 = 0LL;
            while ( *(char *)(v3 + v9 + 5) < 0 )
            {
              ++v9;
              Varint64Fallback = -1LL;
              if ( (_DWORD)v9 == 5 )
                return Varint64Fallback;
            }
            v5 = v3 + v9 + 6;
          }
          else
          {
            v5 = v3 + 5;
          }
        }
        else
        {
          v5 = v3 + 4;
        }
      }
      else
      {
        v5 = v3 + 3;
      }
    }
    else
    {
      v5 = v3 + 2;
    }
    *(_QWORD *)this = v5;
    return v4;
  }
  return Varint64Fallback;
}