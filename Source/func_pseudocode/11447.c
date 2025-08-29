__ZN6google8protobuf25EncodedDescriptorDatabase23FindAllExtensionNumbersERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS2_6vectorIiNS6_IiEEEE
__int64 __fastcall google::protobuf::EncodedDescriptorDatabase::FindAllExtensionNumbers(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x20
  _QWORD v6[2]; // [xsp+0h] [xbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  sub_10007A644(v6, a2);
  return google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::FindAllExtensionNumbers(v4, v6[0], v6[1], a3);
}