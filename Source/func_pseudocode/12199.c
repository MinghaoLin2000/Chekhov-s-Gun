__ZN6google8protobuf2io9Tokenizer22TryConsumeCommentStartEv
__int64 __fastcall google::protobuf::io::Tokenizer::TryConsumeCommentStart(google::protobuf::io::Tokenizer *this)
{
  int v2; // w8
  int v3; // w8
  int v4; // w9

  v2 = *((_DWORD *)this + 42);
  if ( v2 == 1 )
  {
    if ( *((_BYTE *)this + 112) == 35 )
    {
LABEL_8:
      google::protobuf::io::Tokenizer::NextChar((__int64)this);
      return 0LL;
    }
    return 3LL;
  }
  if ( v2 || *((_BYTE *)this + 112) != 47 )
    return 3LL;
  google::protobuf::io::Tokenizer::NextChar((__int64)this);
  v3 = *((unsigned __int8 *)this + 112);
  if ( v3 != 42 )
  {
    if ( v3 != 47 )
    {
      *(_DWORD *)this = 6;
      std::string::assign((std::string *)((char *)this + 8), "/");
      v4 = *((_DWORD *)this + 36);
      *((_DWORD *)this + 8) = *((_DWORD *)this + 35);
      *((_DWORD *)this + 9) = v4 - 1;
      *((_DWORD *)this + 10) = v4;
      return 2LL;
    }
    goto LABEL_8;
  }
  google::protobuf::io::Tokenizer::NextChar((__int64)this);
  return 1LL;
}