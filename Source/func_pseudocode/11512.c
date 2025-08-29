__ZNK6google8protobuf8internal12ExtensionSet9GetDoubleEid
double __fastcall google::protobuf::internal::ExtensionSet::GetDouble(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        double a3)
{
  _BYTE *v4; // x0

  v4 = google::protobuf::internal::ExtensionSet::FindOrNull(this, a2);
  if ( v4 && (v4[10] & 1) == 0 )
    return *(double *)v4;
  return a3;
}