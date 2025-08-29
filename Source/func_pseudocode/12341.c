__ZN6google8protobuf2io16CodedInputStream26ReadLittleEndian32FallbackEPj
bool __fastcall google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
        unsigned int **this,
        unsigned int *a2)
{
  unsigned int *v3; // x20
  _BOOL8 result; // x0
  char __dst[4]; // [xsp+Ch] [xbp-14h] BYREF

  v3 = *this;
  if ( ((*((_DWORD *)this + 2) - (unsigned int)*this) & 0xFFFFFFFC) != 0 )
  {
    *this = v3 + 1;
  }
  else
  {
    v3 = (unsigned int *)__dst;
    result = google::protobuf::io::CodedInputStream::ReadRaw((google::protobuf::io::CodedInputStream *)this, __dst, 4);
    if ( !result )
      return result;
  }
  *a2 = *v3;
  return 1LL;
}