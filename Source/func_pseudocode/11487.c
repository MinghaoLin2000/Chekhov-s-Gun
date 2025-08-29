__ZNK6google8protobuf8internal12ExtensionSet9Extension7GetSizeEv
__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::GetSize(
        google::protobuf::internal::ExtensionSet::Extension *this)
{
  __int64 result; // x0
  google::protobuf::internal::LogMessage *v2; // x0
  char v3; // [xsp+Fh] [xbp-41h] BYREF
  _BYTE v4[48]; // [xsp+10h] [xbp-40h] BYREF

  switch ( *((_BYTE *)this + 8) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
      result = **(unsigned int **)this;
      break;
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      result = *(unsigned int *)(*(_QWORD *)this + 8LL);
      break;
    default:
      google::protobuf::internal::LogMessage::LogMessage(
        v4,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/extension_set.cc",
        1719LL);
      v2 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                       v4,
                                                       "Can't get here.");
      google::protobuf::internal::LogFinisher::operator=((int)&v3, v2);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v4);
      result = 0LL;
      break;
  }
  return result;
}