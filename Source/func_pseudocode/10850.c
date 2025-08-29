__ZNK6google8protobuf14DescriptorPool28FindExtensionByPrintableNameEPKNS0_10DescriptorERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
__int64 __fastcall google::protobuf::DescriptorPool::FindExtensionByPrintableName(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v7; // x20
  int v8; // w8
  __int64 v9; // x22
  __int64 v10; // x23
  __int64 v11; // x27
  std::once_flag::_State_type *v12; // x0
  __int64 v13; // [xsp+8h] [xbp-78h] BYREF
  __int64 (__fastcall *v14)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-70h] BYREF
  _QWORD *v15; // [xsp+18h] [xbp-68h] BYREF
  _QWORD v16[2]; // [xsp+20h] [xbp-60h] BYREF

  if ( !*(_DWORD *)(a2 + 124) )
    return 0LL;
  result = google::protobuf::DescriptorPool::FindExtensionByName(a1, a3);
  if ( result && *(_QWORD *)(result + 80) == a2 )
    return result;
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 32) + 72LL) )
    return 0LL;
  result = google::protobuf::DescriptorPool::FindMessageTypeByName(a1, a3);
  if ( !result )
    return result;
  v7 = result;
  v8 = *(_DWORD *)(result + 128);
  if ( v8 < 1 )
    return 0LL;
  v9 = 0LL;
  v10 = 152LL * (unsigned int)v8;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v7 + 80);
    if ( *(_QWORD *)(v11 + v9 + 80) == a2 )
    {
      v12 = *(std::once_flag::_State_type **)(v11 + v9 + 48);
      if ( v12 )
      {
        v13 = v11 + v9;
        v14 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
        {
          v16[0] = &v14;
          v16[1] = &v13;
          v15 = v16;
          std::__call_once(v12, &v15, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      if ( *(_DWORD *)(v11 + v9 + 56) == 11
        && *(_DWORD *)(v11 + v9 + 60) == 1
        && google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)(v11 + v9)) == v7 )
      {
        break;
      }
    }
    v9 += 152LL;
    if ( v10 == v9 )
      return 0LL;
  }
  return v11 + v9;
}