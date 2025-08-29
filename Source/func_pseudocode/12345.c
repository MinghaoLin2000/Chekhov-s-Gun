__ZN6google8protobuf2io16CodedInputStream11ReadTagSlowEv
__int64 __fastcall google::protobuf::io::CodedInputStream::ReadTagSlow(google::protobuf::io::CodedInputStream *this)
{
  char *v2; // x8
  unsigned __int64 v3; // x9
  __int64 result; // x0
  char v5; // w1
  int v6; // w8
  bool v7; // w8

  v2 = *(char **)this;
  v3 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)this != v3 )
  {
LABEL_4:
    if ( (unsigned __int64)v2 >= v3 || *v2 < 0 )
    {
      result = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(this);
      if ( (v5 & 1) == 0 )
        return 0LL;
    }
    else
    {
      result = (unsigned __int8)*v2;
      *(_QWORD *)this = v2 + 1;
    }
    return result;
  }
  if ( (unsigned int)google::protobuf::io::CodedInputStream::Refresh(this) )
  {
    v2 = *(char **)this;
    v3 = *((_QWORD *)this + 1);
    goto LABEL_4;
  }
  v6 = *((_DWORD *)this + 12);
  result = 0LL;
  v7 = *((_DWORD *)this + 6) - *((_DWORD *)this + 11) < v6 || *((_DWORD *)this + 10) == v6;
  *((_BYTE *)this + 36) = v7;
  return result;
}