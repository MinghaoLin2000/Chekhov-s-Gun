__ZNK6google8protobuf12FieldOptions13IsInitializedEv
__int64 __fastcall google::protobuf::FieldOptions::IsInitialized(google::protobuf::FieldOptions *this)
{
  __int64 result; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = google::protobuf::internal::ExtensionSet::IsInitialized((google::protobuf::FieldOptions *)((char *)this + 16));
  if ( (_DWORD)result )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_1000A7B4C((char *)this + 48);
  }
  return result;
}