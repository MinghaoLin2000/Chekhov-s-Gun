__ZN6google8protobuf8internal12ExtensionSet10ParseFieldEyPKcPKNS0_7MessageEPNS1_16InternalMetadataEPNS1_12ParseContextE
__int64 __fastcall google::protobuf::internal::ExtensionSet::ParseField(
        google::protobuf::internal::ExtensionSet *a1,
        unsigned __int64 a2,
        google::protobuf::internal *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned __int64 v10; // x24
  unsigned __int64 v12; // x1
  _BYTE v13[39]; // [xsp+8h] [xbp-58h] BYREF
  int v14; // [xsp+2Fh] [xbp-31h] BYREF

  v10 = a2 >> 3;
  LOBYTE(v14) = 0;
  if ( (sub_1000D3DB0(a1, a2 & 7, a2 >> 3, a4, a6, v13, &v14) & 1) != 0 )
    return sub_1000D3EF4(a1, v10, (unsigned __int8)v14, (int)v13, (int)a5, a3);
  if ( (*a5 & 1) != 0 )
    v12 = (*a5 & 0xFFFFFFFFFFFFFFFELL) + 8;
  else
    v12 = sub_10003A0B4(a5);
  return google::protobuf::internal::UnknownFieldParse(a2, v12);
}