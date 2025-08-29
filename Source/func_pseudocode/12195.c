__ZN6google8protobuf2io9Tokenizer13ConsumeStringEc
void __fastcall google::protobuf::io::Tokenizer::ConsumeString(
        google::protobuf::io::Tokenizer *this,
        unsigned __int8 a2)
{
  int v4; // w8
  int v5; // w28
  int v6; // w8
  bool v7; // zf
  unsigned int v8; // w8
  unsigned int v9; // w8
  unsigned int v10; // w8
  unsigned int v11; // w8
  unsigned int v12; // w8
  unsigned int v13; // w8
  unsigned int v14; // w8
  unsigned int v15; // w8
  unsigned int v16; // w8
  unsigned int v17; // w8
  void *__p[2]; // [xsp+8h] [xbp-68h] BYREF
  char v19; // [xsp+1Fh] [xbp-51h]

  while ( 1 )
  {
    v4 = *((char *)this + 112);
    if ( v4 == 10 )
      break;
    if ( v4 == 92 )
    {
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
      v6 = *((unsigned __int8 *)this + 112);
      v7 = (unsigned int)(v6 - 97) > 0x15 || ((1 << (v6 - 97)) & 0x2A2023) == 0;
      if ( !v7
        || (unsigned int)(v6 - 34) <= 0x3A && ((1LL << ((unsigned __int8)v6 - 34)) & 0x400000020000021LL) != 0
        || (v6 & 0xF8) == 0x30 )
      {
        goto LABEL_22;
      }
      switch ( v6 )
      {
        case 'U':
          google::protobuf::io::Tokenizer::NextChar((__int64)this);
          if ( *((_BYTE *)this + 112) != 48 )
            goto LABEL_41;
          google::protobuf::io::Tokenizer::NextChar((__int64)this);
          if ( *((_BYTE *)this + 112) != 48 )
            goto LABEL_41;
          google::protobuf::io::Tokenizer::NextChar((__int64)this);
          if ( (*((_BYTE *)this + 112) & 0xFE) != 0x30 )
            goto LABEL_41;
          google::protobuf::io::Tokenizer::NextChar((__int64)this);
          if ( (unsigned __int8)(*((_BYTE *)this + 112) - 48) >= 0xAu )
          {
            v9 = *((unsigned __int8 *)this + 112) - 65;
            if ( v9 > 0x25 || ((1LL << v9) & 0x3F0000003FLL) == 0 )
              goto LABEL_41;
          }
          google::protobuf::io::Tokenizer::NextChar((__int64)this);
          if ( (unsigned __int8)(*((_BYTE *)this + 112) - 48) >= 0xAu )
          {
            v10 = *((unsigned __int8 *)this + 112) - 65;
            if ( v10 > 0x25 || ((1LL << v10) & 0x3F0000003FLL) == 0 )
              goto LABEL_41;
          }
          if ( (google::protobuf::io::Tokenizer::NextChar((__int64)this),
                (unsigned __int8)(*((_BYTE *)this + 112) - 48) >= 0xAu)
            && ((v11 = *((unsigned __int8 *)this + 112) - 65, v11 > 0x25) || ((1LL << v11) & 0x3F0000003FLL) == 0)
            || (google::protobuf::io::Tokenizer::NextChar((__int64)this),
                (unsigned __int8)(*((_BYTE *)this + 112) - 48) >= 0xAu)
            && ((v12 = *((unsigned __int8 *)this + 112) - 65, v12 > 0x25) || ((1LL << v12) & 0x3F0000003FLL) == 0)
            || (google::protobuf::io::Tokenizer::NextChar((__int64)this),
                (unsigned __int8)(*((_BYTE *)this + 112) - 48) >= 0xAu)
            && ((v13 = *((unsigned __int8 *)this + 112) - 65, v13 > 0x25) || ((1LL << v13) & 0x3F0000003FLL) == 0) )
          {
LABEL_41:
            sub_10007A754((int)__p, "Expected eight hex digits up to 10ffff for \\U escape sequence");
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
              *((_QWORD *)this + 13),
              *((unsigned int *)this + 35),
              *((unsigned int *)this + 36),
              __p);
            goto LABEL_56;
          }
LABEL_22:
          google::protobuf::io::Tokenizer::NextChar((__int64)this);
          break;
        case 'u':
          google::protobuf::io::Tokenizer::NextChar((__int64)this);
          if ( (unsigned __int8)(*((_BYTE *)this + 112) - 48) >= 0xAu
            && ((v14 = *((unsigned __int8 *)this + 112) - 65, v14 > 0x25) || ((1LL << v14) & 0x3F0000003FLL) == 0)
            || (google::protobuf::io::Tokenizer::NextChar((__int64)this),
                (unsigned __int8)(*((_BYTE *)this + 112) - 48) >= 0xAu)
            && ((v15 = *((unsigned __int8 *)this + 112) - 65, v15 > 0x25) || ((1LL << v15) & 0x3F0000003FLL) == 0)
            || (google::protobuf::io::Tokenizer::NextChar((__int64)this),
                (unsigned __int8)(*((_BYTE *)this + 112) - 48) >= 0xAu)
            && ((v16 = *((unsigned __int8 *)this + 112) - 65, v16 > 0x25) || ((1LL << v16) & 0x3F0000003FLL) == 0)
            || (google::protobuf::io::Tokenizer::NextChar((__int64)this),
                (unsigned __int8)(*((_BYTE *)this + 112) - 48) >= 0xAu)
            && ((v17 = *((unsigned __int8 *)this + 112) - 65, v17 > 0x25) || ((1LL << v17) & 0x3F0000003FLL) == 0) )
          {
            sub_10007A754((int)__p, "Expected four hex digits for \\u escape sequence.");
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
              *((_QWORD *)this + 13),
              *((unsigned int *)this + 35),
              *((unsigned int *)this + 36),
              __p);
            goto LABEL_56;
          }
          goto LABEL_22;
        case 'x':
          google::protobuf::io::Tokenizer::NextChar((__int64)this);
          if ( (unsigned __int8)(*((_BYTE *)this + 112) - 48) < 0xAu )
            goto LABEL_22;
          v8 = *((unsigned __int8 *)this + 112) - 65;
          if ( v8 <= 0x25 && ((1LL << v8) & 0x3F0000003FLL) != 0 )
            goto LABEL_22;
          sub_10007A754((int)__p, "Expected hex digits for escape sequence.");
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
            *((_QWORD *)this + 13),
            *((unsigned int *)this + 35),
            *((unsigned int *)this + 36),
            __p);
LABEL_56:
          if ( v19 < 0 )
            operator delete(__p[0]);
          break;
        default:
          sub_10007A754((int)__p, "Invalid escape sequence in string literal.");
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
            *((_QWORD *)this + 13),
            *((unsigned int *)this + 35),
            *((unsigned int *)this + 36),
            __p);
          goto LABEL_56;
      }
    }
    else
    {
      if ( !*((_BYTE *)this + 112) )
      {
        sub_10007A754((int)__p, "Unexpected end of string.");
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
          *((_QWORD *)this + 13),
          *((unsigned int *)this + 35),
          *((unsigned int *)this + 36),
          __p);
        goto LABEL_60;
      }
      v5 = *((unsigned __int8 *)this + 112);
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
      if ( v5 == a2 )
        return;
    }
  }
  if ( *((_BYTE *)this + 173) )
    goto LABEL_22;
  sub_10007A754((int)__p, "String literals cannot cross line boundaries.");
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
    *((_QWORD *)this + 13),
    *((unsigned int *)this + 35),
    *((unsigned int *)this + 36),
    __p);
LABEL_60:
  if ( v19 < 0 )
    operator delete(__p[0]);
}