__ZN6google8protobuf28GeneratedCodeInfo_Annotation5ClearEv
__int64 __fastcall google::protobuf::GeneratedCodeInfo_Annotation::Clear(
        google::protobuf::GeneratedCodeInfo_Annotation *this)
{
  int v1; // w8
  unsigned __int64 v2; // x9
  __int64 result; // x0
  char v4; // t1

  *((_DWORD *)this + 6) = 0;
  v1 = *((_DWORD *)this + 4);
  if ( (v1 & 1) != 0 )
  {
    v2 = *((_QWORD *)this + 6) & 0xFFFFFFFFFFFFFFFELL;
    if ( *(char *)(v2 + 23) < 0 )
    {
      **(_BYTE **)v2 = 0;
      *(_QWORD *)(v2 + 8) = 0LL;
    }
    else
    {
      *(_BYTE *)v2 = 0;
      *(_BYTE *)(v2 + 23) = 0;
    }
  }
  if ( (v1 & 6) != 0 )
    *((_QWORD *)this + 7) = 0LL;
  v4 = *((_BYTE *)this + 8);
  result = (__int64)this + 8;
  *(_DWORD *)(result + 8) = 0;
  if ( (v4 & 1) != 0 )
    return sub_10003A2A8(result);
  return result;
}