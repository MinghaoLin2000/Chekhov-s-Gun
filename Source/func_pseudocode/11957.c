__ZN6google8protobuf8internal10VerifyUTF8ENS0_11StringPieceEPKc
__int64 __fastcall google::protobuf::internal::VerifyUTF8(
        google::protobuf::internal *a1,
        const char *a2,
        google::protobuf::internal *a3)
{
  bool v4; // w3
  __int64 IsStructurallyValidUTF8; // x20

  IsStructurallyValidUTF8 = google::protobuf::internal::IsStructurallyValidUTF8(a1, a2, (int)a3);
  if ( (IsStructurallyValidUTF8 & 1) == 0 )
    google::protobuf::internal::PrintUTF8ErrorLog(a3, "parsing", 0LL, v4);
  return IsStructurallyValidUTF8;
}