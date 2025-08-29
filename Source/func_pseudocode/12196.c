__ZN6google8protobuf2io9Tokenizer13ConsumeNumberEbb
__int64 __fastcall google::protobuf::io::Tokenizer::ConsumeNumber(
        google::protobuf::io::Tokenizer *this,
        int a2,
        int a3)
{
  int v4; // w8
  unsigned int v5; // w8
  __int64 v6; // x8
  bool v7; // zf
  unsigned int v8; // w8
  __int64 v9; // x8
  int v11; // w20
  int v12; // w8
  int v13; // w8
  unsigned int v14; // w9
  int v15; // w8
  int v16; // w8
  int v17; // w8
  bool v18; // cc
  void *__p[2]; // [xsp+8h] [xbp-28h] BYREF
  char v21; // [xsp+1Fh] [xbp-11h]

  if ( a2 )
  {
    v4 = *((unsigned __int8 *)this + 112);
    if ( (v4 | 0x20) == 0x78 )
    {
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
      if ( (unsigned __int8)(*((_BYTE *)this + 112) - 48) > 9u
        && ((v5 = *((unsigned __int8 *)this + 112) - 65, v18 = v5 > 0x25, v6 = (1LL << v5) & 0x3F0000003FLL, !v18)
          ? (v7 = v6 == 0)
          : (v7 = 1),
            v7) )
      {
        sub_10007A754((int)__p, "\"0x\" must be followed by hex digits.");
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
          *((_QWORD *)this + 13),
          *((unsigned int *)this + 35),
          *((unsigned int *)this + 36),
          __p);
        if ( v21 < 0 )
          operator delete(__p[0]);
      }
      else
      {
        do
        {
          do
            google::protobuf::io::Tokenizer::NextChar((__int64)this);
          while ( (unsigned __int8)(*((_BYTE *)this + 112) - 48) < 0xAu );
          v8 = *((unsigned __int8 *)this + 112) - 65;
          v18 = v8 > 0x25;
          v9 = (1LL << v8) & 0x3F0000003FLL;
        }
        while ( !v18 && v9 != 0 );
      }
LABEL_14:
      v11 = 0;
      goto LABEL_49;
    }
    if ( (unsigned int)(v4 - 48) <= 9 )
    {
      if ( (v4 & 0xF8) != 0x30 )
        goto LABEL_21;
      do
      {
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
        v12 = *((unsigned __int8 *)this + 112);
      }
      while ( (v12 & 0xF8) == 0x30 );
      if ( (unsigned int)(v12 - 48) <= 9 )
      {
LABEL_21:
        sub_10007A754((int)__p, "Numbers starting with leading zero must be in octal.");
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
          *((_QWORD *)this + 13),
          *((unsigned int *)this + 35),
          *((unsigned int *)this + 36),
          __p);
        if ( v21 < 0 )
          operator delete(__p[0]);
        if ( (unsigned int)*((unsigned __int8 *)this + 112) - 48 <= 9 )
        {
          do
          {
            google::protobuf::io::Tokenizer::NextChar((__int64)this);
            v11 = 0;
          }
          while ( (unsigned int)*((unsigned __int8 *)this + 112) - 48 < 0xA );
          goto LABEL_49;
        }
      }
      goto LABEL_14;
    }
  }
  v13 = *((unsigned __int8 *)this + 112);
  v14 = v13 - 48;
  if ( a3 )
  {
    if ( v14 <= 9 )
    {
      do
      {
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
        v13 = *((unsigned __int8 *)this + 112);
      }
      while ( (unsigned int)(v13 - 48) < 0xA );
    }
  }
  else
  {
    if ( v14 <= 9 )
    {
      do
      {
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
        v13 = *((unsigned __int8 *)this + 112);
      }
      while ( (unsigned int)(v13 - 48) < 0xA );
    }
    if ( v13 != 46 )
    {
      v11 = 0;
      goto LABEL_35;
    }
    google::protobuf::io::Tokenizer::NextChar((__int64)this);
    v13 = *((unsigned __int8 *)this + 112);
    if ( (unsigned int)(v13 - 48) <= 9 )
    {
      do
      {
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
        v13 = *((unsigned __int8 *)this + 112);
      }
      while ( (unsigned int)(v13 - 48) < 0xA );
    }
  }
  v11 = 1;
LABEL_35:
  if ( (v13 | 0x20) == 0x65 )
  {
    google::protobuf::io::Tokenizer::NextChar((__int64)this);
    v15 = *((unsigned __int8 *)this + 112);
    if ( v15 == 45 || v15 == 43 )
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
    if ( (unsigned int)*((unsigned __int8 *)this + 112) - 48 > 9 )
    {
      sub_10007A754((int)__p, "\"e\" must be followed by exponent.");
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
        *((_QWORD *)this + 13),
        *((unsigned int *)this + 35),
        *((unsigned int *)this + 36),
        __p);
      if ( v21 < 0 )
        operator delete(__p[0]);
    }
    else
    {
      do
        google::protobuf::io::Tokenizer::NextChar((__int64)this);
      while ( (unsigned int)*((unsigned __int8 *)this + 112) - 48 < 0xA );
    }
    v11 = 1;
  }
  if ( *((_BYTE *)this + 164) )
  {
    v16 = *((unsigned __int8 *)this + 112);
    if ( v16 == 70 || v16 == 102 )
    {
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
      v11 = 1;
    }
  }
LABEL_49:
  v17 = *((unsigned __int8 *)this + 112);
  v18 = v17 != 95 && (v17 & 0xFFFFFFDF) - 65 > 0x19;
  if ( v18 || !*((_BYTE *)this + 172) )
  {
    if ( v17 != 46 )
      goto LABEL_62;
    if ( v11 )
      sub_10007A754((int)__p, "Already saw decimal point or exponent; can't have another one.");
    else
      sub_10007A754((int)__p, "Hex and octal numbers must be integers.");
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
      *((_QWORD *)this + 13),
      *((unsigned int *)this + 35),
      *((unsigned int *)this + 36),
      __p);
  }
  else
  {
    sub_10007A754((int)__p, "Need space between number and identifier.");
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(**((_QWORD **)this + 13) + 16LL))(
      *((_QWORD *)this + 13),
      *((unsigned int *)this + 35),
      *((unsigned int *)this + 36),
      __p);
  }
  if ( v21 < 0 )
    operator delete(__p[0]);
LABEL_62:
  if ( v11 )
    return 4LL;
  else
    return 3LL;
}