__ZN6google8protobuf25EncodedDescriptorDatabase27FindFileContainingExtensionERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiPNS0_19FileDescriptorProtoE
const void *__fastcall google::protobuf::EncodedDescriptorDatabase::FindFileContainingExtension(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        google::protobuf::MessageLite *a4)
{
  __int64 v6; // x21
  const void *result; // x0
  int v8; // w1
  _QWORD v9[2]; // [xsp+0h] [xbp-30h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  sub_10007A644(v9, a2);
  result = (const void *)google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::FindExtension(
                           v6,
                           v9[0],
                           v9[1],
                           a3);
  if ( result )
    return (const void *)google::protobuf::MessageLite::ParseFromArray(a4, result, v8);
  return result;
}