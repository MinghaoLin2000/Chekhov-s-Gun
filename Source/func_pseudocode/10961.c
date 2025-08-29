__ZN6google8protobuf17DescriptorBuilder17OptionInterpreter8SetInt32EiiNS0_15FieldDescriptor4TypeEPNS0_15UnknownFieldSetE
void __fastcall google::protobuf::DescriptorBuilder::OptionInterpreter::SetInt32(
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

  if ( (_DWORD)a4 == 17 )
  {
    a3 = (2 * (_DWORD)a3) ^ (unsigned int)((int)a3 >> 31);
LABEL_6:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::UnknownFieldSet::AddVarint(this, a2, a3);
    return;
  }
  if ( (_DWORD)a4 != 15 )
  {
    if ( (_DWORD)a4 != 5 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        v9,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/descriptor.cc",
        7195LL);
      v6 = google::protobuf::internal::LogMessage::operator<<(v9, "Invalid wire type for CPPTYPE_INT32: ");
      v7 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v6, a4);
      google::protobuf::internal::LogFinisher::operator=((int)&v8, v7);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v9);
      return;
    }
    a3 = (int)a3;
    goto LABEL_6;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  google::protobuf::UnknownFieldSet::AddFixed32(this, a2, a3);
}