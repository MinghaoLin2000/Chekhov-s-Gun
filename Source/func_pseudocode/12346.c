__ZN6google8protobuf2io16CodedInputStream15ReadTagFallbackEj
__int64 __fastcall google::protobuf::io::CodedInputStream::ReadTagFallback(
        google::protobuf::io::CodedInputStream *this,
        __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  int v4; // w10
  __int64 v5; // x8
  __int64 v6; // x9
  int v8; // w8
  int v9; // w9
  int v10; // w10
  __int64 v11; // x10

  v3 = *(_QWORD *)this;
  v2 = *((_QWORD *)this + 1);
  v4 = v2 - *(_QWORD *)this;
  if ( v4 > 9 )
  {
LABEL_4:
    if ( (_DWORD)a2 )
    {
      v5 = (unsigned int)a2 + (*(unsigned __int8 *)(v3 + 1) << 7) - 128;
      if ( *(char *)(v3 + 1) < 0 )
      {
        v5 = (unsigned int)v5 + (*(unsigned __int8 *)(v3 + 2) << 14) - 0x4000;
        if ( *(char *)(v3 + 2) < 0 )
        {
          v5 = (unsigned int)v5 + (*(unsigned __int8 *)(v3 + 3) << 21) - 0x200000;
          if ( *(char *)(v3 + 3) < 0 )
          {
            v10 = *(char *)(v3 + 4);
            v5 = (unsigned int)(v5 + (v10 << 28) - 0x10000000);
            if ( v10 < 0 )
            {
              v11 = 0LL;
              while ( *(char *)(v3 + v11 + 5) < 0 )
              {
                a2 = 0LL;
                if ( (_DWORD)++v11 == 5 )
                  return a2;
              }
              v6 = v3 + v11 + 6;
            }
            else
            {
              v6 = v3 + 5;
            }
          }
          else
          {
            v6 = v3 + 4;
          }
        }
        else
        {
          v6 = v3 + 3;
        }
      }
      else
      {
        v6 = v3 + 2;
      }
      *(_QWORD *)this = v6;
      return v5;
    }
    else
    {
      *(_QWORD *)this = v3 + 1;
    }
    return a2;
  }
  if ( v4 >= 1 )
  {
    if ( (*(char *)(v2 - 1) & 0x80000000) == 0 )
      goto LABEL_4;
    return google::protobuf::io::CodedInputStream::ReadTagSlow(this);
  }
  if ( v4 )
    return google::protobuf::io::CodedInputStream::ReadTagSlow(this);
  v8 = *((_DWORD *)this + 11);
  v9 = *((_DWORD *)this + 6);
  if ( v8 <= 0 && v9 != *((_DWORD *)this + 10) )
    return google::protobuf::io::CodedInputStream::ReadTagSlow(this);
  if ( v9 - v8 >= *((_DWORD *)this + 12) )
    return google::protobuf::io::CodedInputStream::ReadTagSlow(this);
  a2 = 0LL;
  *((_BYTE *)this + 36) = 1;
  return a2;
}