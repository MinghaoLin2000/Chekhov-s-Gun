__ZNK6google8protobuf8internal12ExtensionSet8GetFloatEif
float __fastcall google::protobuf::internal::ExtensionSet::GetFloat(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        float a3)
{
  _BYTE *v4; // x0

  v4 = google::protobuf::internal::ExtensionSet::FindOrNull(this, a2);
  if ( v4 && (v4[10] & 1) == 0 )
    return *(float *)v4;
  return a3;
}