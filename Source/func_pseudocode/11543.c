__ZN6google8protobuf8internal12ExtensionSet32FindExtensionInfoFromFieldNumberEiiPNS1_15ExtensionFinderEPNS1_13ExtensionInfoEPb
__int64 __fastcall google::protobuf::internal::ExtensionSet::FindExtensionInfoFromFieldNumber(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        _BYTE *a6)
{
  __int64 result; // x0
  unsigned int v10; // w22
  google::protobuf::internal::LogMessage *v11; // x0
  char v12; // [xsp+Fh] [xbp-51h] BYREF
  _BYTE v13[48]; // [xsp+10h] [xbp-50h] BYREF

  result = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *))(*(_QWORD *)a4 + 16LL))(a4, a3, a5);
  if ( (_DWORD)result )
  {
    v10 = google::protobuf::internal::WireFormatLite::kWireTypeForFieldType[*a5];
    *a6 = 0;
    if ( a2 == 2 && a5[1] )
    {
      if ( v10 > 5 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          v13,
          3LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/extension_set.cc",
          82LL);
        v11 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                          v13,
                                                          "can't reach here.");
        google::protobuf::internal::LogFinisher::operator=((int)&v12, v11);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v13);
      }
      else
      {
        result = 1LL;
        if ( ((1 << v10) & 0x1C) == 0 )
        {
          *a6 = 1;
          return result;
        }
      }
    }
    return v10 == a2;
  }
  return result;
}