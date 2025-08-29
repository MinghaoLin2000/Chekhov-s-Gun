__ZNK6google8protobuf8internal12ExtensionSet3HasEi
__int64 __fastcall google::protobuf::internal::ExtensionSet::Has(
        google::protobuf::internal::ExtensionSet *this,
        int a2)
{
  __int64 result; // x0

  result = google::protobuf::internal::ExtensionSet::FindOrNull(this, a2);
  if ( result )
    return (*(_BYTE *)(result + 10) & 1) == 0;
  return result;
}