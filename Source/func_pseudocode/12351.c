__ZN6google8protobuf2io19EpsCopyOutputStream19EnsureSpaceFallbackEPh
_OWORD *__fastcall google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(
        google::protobuf::io::EpsCopyOutputStream *this,
        unsigned __int8 *a2)
{
  unsigned __int64 v2; // x19
  _OWORD *v4; // x20
  char *v5; // x22
  char *v6; // x24
  void *v7; // x0
  __int64 v8; // x9
  _OWORD *v9; // x8
  char *v10; // x10
  unsigned __int64 v11; // x9
  _OWORD *v13; // [xsp+0h] [xbp-40h] BYREF
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  LODWORD(v2) = (_DWORD)a2;
  v4 = (_OWORD *)((char *)this + 16);
  v5 = (char *)this + 32;
  while ( !*((_BYTE *)this + 56) )
  {
    v6 = *(char **)this;
    if ( *((_QWORD *)this + 6) )
    {
      v7 = (void *)*((_QWORD *)this + 1);
      if ( !v7 )
      {
        *v4 = *(_OWORD *)v6;
        *((_QWORD *)this + 1) = v6;
        goto LABEL_11;
      }
      memcpy(v7, v4, v6 - (char *)v4);
      v14 = 0;
      while ( 1 )
      {
        v13 = 0LL;
        if ( ((*(__int64 (__fastcall **)(_QWORD, _OWORD **, int *))(**((_QWORD **)this + 6) + 16LL))(
                *((_QWORD *)this + 6),
                &v13,
                &v14) & 1) == 0 )
          break;
        v8 = (unsigned int)v14;
        if ( v14 )
        {
          v9 = v13;
          v10 = *(char **)this;
          if ( v14 >= 17 )
          {
            *v13 = *(_OWORD *)v10;
            v11 = (unsigned __int64)v9 + v8 - 16;
            *(_QWORD *)this = v11;
            *((_QWORD *)this + 1) = 0LL;
            goto LABEL_13;
          }
          *v4 = *(_OWORD *)v10;
          v11 = (unsigned __int64)v4 + (int)v8;
          *(_QWORD *)this = v11;
          *((_QWORD *)this + 1) = v9;
          goto LABEL_12;
        }
      }
    }
    *((_BYTE *)this + 56) = 1;
LABEL_11:
    *(_QWORD *)this = v5;
    v11 = (unsigned __int64)v5;
LABEL_12:
    v9 = v4;
LABEL_13:
    v2 = (unsigned __int64)v9 + (int)v2 - (int)v6;
    if ( v2 < v11 )
      return (_OWORD *)v2;
  }
  return v4;
}