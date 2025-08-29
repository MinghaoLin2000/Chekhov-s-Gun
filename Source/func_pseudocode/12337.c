__ZN6google8protobuf2io16CodedInputStream7RefreshEv
__int64 __fastcall google::protobuf::io::CodedInputStream::Refresh(google::protobuf::io::CodedInputStream *this)
{
  int v2; // w8
  int v3; // w9
  __int64 v4; // x20
  __int64 v6; // x21
  int v7; // w8
  __int64 v8; // x9
  std::string *v9; // x0
  int v10; // w9
  int v11; // w10
  __int64 v12; // x9
  int v13; // w8
  int v14; // w11
  __int64 v15; // x9
  int v16; // w10
  bool v17; // vf
  int v18; // w8
  char v19; // [xsp+Fh] [xbp-61h] BYREF
  std::string v20[2]; // [xsp+10h] [xbp-60h] BYREF
  int v21; // [xsp+44h] [xbp-2Ch] BYREF
  __int64 v22; // [xsp+48h] [xbp-28h] BYREF

  v2 = *((_DWORD *)this + 11);
  if ( v2 > 0 || *((int *)this + 7) > 0 || *((_DWORD *)this + 6) == *((_DWORD *)this + 10) )
  {
    v3 = *((_DWORD *)this + 12);
    if ( *((_DWORD *)this + 6) - v2 >= v3 && v3 != *((_DWORD *)this + 10) )
      google::protobuf::io::CodedInputStream::PrintTotalBytesLimitError(this);
    return 0LL;
  }
  else
  {
    v22 = 0LL;
    v21 = 0;
    v6 = *((_QWORD *)this + 2);
    do
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)v6 + 16LL))(v6, &v22, &v21);
      if ( !(_DWORD)v4 )
      {
        *(_QWORD *)this = 0LL;
        *((_QWORD *)this + 1) = 0LL;
        return v4;
      }
      v7 = v21;
    }
    while ( !v21 );
    v8 = v22 + v21;
    *(_QWORD *)this = v22;
    *((_QWORD *)this + 1) = v8;
    if ( v7 < 0 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (__int64)v20,
        3,
        (__int64)"/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sou"
                 "rces/iWorkXPC/shared/persistence/google/protobuf/io/coded_stream.cc",
        638);
      v9 = google::protobuf::internal::LogMessage::operator<<(v20, "CHECK failed: (buffer_size) >= (0): ");
      google::protobuf::internal::LogFinisher::operator=((int)&v19, (google::protobuf::internal::LogMessage *)v9);
      google::protobuf::internal::LogMessage::~LogMessage((void **)&v20[0].__r_.__value_.__l.__data_);
      v7 = v21;
    }
    v10 = *((_DWORD *)this + 6);
    v11 = v10 - (v7 ^ 0x7FFFFFFF);
    if ( v10 <= (v7 ^ 0x7FFFFFFF) )
    {
      v13 = v7 + v10;
      v12 = *((_QWORD *)this + 1);
    }
    else
    {
      *((_DWORD *)this + 7) = v11;
      v12 = *((_QWORD *)this + 1) - v11;
      *((_QWORD *)this + 1) = v12;
      v13 = 0x7FFFFFFF;
    }
    *((_DWORD *)this + 6) = v13;
    v14 = *((_DWORD *)this + 10);
    v15 = v12 + *((int *)this + 11);
    *((_QWORD *)this + 1) = v15;
    v16 = *((_DWORD *)this + 12);
    if ( v16 >= v14 )
      v16 = v14;
    v17 = __OFSUB__(v13, v16);
    v18 = v13 - v16;
    if ( (v18 < 0) ^ v17 | (v18 == 0) )
      v18 = 0;
    else
      *((_QWORD *)this + 1) = v15 - v18;
    *((_DWORD *)this + 11) = v18;
  }
  return v4;
}