__ZNK6google8protobuf10Descriptor24FindFieldByLowercaseNameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
__int64 __fastcall google::protobuf::Descriptor::FindFieldByLowercaseName(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int128 v4; // q0
  __int64 result; // x0
  __int128 v6; // [xsp+0h] [xbp-60h]
  __int128 v7; // [xsp+10h] [xbp-50h] BYREF
  __int64 (__fastcall **v8)(google::protobuf::FileDescriptorTables *, const google::protobuf::FileDescriptorTables *); // [xsp+20h] [xbp-40h] BYREF
  __int128 v9; // [xsp+28h] [xbp-38h]
  __int64 v10; // [xsp+38h] [xbp-28h] BYREF
  __int64 (__fastcall *v11)(google::protobuf::FileDescriptorTables *, const google::protobuf::FileDescriptorTables *); // [xsp+40h] [xbp-20h] BYREF
  __int64 (__fastcall ***v12)(google::protobuf::FileDescriptorTables *, const google::protobuf::FileDescriptorTables *); // [xsp+48h] [xbp-18h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 144LL);
  sub_10007A644(&v7, a2);
  v4 = v7;
  v10 = v3;
  v11 = google::protobuf::FileDescriptorTables::FieldsByLowercaseNamesLazyInitStatic;
  if ( atomic_load_explicit((atomic_ullong *volatile)(v3 + 88), memory_order_acquire) != -1LL )
  {
    v8 = &v11;
    *(_QWORD *)&v9 = &v10;
    v12 = &v8;
    v6 = v4;
    std::__call_once((std::once_flag::_State_type *)(v3 + 88), &v12, (void (__cdecl *)(void *))sub_1000968D8);
    v4 = v6;
  }
  v8 = (__int64 (__fastcall **)(google::protobuf::FileDescriptorTables *, const google::protobuf::FileDescriptorTables *))a1;
  v9 = v4;
  result = sub_10007C470(v3 + 40, &v8);
  if ( result )
  {
    if ( *(_BYTE *)(result + 67) )
      return 0LL;
  }
  return result;
}