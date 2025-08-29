__ZN6google8protobuf8internal18EpsCopyInputStream4NextEv
google::protobuf::internal::EpsCopyInputStream *__fastcall google::protobuf::internal::EpsCopyInputStream::Next(
        google::protobuf::internal::EpsCopyInputStream *this)
{
  google::protobuf::internal::EpsCopyInputStream *v2; // x19
  char *v3; // x8
  size_t v4; // x22
  _QWORD *v5; // x9
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x10
  void *v8; // x11
  int v9; // w9
  void *__src; // [xsp+8h] [xbp-28h] BYREF

  v2 = (google::protobuf::internal::EpsCopyInputStream *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    if ( v2 == (google::protobuf::internal::EpsCopyInputStream *)((char *)this + 40) )
    {
      *(_OWORD *)v2 = *(_OWORD *)*((_QWORD *)this + 1);
      if ( *((int *)this + 21) < 1 )
      {
LABEL_14:
        if ( *((_QWORD *)this + 9) == 2LL )
          *((_QWORD *)this + 9) = *((_QWORD *)this + 1) - (_QWORD)v2;
        v3 = (char *)this + 56;
        *((_QWORD *)this + 1) = (char *)this + 56;
        *((_QWORD *)this + 2) = 0LL;
        *((_DWORD *)this + 6) = 0;
      }
      else
      {
        __src = 0LL;
        while ( 1 )
        {
          if ( !(*(unsigned int (__fastcall **)(_QWORD, void **, char *))(**((_QWORD **)this + 4) + 16LL))(
                  *((_QWORD *)this + 4),
                  &__src,
                  (char *)this + 24) )
          {
            *((_DWORD *)this + 21) = 0;
            goto LABEL_14;
          }
          v4 = *((unsigned int *)this + 6);
          *((_DWORD *)this + 21) -= v4;
          if ( (int)v4 >= 17 )
            break;
          if ( (int)v4 >= 1 )
          {
            memcpy((char *)this + 56, __src, v4);
            v5 = (_QWORD *)((char *)this + 72);
            v6 = *((_QWORD *)this + 9);
            v3 = (char *)v2 + v4;
            *((_QWORD *)this + 1) = (char *)v2 + v4;
            *((_QWORD *)this + 2) = v2;
            if ( v6 < 2 )
              goto LABEL_19;
            goto LABEL_18;
          }
        }
        v5 = (_QWORD *)((char *)this + 72);
        v7 = *((_QWORD *)this + 9);
        v3 = (char *)this + 56;
        v8 = __src;
        *(_OWORD *)((char *)this + 56) = *(_OWORD *)__src;
        *((_QWORD *)this + 1) = (char *)this + 56;
        *((_QWORD *)this + 2) = v8;
        if ( v7 <= 1 )
          goto LABEL_19;
LABEL_18:
        *v5 = 1LL;
      }
    }
    else
    {
      v3 = (char *)v2 + *((int *)this + 6) - 16;
      *((_QWORD *)this + 1) = v3;
      *((_QWORD *)this + 2) = (char *)this + 40;
      if ( *((_QWORD *)this + 9) == 1LL )
        *((_QWORD *)this + 9) = 2LL;
    }
LABEL_19:
    v9 = *((_DWORD *)this + 7) + (_DWORD)v2 - (_DWORD)v3;
    *((_DWORD *)this + 7) = v9;
    *(_QWORD *)this = &v3[v9 & (v9 >> 31)];
  }
  else
  {
    *(_QWORD *)this = *((_QWORD *)this + 1);
    *((_DWORD *)this + 20) = 1;
  }
  return v2;
}