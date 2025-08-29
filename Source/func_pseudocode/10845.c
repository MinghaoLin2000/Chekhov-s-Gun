__ZNK6google8protobuf14DescriptorPool21FindMessageTypeByNameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
__int64 __fastcall google::protobuf::DescriptorPool::FindMessageTypeByName(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x1
  __int64 v6[2]; // [xsp+0h] [xbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  sub_10007A644(v6, a2);
  if ( (unsigned int)google::protobuf::DescriptorPool::Tables::FindByNameHelper(v3, a1, v6[0], v6[1]) == 1 )
    return v4;
  else
    return 0LL;
}