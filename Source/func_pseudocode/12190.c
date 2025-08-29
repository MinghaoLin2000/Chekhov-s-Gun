__ZN6google8protobuf2io9Tokenizer7RefreshEv
__int64 __fastcall google::protobuf::io::Tokenizer::Refresh(__int64 this)
{
  __int64 v1; // x19
  std::string *v2; // x0
  __int64 v3; // x8
  int v4; // w9
  char *v5; // x8
  char v6; // w8
  char *v7; // [xsp+8h] [xbp-18h] BYREF

  v1 = this;
  if ( *(_BYTE *)(this + 136) )
  {
    *(_BYTE *)(this + 112) = 0;
  }
  else
  {
    v2 = *(std::string **)(this + 152);
    if ( v2 )
    {
      v3 = *(int *)(v1 + 160);
      v4 = *(_DWORD *)(v1 + 128);
      if ( v4 > (int)v3 )
      {
        std::string::append(v2, (const std::string::value_type *)(*(_QWORD *)(v1 + 120) + v3), v4 - (int)v3);
        *(_DWORD *)(v1 + 160) = 0;
      }
    }
    v7 = 0LL;
    *(_QWORD *)(v1 + 120) = 0LL;
    *(_DWORD *)(v1 + 132) = 0;
    while ( 1 )
    {
      this = (*(__int64 (__fastcall **)(_QWORD, char **, __int64))(**(_QWORD **)(v1 + 96) + 16LL))(
               *(_QWORD *)(v1 + 96),
               &v7,
               v1 + 128);
      if ( (this & 1) == 0 )
        break;
      if ( *(_DWORD *)(v1 + 128) )
      {
        v5 = v7;
        *(_QWORD *)(v1 + 120) = v7;
        v6 = *v5;
        goto LABEL_11;
      }
    }
    v6 = 0;
    *(_DWORD *)(v1 + 128) = 0;
    *(_BYTE *)(v1 + 136) = 1;
LABEL_11:
    *(_BYTE *)(v1 + 112) = v6;
  }
  return this;
}