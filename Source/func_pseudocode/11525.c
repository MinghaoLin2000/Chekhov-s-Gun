__ZNK6google8protobuf8internal12ExtensionSet9GetStringEiRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetString(
        google::protobuf::internal::ExtensionSet *a1,
        int a2,
        __int64 a3)
{
  _BYTE *v4; // x0

  v4 = google::protobuf::internal::ExtensionSet::FindOrNull(a1, a2);
  if ( v4 && (v4[10] & 1) == 0 )
    return *(_QWORD *)v4;
  return a3;
}