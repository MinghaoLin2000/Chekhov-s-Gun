__ZN6google8protobuf8internal23IsStructurallyValidUTF8EPKci
bool __fastcall google::protobuf::internal::IsStructurallyValidUTF8(google::protobuf::internal *this, const char *a2)
{
  int v2; // w19
  int v4; // [xsp+Ch] [xbp-14h] BYREF

  v2 = (int)a2;
  v4 = 0;
  google::protobuf::internal::UTF8GenericScanFastAscii(dword_1001DBFC0, (char *)this, (int)a2, &v4);
  return v4 == v2;
}