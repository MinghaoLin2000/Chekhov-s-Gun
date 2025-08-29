__ZNK6google8protobuf14DescriptorPool35InternalFindExtensionByNumberNoLockEPKNS0_10DescriptorEi
__int64 __fastcall google::protobuf::DescriptorPool::InternalFindExtensionByNumberNoLock(
        google::protobuf::DescriptorPool *this,
        const google::protobuf::Descriptor *a2,
        unsigned int a3)
{
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 result; // x0
  google::protobuf::DescriptorPool *v9; // x0
  _QWORD v10[2]; // [xsp+0h] [xbp-30h] BYREF

  if ( !*((_DWORD *)a2 + 31) )
    return 0LL;
  v6 = *((_QWORD *)this + 4);
  v10[0] = a2;
  v10[1] = a3;
  v7 = sub_100096848(v6 + 384, v10);
  if ( v6 + 392 == v7 || (result = *(_QWORD *)(v7 + 48)) == 0 )
  {
    v9 = (google::protobuf::DescriptorPool *)*((_QWORD *)this + 3);
    if ( !v9 )
      return 0LL;
    result = google::protobuf::DescriptorPool::InternalFindExtensionByNumberNoLock(v9, a2, a3);
    if ( !result )
      return 0LL;
  }
  return result;
}