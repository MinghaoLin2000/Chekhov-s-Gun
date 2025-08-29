__ZN6google8protobuf8internal10WireFormat11SkipMessageEPNS0_2io16CodedInputStreamEPNS0_15UnknownFieldSetE
__int64 __fastcall google::protobuf::internal::WireFormat::SkipMessage(
        google::protobuf::internal::WireFormat *this,
        google::protobuf::io::CodedInputStream *a2,
        google::protobuf::UnknownFieldSet *a3)
{
  google::protobuf::io::CodedInputStream *v5; // x0
  google::protobuf::UnknownFieldSet *v6; // x3
  bool v7; // zf
  __int64 v8; // x21

  do
  {
    v5 = (google::protobuf::io::CodedInputStream *)sub_1000C43D8(this);
    if ( (_DWORD)v5 )
      v7 = ((unsigned __int8)v5 & 7) == 4;
    else
      v7 = 1;
    v8 = v7;
  }
  while ( !v7 && google::protobuf::internal::WireFormat::SkipField(this, v5, a2, v6) );
  return v8;
}