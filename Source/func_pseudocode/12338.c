__ZN6google8protobuf2io16CodedInputStream7ReadRawEPvi
bool __fastcall google::protobuf::io::CodedInputStream::ReadRaw(
        google::protobuf::io::CodedInputStream *this,
        char *__dst,
        int a3)
{
  int v6; // w22
  const void *v7; // x1
  __int64 v8; // x23
  bool v9; // vf

  while ( 1 )
  {
    v6 = a3;
    v7 = *(const void **)this;
    v8 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    v9 = __OFSUB__(a3, (_DWORD)v8);
    a3 -= v8;
    if ( (a3 < 0) ^ v9 | (a3 == 0) )
      break;
    memcpy(__dst, v7, (int)v8);
    __dst += (int)v8;
    *(_QWORD *)this += (int)v8;
    if ( (google::protobuf::io::CodedInputStream::Refresh(this) & 1) == 0 )
      return v6 <= (int)v8;
  }
  memcpy(__dst, v7, v6);
  *(_QWORD *)this += v6;
  return v6 <= (int)v8;
}