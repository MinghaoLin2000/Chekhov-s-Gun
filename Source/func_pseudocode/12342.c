__ZN6google8protobuf2io16CodedInputStream26ReadLittleEndian64FallbackEPy
bool __fastcall google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
        unsigned __int64 **this,
        unsigned __int64 *a2)
{
  unsigned __int64 *v3; // x20
  _BOOL8 result; // x0
  char v5[8]; // [xsp+0h] [xbp-20h] BYREF

  v3 = *this;
  if ( ((*((_DWORD *)this + 2) - (unsigned int)*this) & 0xFFFFFFF8) != 0 )
  {
    *this = v3 + 1;
  }
  else
  {
    v3 = (unsigned __int64 *)v5;
    result = google::protobuf::io::CodedInputStream::ReadRaw((google::protobuf::io::CodedInputStream *)this, v5, 8);
    if ( !result )
      return result;
  }
  *a2 = *v3;
  return 1LL;
}