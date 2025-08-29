__ZNK6google8protobuf8internal12ExtensionSet7GetBoolEib
bool __fastcall google::protobuf::internal::ExtensionSet::GetBool(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        __int64 a3)
{
  _BYTE *v4; // x0

  v4 = google::protobuf::internal::ExtensionSet::FindOrNull(this, a2);
  if ( v4 && (v4[10] & 1) == 0 )
    return *v4 != 0;
  return a3;
}