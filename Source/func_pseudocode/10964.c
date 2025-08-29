__ZN6google8protobuf17DescriptorBuilder17OptionInterpreter9SetUInt64EiyNS0_15FieldDescriptor4TypeEPNS0_15UnknownFieldSetE
void __fastcall google::protobuf::DescriptorBuilder::OptionInterpreter::SetUInt64(
        int a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        google::protobuf::UnknownFieldSet *this)
{
  __int64 v6; // x0
  google::protobuf::internal::LogMessage *v7; // x0
  char v8; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v9[48]; // [xsp+10h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  if ( (_DWORD)a4 == 6 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::UnknownFieldSet::AddFixed64(this, a2, a3);
  }
  else if ( (_DWORD)a4 == 4 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::UnknownFieldSet::AddVarint(this, a2, a3);
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v9,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/descriptor.cc",
      7254LL);
    v6 = google::protobuf::internal::LogMessage::operator<<(v9, "Invalid wire type for CPPTYPE_UINT64: ");
    v7 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v6, a4);
    google::protobuf::internal::LogFinisher::operator=((int)&v8, v7);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v9);
  }
}