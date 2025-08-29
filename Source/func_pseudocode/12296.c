__ZN6google8protobuf8internal14WireFormatLite16VerifyUtf8StringEPKciNS2_9OperationES4_
__int64 __fastcall google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        google::protobuf::internal *a1,
        const char *a2,
        int a3,
        google::protobuf::internal *a4)
{
  __int64 IsStructurallyValidUTF8; // x20
  const char *v7; // x8
  const char *v8; // x1

  IsStructurallyValidUTF8 = google::protobuf::internal::IsStructurallyValidUTF8(a1, a2, a3);
  if ( (IsStructurallyValidUTF8 & 1) == 0 )
  {
    v7 = "serializing";
    if ( a3 != 1 )
      v7 = 0LL;
    if ( a3 )
      v8 = v7;
    else
      v8 = "parsing";
    google::protobuf::internal::PrintUTF8ErrorLog(a4, v8, 0LL);
  }
  return IsStructurallyValidUTF8;
}