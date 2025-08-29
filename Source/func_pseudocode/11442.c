__ZN6google8protobuf25EncodedDescriptorDatabase14FindFileByNameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPNS0_19FileDescriptorProtoE
const void *__fastcall google::protobuf::EncodedDescriptorDatabase::FindFileByName(
        __int64 a1,
        __int64 a2,
        google::protobuf::MessageLite *a3)
{
  __int64 v4; // x20
  const void *result; // x0
  int v6; // w1
  _QWORD v7[2]; // [xsp+0h] [xbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  sub_10007A644(v7, a2);
  result = (const void *)google::protobuf::EncodedDescriptorDatabase::DescriptorIndex::FindFile(v4, v7[0], v7[1]);
  if ( result )
    return (const void *)google::protobuf::MessageLite::ParseFromArray(a3, result, v6);
  return result;
}