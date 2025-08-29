__ZNK6google8protobuf14DescriptorPool14FindFileByNameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
__int64 __fastcall google::protobuf::DescriptorPool::FindFileByName(__int64 a1, __int64 a2)
{
  std::mutex *v4; // x19
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 FileByName; // x22
  __int64 v8; // x0
  __int64 v9; // x21
  __int64 v10; // x0
  __int128 v12; // [xsp+0h] [xbp-60h] BYREF
  _QWORD v13[2]; // [xsp+10h] [xbp-50h] BYREF
  __int128 v14; // [xsp+20h] [xbp-40h] BYREF
  __int128 v15; // [xsp+30h] [xbp-30h] BYREF

  v4 = *(std::mutex **)a1;
  if ( *(_QWORD *)a1 )
    std::mutex::lock(*(std::mutex **)a1);
  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_10009B118(*(_QWORD *)(a1 + 32) + 64LL);
    sub_10009B118(*(_QWORD *)(a1 + 32) + 24LL);
  }
  v5 = *(_QWORD *)(a1 + 32);
  sub_10007A644(&v14, a2);
  v15 = v14;
  v6 = sub_100096644(v5 + 344, &v15);
  if ( !v6 || (FileByName = *(_QWORD *)(v6 + 32)) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( !v8 || (FileByName = google::protobuf::DescriptorPool::FindFileByName(v8, a2)) == 0 )
    {
      sub_10007A644(v13, a2);
      if ( !(unsigned int)google::protobuf::DescriptorPool::TryFindFileInFallbackDatabase(a1, v13[0], v13[1])
        || (v9 = *(_QWORD *)(a1 + 32), sub_10007A644(&v12, a2), v15 = v12, (v10 = sub_100096644(v9 + 344, &v15)) == 0)
        || (FileByName = *(_QWORD *)(v10 + 32)) == 0 )
      {
        FileByName = 0LL;
      }
    }
  }
  if ( v4 )
    std::mutex::unlock(v4);
  return FileByName;
}