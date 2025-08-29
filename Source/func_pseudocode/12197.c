__ZN6google8protobuf2io9Tokenizer18ConsumeLineCommentEPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
__int64 __fastcall google::protobuf::io::Tokenizer::ConsumeLineComment(__int64 this, __int64 a2)
{
  __int64 v3; // x19
  int v4; // w8
  __int64 v5; // x9

  v3 = this;
  if ( a2 )
  {
    *(_QWORD *)(this + 152) = a2;
    *(_DWORD *)(this + 160) = *(_DWORD *)(this + 132);
  }
  while ( *(_BYTE *)(v3 + 112) )
  {
    if ( *(_BYTE *)(v3 + 112) == 10 )
    {
      this = google::protobuf::io::Tokenizer::NextChar(v3);
      break;
    }
    this = google::protobuf::io::Tokenizer::NextChar(v3);
  }
  if ( a2 )
  {
    v4 = *(_DWORD *)(v3 + 132);
    v5 = *(int *)(v3 + 160);
    if ( v4 != (_DWORD)v5 )
      this = (__int64)std::string::append(
                        *(std::string **)(v3 + 152),
                        (const std::string::value_type *)(*(_QWORD *)(v3 + 120) + v5),
                        v4 - (int)v5);
    *(_QWORD *)(v3 + 152) = 0LL;
    *(_DWORD *)(v3 + 160) = -1;
  }
  return this;
}