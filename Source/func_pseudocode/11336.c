__ZN6google8protobuf23SourceCodeInfo_Location5ClearEv
__int64 __fastcall google::protobuf::SourceCodeInfo_Location::Clear(google::protobuf::SourceCodeInfo_Location *this)
{
  __int64 result; // x0
  int v3; // w8
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x8
  char *v6; // x19
  char v7; // t1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 12) = 0;
  result = sub_1000B8898((char *)this + 72);
  v3 = *((_DWORD *)this + 4);
  if ( (v3 & 3) != 0 )
  {
    if ( (v3 & 1) != 0 )
    {
      v4 = *((_QWORD *)this + 12) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(char *)(v4 + 23) < 0 )
      {
        **(_BYTE **)v4 = 0;
        *(_QWORD *)(v4 + 8) = 0LL;
        if ( (v3 & 2) == 0 )
          goto LABEL_11;
        goto LABEL_6;
      }
      *(_BYTE *)v4 = 0;
      *(_BYTE *)(v4 + 23) = 0;
    }
    if ( (v3 & 2) == 0 )
      goto LABEL_11;
LABEL_6:
    v5 = *((_QWORD *)this + 13) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v5 + 23) < 0 )
    {
      **(_BYTE **)v5 = 0;
      *(_QWORD *)(v5 + 8) = 0LL;
    }
    else
    {
      *(_BYTE *)v5 = 0;
      *(_BYTE *)(v5 + 23) = 0;
    }
  }
LABEL_11:
  v7 = *((_BYTE *)this + 8);
  v6 = (char *)this + 8;
  *((_DWORD *)v6 + 2) = 0;
  if ( (v7 & 1) != 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10003A2A8(v6);
  }
  return result;
}