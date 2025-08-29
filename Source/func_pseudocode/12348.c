__ZN6google8protobuf2io19EpsCopyOutputStream5FlushEPh
unsigned __int64 __fastcall google::protobuf::io::EpsCopyOutputStream::Flush(
        google::protobuf::io::EpsCopyOutputStream *this,
        unsigned __int8 *a2)
{
  _OWORD *v4; // x20
  char *v5; // x22
  void *v6; // x0
  unsigned __int64 v7; // x8
  int v8; // w23
  __int64 v9; // x9
  _OWORD *v10; // x8
  _OWORD *v11; // x10
  unsigned __int64 v12; // x9
  unsigned __int64 result; // x0
  _OWORD *v14; // [xsp+0h] [xbp-40h] BYREF
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  v4 = (_OWORD *)((char *)this + 16);
  v5 = (char *)this + 32;
LABEL_2:
  v7 = *(_QWORD *)this;
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    v8 = (_DWORD)a2 - v7;
    if ( (unsigned __int64)a2 <= v7 )
    {
      memcpy(v6, v4, a2 - (unsigned __int8 *)v4);
      v12 = *(_QWORD *)this;
      *((_QWORD *)this + 1) += a2 - (unsigned __int8 *)v4;
      return v12 - (_QWORD)a2;
    }
    else
    {
      if ( *((_QWORD *)this + 6) )
      {
        memcpy(v6, v4, v7 - (_QWORD)v4);
        v15 = 0;
        while ( 1 )
        {
          v14 = 0LL;
          if ( ((*(__int64 (__fastcall **)(_QWORD, _OWORD **, int *))(**((_QWORD **)this + 6) + 16LL))(
                  *((_QWORD *)this + 6),
                  &v14,
                  &v15) & 1) == 0 )
            break;
          v9 = (unsigned int)v15;
          if ( v15 )
          {
            v10 = v14;
            v11 = *(_OWORD **)this;
            if ( v15 < 17 )
            {
              *v4 = *v11;
              *(_QWORD *)this = (char *)v4 + (int)v9;
              *((_QWORD *)this + 1) = v10;
              v10 = v4;
            }
            else
            {
              *v14 = *v11;
              *(_QWORD *)this = (char *)v10 + v9 - 16;
              *((_QWORD *)this + 1) = 0LL;
            }
            a2 = (unsigned __int8 *)v10 + v8;
            if ( *((_BYTE *)this + 56) )
              return 0LL;
            goto LABEL_2;
          }
        }
      }
      result = 0LL;
      *((_BYTE *)this + 56) = 1;
      *(_QWORD *)this = v5;
    }
  }
  else
  {
    result = v7 - (_QWORD)a2 + 16;
    *((_QWORD *)this + 1) = a2;
  }
  return result;
}