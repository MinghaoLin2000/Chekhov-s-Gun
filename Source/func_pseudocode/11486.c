__ZNK6google8protobuf8internal12ExtensionSet13ExtensionSizeEi
google::protobuf::internal::ExtensionSet::Extension *__fastcall google::protobuf::internal::ExtensionSet::ExtensionSize(
        google::protobuf::internal::ExtensionSet *this,
        int a2)
{
  google::protobuf::internal::ExtensionSet::Extension *result; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  result = (google::protobuf::internal::ExtensionSet::Extension *)google::protobuf::internal::ExtensionSet::FindOrNull(
                                                                    this,
                                                                    a2);
  if ( result )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (google::protobuf::internal::ExtensionSet::Extension *)google::protobuf::internal::ExtensionSet::Extension::GetSize(result);
  }
  return result;
}