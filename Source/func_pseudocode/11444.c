__ZN6google8protobuf25EncodedDescriptorDatabase24FindFileContainingSymbolERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS0_19FileDescriptorProtoE
const void *__fastcall google::protobuf::EncodedDescriptorDatabase::FindFileContainingSymbol(
        __int64 a1,
        __int64 a2,
        google::protobuf::MessageLite *a3)
{
  google::protobuf::EncodedDescriptorDatabase::DescriptorIndex *v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  const void *result; // x0
  int v8; // w1
  _QWORD v9[2]; // [xsp+0h] [xbp-30h] BYREF

  v4 = *(google::protobuf::EncodedDescriptorDatabase::DescriptorIndex **)(a1 + 8);
  sub_10007A644(v9, a2);
  v5 = v9[0];
  v6 = v9[1];
  google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::EnsureFlat(v4);
  result = (const void *)google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::FindSymbolOnlyFlat(v4, v5, v6);
  if ( result )
    return (const void *)google::protobuf::MessageLite::ParseFromArray(a3, result, v8);
  return result;
}