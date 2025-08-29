__ZN6google8protobuf21DynamicMessageFactory26DeleteDefaultOneofInstanceEPKNS0_10DescriptorEPKjPKv
void __fastcall google::protobuf::DynamicMessageFactory::DeleteDefaultOneofInstance(
        google::protobuf::DynamicMessageFactory *this,
        const google::protobuf::Descriptor *a2,
        const unsigned int *a3,
        const void *a4)
{
  int v4; // w9
  __int64 v6; // x20
  __int64 v7; // x8
  __int64 v8; // x25
  std::once_flag::_State_type *v9; // x0
  __int64 v10; // [xsp+8h] [xbp-68h] BYREF
  void (__fastcall *v11)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-60h] BYREF
  _QWORD *v12; // [xsp+18h] [xbp-58h] BYREF
  _QWORD v13[2]; // [xsp+20h] [xbp-50h] BYREF

  v4 = *((_DWORD *)this + 27);
  if ( v4 >= 1 )
  {
    v6 = 0LL;
    v7 = *((_QWORD *)this + 6);
    do
    {
      if ( (*(_DWORD *)(v7 + 48 * v6 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v7 + 48 * v6 + 32) + 65LL))
        && *(int *)(v7 + 48 * v6 + 24) >= 1 )
      {
        v8 = 0LL;
        do
        {
          v9 = *(std::once_flag::_State_type **)(*(_QWORD *)(*(_QWORD *)(v7 + 48 * v6 + 32) + 8 * v8) + 48LL);
          if ( v9 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(v7 + 48 * v6 + 32) + 8 * v8);
            v11 = google::protobuf::FieldDescriptor::TypeOnceInit;
            if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
            {
              v13[0] = &v11;
              v13[1] = &v10;
              v12 = v13;
              std::__call_once(v9, &v12, (void (__cdecl *)(void *))sub_10007A460);
            }
            v7 = *((_QWORD *)this + 6);
          }
          ++v8;
        }
        while ( v8 < *(int *)(v7 + 48 * v6 + 24) );
        v4 = *((_DWORD *)this + 27);
      }
      ++v6;
    }
    while ( v6 < v4 );
  }
}