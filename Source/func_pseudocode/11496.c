__ZNK6google8protobuf8internal12ExtensionSet8GetInt64Eix
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetInt64(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        __int64 a3)
{
  _BYTE *v4; // x0

  v4 = google::protobuf::internal::ExtensionSet::FindOrNull(this, a2);
  if ( v4 && (v4[10] & 1) == 0 )
    return *(_QWORD *)v4;
  return a3;
}