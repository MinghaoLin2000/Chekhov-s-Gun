__ZNK6google8protobuf8internal12ExtensionSet7GetEnumEii
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetEnum(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        __int64 a3)
{
  _DWORD *v4; // x0

  v4 = google::protobuf::internal::ExtensionSet::FindOrNull(this, a2);
  if ( v4 && (*((_BYTE *)v4 + 10) & 1) == 0 )
    return (unsigned int)*v4;
  return a3;
}