__ZN6google8protobuf2io9Tokenizer8NextCharEv
__int64 __fastcall google::protobuf::io::Tokenizer::NextChar(__int64 this)
{
  int v1; // w8
  int v2; // w8
  int v3; // w9
  int v4; // w8
  int v5; // w9
  __int64 v6; // x8

  v1 = *(unsigned __int8 *)(this + 112);
  if ( v1 == 9 )
  {
    v2 = *(_DWORD *)(this + 144);
    if ( v2 <= 0 )
      v3 = -(-v2 & 7);
    else
      v3 = *(_DWORD *)(this + 144) & 7;
    v4 = v2 - v3 + 8;
  }
  else
  {
    if ( v1 == 10 )
    {
      *(_QWORD *)(this + 140) = (unsigned int)(*(_DWORD *)(this + 140) + 1);
      goto LABEL_10;
    }
    v4 = *(_DWORD *)(this + 144) + 1;
  }
  *(_DWORD *)(this + 144) = v4;
LABEL_10:
  v5 = *(_DWORD *)(this + 128);
  v6 = *(int *)(this + 132) + 1LL;
  *(_DWORD *)(this + 132) = v6;
  if ( (int)v6 >= v5 )
    return google::protobuf::io::Tokenizer::Refresh(this);
  *(_BYTE *)(this + 112) = *(_BYTE *)(*(_QWORD *)(this + 120) + v6);
  return this;
}