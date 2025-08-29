__ZN6google8protobuf2io9Tokenizer4NextEv
__int64 __fastcall google::protobuf::io::Tokenizer::Next(google::protobuf::io::Tokenizer *this)
{
  int v2; // w8
  int v3; // w0
  const char *v4; // x1
  __int64 v5; // x8
  __int64 result; // x0
  int v7; // w8
  __int64 v8; // x21
  __int64 v9; // x22
  google::protobuf::io::Tokenizer *v10; // x0
  int v11; // w1
  int v12; // w8
  int v13; // w8
  int v16; // w0
  __int64 v17; // x20
  __int64 v18; // x21
  __int64 v19; // x22
  int v20; // w2
  google::protobuf::io::Tokenizer *v21; // x0
  unsigned __int8 v22; // w1
  __int64 v23; // x20
  int v24; // w8
  __int64 v25; // x9
  void *__p[2]; // [xsp+8h] [xbp-48h] BYREF
  char v27; // [xsp+1Fh] [xbp-31h]

  *((_DWORD *)this + 12) = *(_DWORD *)this;
  std::string::operator=((std::string *)((char *)this + 56), (const std::string *)((char *)this + 8));
  *((_QWORD *)this + 10) = *((_QWORD *)this + 4);
  *((_DWORD *)this + 22) = *((_DWORD *)this + 10);
  if ( *((_BYTE *)this + 136) )
    goto LABEL_2;
  while ( 1 )
  {
LABEL_4:
    while ( 1 )
    {
      v2 = *((unsigned __int8 *)this + 112);
      if ( (unsigned int)(v2 - 9) >= 5 && v2 != 32 )
        break;
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
    }
    v3 = google::protobuf::io::Tokenizer::TryConsumeCommentStart(this);
    if ( !v3 )
    {
      google::protobuf::io::Tokenizer::ConsumeLineComment((__int64)this, 0LL);
      goto LABEL_20;
    }
    if ( v3 != 1 )
      break;
    google::protobuf::io::Tokenizer::ConsumeBlockComment(this, 0LL);
LABEL_20:
    if ( *((_BYTE *)this + 136) )
      goto LABEL_2;
  }
  if ( v3 == 2 )
    return 1LL;
  if ( *((_BYTE *)this + 136) )
    goto LABEL_2;
  v5 = *((unsigned __int8 *)this + 112);
  if ( (unsigned int)v5 > 0x1F )
  {
    *(_DWORD *)this = 0;
    if ( *((char *)this + 31) < 0 )
    {
      **((_BYTE **)this + 1) = 0;
      *((_QWORD *)this + 2) = 0LL;
      v5 = *((unsigned __int8 *)this + 112);
    }
    else
    {
      *((_BYTE *)this + 8) = 0;
      *((_BYTE *)this + 31) = 0;
    }
    v8 = *((unsigned int *)this + 35);
    v9 = *((unsigned int *)this + 36);
    *((_DWORD *)this + 8) = v8;
    *((_DWORD *)this + 9) = v9;
    *((_QWORD *)this + 19) = (char *)this + 8;
    *((_DWORD *)this + 40) = *((_DWORD *)this + 33);
    if ( (_DWORD)v5 == 95 || ((unsigned int)v5 & 0xFFFFFFDF) - 65 <= 0x19 )
    {
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
      v12 = *((unsigned __int8 *)this + 112);
      if ( v12 == 95 || (unsigned int)(v12 - 48) < 0xA || (v12 & 0xFFFFFFDF) - 65 <= 0x19 )
      {
        do
        {
          google::protobuf::io::Tokenizer::NextChar((__int64)this);
          v13 = *((unsigned __int8 *)this + 112);
        }
        while ( v13 == 95 || (unsigned int)(v13 - 48) < 0xA || (v13 & 0xFFFFFFDF) - 65 < 0x1A );
      }
      v16 = 2;
      goto LABEL_68;
    }
    if ( (_DWORD)v5 == 46 )
    {
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
      if ( (unsigned int)*((unsigned __int8 *)this + 112) - 48 <= 9 )
      {
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
        if ( *((_DWORD *)this + 12) == 2
          && *((_DWORD *)this + 8) == *((_DWORD *)this + 20)
          && *((_DWORD *)this + 9) == *((_DWORD *)this + 22) )
        {
          v17 = *((_QWORD *)this + 13);
          v18 = *((unsigned int *)this + 35);
          v19 = (unsigned int)(*((_DWORD *)this + 36) - 2);
          sub_10007A754((int)__p, "Need space between identifier and decimal point.");
          (*(void (__fastcall **)(__int64, __int64, __int64, void **))(*(_QWORD *)v17 + 16LL))(v17, v18, v19, __p);
          if ( v27 < 0 )
            operator delete(__p[0]);
        }
        v10 = this;
        v11 = 0;
        v20 = 1;
        goto LABEL_57;
      }
    }
    else
    {
      if ( (_DWORD)v5 == 48 )
      {
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
        v10 = this;
        v11 = 1;
LABEL_56:
        v20 = 0;
LABEL_57:
        v16 = google::protobuf::io::Tokenizer::ConsumeNumber(v10, v11, v20);
LABEL_68:
        *(_DWORD *)this = v16;
        v24 = *((_DWORD *)this + 33);
        v25 = *((int *)this + 40);
        if ( v24 != (_DWORD)v25 )
          std::string::append(
            *((std::string **)this + 19),
            (const std::string::value_type *)(*((_QWORD *)this + 15) + v25),
            v24 - (int)v25);
        *((_QWORD *)this + 19) = 0LL;
        *((_DWORD *)this + 40) = -1;
        v7 = *((_DWORD *)this + 36);
        result = 1LL;
        goto LABEL_24;
      }
      if ( (unsigned int)(v5 - 48) <= 9 )
      {
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
        v10 = this;
        v11 = 0;
        goto LABEL_56;
      }
      if ( (_DWORD)v5 == 39 )
      {
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
        v21 = this;
        v22 = 39;
        goto LABEL_62;
      }
      if ( (_DWORD)v5 == 34 )
      {
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
        v21 = this;
        v22 = 34;
LABEL_62:
        google::protobuf::io::Tokenizer::ConsumeString(v21, v22);
        v16 = 5;
        goto LABEL_68;
      }
      if ( (v5 & 0x80) != 0 )
      {
        v23 = *((_QWORD *)this + 13);
        google::protobuf::StringPrintf(
          (__int64 *)__p,
          (google::protobuf *)"Interpreting non ascii codepoint %d.",
          v4,
          v5);
        (*(void (__fastcall **)(__int64, __int64, __int64, void **))(*(_QWORD *)v23 + 16LL))(v23, v8, v9, __p);
        if ( v27 < 0 )
          operator delete(__p[0]);
      }
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
    }
    v16 = 6;
    goto LABEL_68;
  }
  sub_10007A754((int)__p, "Invalid control characters encountered in text.");
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
    *((_QWORD *)this + 13),
    *((unsigned int *)this + 35),
    *((unsigned int *)this + 36),
    __p);
  if ( v27 < 0 )
    operator delete(__p[0]);
  while ( 1 )
  {
    do
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
    while ( (unsigned int)*((unsigned __int8 *)this + 112) - 1 < 0x1F );
    if ( *((_BYTE *)this + 136) )
      break;
    if ( *((_BYTE *)this + 112) )
      goto LABEL_4;
  }
LABEL_2:
  *(_DWORD *)this = 1;
  if ( *((char *)this + 31) < 0 )
  {
    **((_BYTE **)this + 1) = 0;
    *((_QWORD *)this + 2) = 0LL;
  }
  else
  {
    *((_BYTE *)this + 8) = 0;
    *((_BYTE *)this + 31) = 0;
  }
  result = 0LL;
  v7 = *((_DWORD *)this + 36);
  *((_DWORD *)this + 8) = *((_DWORD *)this + 35);
  *((_DWORD *)this + 9) = v7;
LABEL_24:
  *((_DWORD *)this + 10) = v7;
  return result;
}