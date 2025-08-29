__ZN6google8protobuf17DescriptorBuilder17OptionInterpreter22AddWithoutInterpretingERKNS0_19UninterpretedOptionEPNS0_7MessageE
__int64 __fastcall google::protobuf::DescriptorBuilder::OptionInterpreter::AddWithoutInterpreting(
        google::protobuf::DescriptorBuilder::OptionInterpreter *this,
        const google::protobuf::UninterpretedOption *a2,
        google::protobuf::Message *a3)
{
  __int64 v5; // x21
  __int64 FieldByName; // x0
  const google::protobuf::FieldDescriptor *v7; // x21
  google::protobuf::internal::LogMessage *v8; // x0
  google::protobuf::Reflection *v9; // x1
  __int64 v10; // x0
  char v12; // [xsp+Fh] [xbp-51h] BYREF
  void *__p[2]; // [xsp+10h] [xbp-50h] BYREF
  char v14; // [xsp+27h] [xbp-39h]

  v5 = (*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a3 + 152LL))(a3);
  sub_10007A754((int)__p, "uninterpreted_option");
  FieldByName = google::protobuf::Descriptor::FindFieldByName(v5, (__int64)__p);
  v7 = (const google::protobuf::FieldDescriptor *)FieldByName;
  if ( v14 < 0 )
  {
    operator delete(__p[0]);
    if ( !v7 )
    {
LABEL_5:
      google::protobuf::internal::LogMessage::LogMessage(
        __p,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/descriptor.cc",
        6773LL);
      v8 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                       __p,
                                                       "CHECK failed: field != nullptr: ");
      google::protobuf::internal::LogFinisher::operator=((int)&v12, v8);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)__p);
    }
  }
  else if ( !FieldByName )
  {
    goto LABEL_5;
  }
  (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a3 + 152LL))(a3);
  v10 = google::protobuf::Reflection::AddMessage(v9, a3, v7, 0LL);
  return (*(__int64 (__fastcall **)(__int64, const google::protobuf::UninterpretedOption *))(*(_QWORD *)v10 + 112LL))(
           v10,
           a2);
}