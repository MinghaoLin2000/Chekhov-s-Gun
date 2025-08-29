__ZN6google8protobuf15UnknownFieldSet23ParseFromZeroCopyStreamEPNS0_2io19ZeroCopyInputStreamE
__int64 __fastcall google::protobuf::UnknownFieldSet::ParseFromZeroCopyStream(
        google::protobuf::UnknownFieldSet *a1,
        __int64 a2)
{
  google::protobuf::UnknownFieldSet *v3; // x2
  unsigned int v4; // w0
  __int64 v5; // x19
  _QWORD v7[6]; // [xsp+0h] [xbp-60h] BYREF
  int v8; // [xsp+30h] [xbp-30h]
  int v9; // [xsp+34h] [xbp-2Ch]
  int v10; // [xsp+38h] [xbp-28h]
  __int64 v11; // [xsp+40h] [xbp-20h]
  __int64 v12; // [xsp+48h] [xbp-18h]

  v7[0] = 0LL;
  v7[1] = 0LL;
  v7[2] = a2;
  memset(&v7[3], 0, 14);
  v7[5] = 0x7FFFFFFFLL;
  v8 = 0x7FFFFFFF;
  v9 = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v10 = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v11 = 0LL;
  v12 = 0LL;
  google::protobuf::io::CodedInputStream::Refresh((google::protobuf::io::CodedInputStream *)v7);
  v4 = google::protobuf::UnknownFieldSet::ParseFromCodedStream(a1, (google::protobuf::io::CodedInputStream *)v7, v3);
  if ( BYTE4(v7[4]) )
    v5 = v4;
  else
    v5 = 0LL;
  google::protobuf::io::CodedInputStream::~CodedInputStream((google::protobuf::io::CodedInputStream *)v7);
  return v5;
}