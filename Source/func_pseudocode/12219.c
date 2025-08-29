__ZN6google8protobuf15UnknownFieldSet20ParseFromCodedStreamEPNS0_2io16CodedInputStreamE
__int64 __fastcall google::protobuf::UnknownFieldSet::ParseFromCodedStream(
        google::protobuf::UnknownFieldSet *this,
        google::protobuf::io::CodedInputStream *a2,
        google::protobuf::UnknownFieldSet *a3)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( *(_QWORD *)this != *((_QWORD *)this + 1) )
    google::protobuf::UnknownFieldSet::ClearFallback(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::UnknownFieldSet::MergeFromCodedStream(this, a2, a3);
}