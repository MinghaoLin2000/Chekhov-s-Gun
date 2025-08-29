__ZN6google8protobuf2io9Tokenizer19ConsumeBlockCommentEPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
void __fastcall google::protobuf::io::Tokenizer::ConsumeBlockComment(google::protobuf::io::Tokenizer *this, __int64 a2)
{
  __int64 v4; // x21
  __int64 v5; // x22
  unsigned int v6; // w8
  int v7; // w8
  __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x23
  int v11; // w8
  __int64 v12; // x9
  int v13; // w8
  __int64 v14; // x9
  __int64 v15; // x8
  void *__p[2]; // [xsp+8h] [xbp-58h] BYREF
  char v17; // [xsp+1Fh] [xbp-41h]

  v4 = *((unsigned int *)this + 35);
  v5 = (unsigned int)(*((_DWORD *)this + 36) - 2);
  if ( a2 )
  {
    *((_QWORD *)this + 19) = a2;
    *((_DWORD *)this + 40) = *((_DWORD *)this + 33);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *((unsigned __int8 *)this + 112);
      if ( v6 > 0x29 )
        break;
      if ( *((_BYTE *)this + 112) )
      {
        if ( v6 != 10 )
          goto LABEL_22;
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
        if ( a2 )
        {
          v7 = *((_DWORD *)this + 33);
          v8 = *((int *)this + 40);
          if ( v7 != (_DWORD)v8 )
            std::string::append(
              *((std::string **)this + 19),
              (const std::string::value_type *)(*((_QWORD *)this + 15) + v8),
              v7 - (int)v8);
          *((_QWORD *)this + 19) = 0LL;
          *((_DWORD *)this + 40) = -1;
        }
        while ( 1 )
        {
          v9 = *((unsigned __int8 *)this + 112);
          if ( (unsigned int)v9 > 0x2A )
            break;
          if ( ((1LL << v9) & 0x100003A00LL) == 0 )
          {
            if ( v9 == 42 )
            {
              google::protobuf::io::Tokenizer::NextChar((__int64)this);
              if ( *((_BYTE *)this + 112) == 47 )
              {
                google::protobuf::io::Tokenizer::NextChar((__int64)this);
                return;
              }
            }
            break;
          }
          google::protobuf::io::Tokenizer::NextChar((__int64)this);
        }
        if ( a2 )
        {
          *((_QWORD *)this + 19) = a2;
          *((_DWORD *)this + 40) = *((_DWORD *)this + 33);
        }
      }
      else
      {
LABEL_24:
        if ( !v6 )
        {
          sub_10007A754((int)__p, "End-of-file inside block comment.");
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
            *((_QWORD *)this + 13),
            *((unsigned int *)this + 35),
            *((unsigned int *)this + 36),
            __p);
          if ( v17 < 0 )
            operator delete(__p[0]);
          v10 = *((_QWORD *)this + 13);
          sub_10007A754((int)__p, "  Comment started here.");
          (*(void (__fastcall **)(__int64, __int64, __int64, void **))(*(_QWORD *)v10 + 16LL))(v10, v4, v5, __p);
          if ( v17 < 0 )
            operator delete(__p[0]);
          if ( a2 )
          {
            v11 = *((_DWORD *)this + 33);
            v12 = *((int *)this + 40);
            if ( v11 != (_DWORD)v12 )
              std::string::append(
                *((std::string **)this + 19),
                (const std::string::value_type *)(*((_QWORD *)this + 15) + v12),
                v11 - (int)v12);
            *((_QWORD *)this + 19) = 0LL;
            *((_DWORD *)this + 40) = -1;
          }
          return;
        }
      }
    }
    if ( v6 == 42 )
      break;
    if ( v6 == 47 )
    {
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
      v6 = *((unsigned __int8 *)this + 112);
      if ( v6 != 42 )
        goto LABEL_24;
      sub_10007A754((int)__p, "\"/*\" inside block comment.  Block comments cannot be nested.");
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
        *((_QWORD *)this + 13),
        *((unsigned int *)this + 35),
        *((unsigned int *)this + 36),
        __p);
      if ( v17 < 0 )
        operator delete(__p[0]);
    }
    else
    {
LABEL_22:
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
    }
  }
  google::protobuf::io::Tokenizer::NextChar((__int64)this);
  v6 = *((unsigned __int8 *)this + 112);
  if ( v6 != 47 )
    goto LABEL_24;
  google::protobuf::io::Tokenizer::NextChar((__int64)this);
  if ( a2 )
  {
    v13 = *((_DWORD *)this + 33);
    v14 = *((int *)this + 40);
    if ( v13 != (_DWORD)v14 )
      std::string::append(
        *((std::string **)this + 19),
        (const std::string::value_type *)(*((_QWORD *)this + 15) + v14),
        v13 - (int)v14);
    *((_QWORD *)this + 19) = 0LL;
    *((_DWORD *)this + 40) = -1;
    if ( *(char *)(a2 + 23) < 0 )
      v15 = *(_QWORD *)(a2 + 8);
    else
      v15 = *(unsigned __int8 *)(a2 + 23);
    std::string::erase((std::string *)a2, v15 - 2, 0xFFFFFFFFFFFFFFFFLL);
  }
}