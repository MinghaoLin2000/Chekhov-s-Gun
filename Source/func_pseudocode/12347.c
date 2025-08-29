__ZN6google8protobuf2io16CodedInputStream16ReadVarint64SlowEPy
bool __fastcall google::protobuf::io::CodedInputStream::ReadVarint64Slow(char **this, unsigned __int64 *a2)
{
  __int64 v4; // x23
  unsigned __int64 v5; // x22
  _BOOL8 v6; // x20
  char *v7; // x8
  char v8; // t1

  v4 = 0LL;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = v4 != 10;
    if ( v4 == 10 )
      break;
    while ( 1 )
    {
      v7 = *this;
      if ( *this != this[1] )
        break;
      if ( (google::protobuf::io::CodedInputStream::Refresh((google::protobuf::io::CodedInputStream *)this) & 1) == 0 )
      {
        v5 = 0LL;
        v6 = 0LL;
        goto LABEL_7;
      }
    }
    v8 = *v7;
    v5 |= (unsigned __int64)(*v7 & 0x7F) << (7 * (unsigned __int8)v4);
    *this = v7 + 1;
    ++v4;
    if ( (v8 & 0x80) == 0 )
      goto LABEL_7;
  }
  v5 = 0LL;
LABEL_7:
  *a2 = v5;
  return v6;
}