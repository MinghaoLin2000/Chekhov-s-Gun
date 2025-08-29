__ZN6google8protobuf8internal13ReflectionOps20DiscardUnknownFieldsEPNS0_7MessageE
void __fastcall google::protobuf::internal::ReflectionOps::DiscardUnknownFields(
        google::protobuf::internal::ReflectionOps *this,
        google::protobuf::Message *a2)
{
  google::protobuf::Reflection *v3; // x20
  google::protobuf::UnknownFieldSet *v4; // x0
  char *v5; // x21
  char *v6; // x26
  __int64 v7; // x23
  std::once_flag::_State_type *v8; // x0
  __int64 v9; // x8
  std::once_flag::_State_type *v10; // x0
  __int64 v11; // x24
  std::once_flag::_State_type *v12; // x0
  atomic_uint *v13; // x24
  __int64 v14; // x0
  int v15; // w24
  int v16; // w25
  __int64 v17; // x0
  __int64 v18; // x0
  char *v19; // [xsp+8h] [xbp-108h] BYREF
  char *v20; // [xsp+10h] [xbp-100h]
  __int64 v21; // [xsp+18h] [xbp-F8h]
  __int64 v22; // [xsp+20h] [xbp-F0h] BYREF
  void (__fastcall *v23)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+28h] [xbp-E8h] BYREF
  _QWORD v24[8]; // [xsp+30h] [xbp-E0h] BYREF
  void (__fastcall **v25)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+70h] [xbp-A0h] BYREF
  google::protobuf::internal::MapFieldBase *v26; // [xsp+78h] [xbp-98h]
  __int64 v27; // [xsp+A0h] [xbp-70h] BYREF

  v3 = (google::protobuf::Reflection *)sub_1000ED454(this, a2);
  v4 = (google::protobuf::UnknownFieldSet *)google::protobuf::Reflection::MutableUnknownFields(v3, this);
  if ( *(_QWORD *)v4 != *((_QWORD *)v4 + 1) )
    google::protobuf::UnknownFieldSet::ClearFallback(v4);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  google::protobuf::Reflection::ListFields((__int64)v3, this, &v19);
  v5 = v19;
  v6 = v20;
  if ( v19 != v20 )
  {
    do
    {
      v7 = *(_QWORD *)v5;
      v8 = *(std::once_flag::_State_type **)(*(_QWORD *)v5 + 48LL);
      if ( v8 )
      {
        v22 = *(_QWORD *)v5;
        v23 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
        {
          v25 = &v23;
          v26 = (google::protobuf::internal::MapFieldBase *)&v22;
          v24[0] = &v25;
          std::__call_once(v8, v24, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      v9 = *(unsigned int *)(v7 + 56);
      if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v9] == 10 )
      {
        v10 = *(std::once_flag::_State_type **)(v7 + 48);
        if ( v10 )
        {
          v22 = v7;
          v23 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v10, memory_order_acquire) != -1LL )
          {
            v25 = &v23;
            v26 = (google::protobuf::internal::MapFieldBase *)&v22;
            v24[0] = &v25;
            std::__call_once(v10, v24, (void (__cdecl *)(void *))sub_10007A460);
          }
          LODWORD(v9) = *(_DWORD *)(v7 + 56);
        }
        if ( (_DWORD)v9 != 11
          || !(unsigned int)google::protobuf::FieldDescriptor::is_map_message_type((google::protobuf::FieldDescriptor *)v7) )
        {
          goto LABEL_22;
        }
        v11 = *(_QWORD *)(google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v7) + 40);
        v12 = *(std::once_flag::_State_type **)(v11 + 200);
        if ( v12 )
        {
          v22 = v11 + 152;
          v23 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
          {
            v25 = &v23;
            v26 = (google::protobuf::internal::MapFieldBase *)&v22;
            v24[0] = &v25;
            std::__call_once(v12, v24, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v11 + 208)] == 10 )
        {
          v13 = (atomic_uint *)google::protobuf::Reflection::MutableMapData(
                                 v3,
                                 this,
                                 (const google::protobuf::FieldDescriptor *)v7);
          if ( google::protobuf::internal::MapFieldBase::IsMapValid(v13) )
          {
            sub_1000DF4C8(&v25, this, v7);
            sub_1000DF4C8(v24, this, v7);
            (*(void (__fastcall **)(atomic_uint *, _QWORD))(*(_QWORD *)v13 + 56LL))(v13, &v25);
            (*(void (__fastcall **)(atomic_uint *, _QWORD *))(*(_QWORD *)v13 + 64LL))(v13, v24);
            while ( ((*(__int64 (__fastcall **)(google::protobuf::internal::MapFieldBase *, void (__fastcall ***)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *), _QWORD *))(*(_QWORD *)v26 + 48LL))(
                       v26,
                       &v25,
                       v24) & 1) == 0 )
            {
              google::protobuf::internal::MapFieldBase::SetMapDirty((__int64)v26);
              v14 = sub_1000CF0B4(&v27);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 128LL))(v14);
              (*(void (__fastcall **)(google::protobuf::internal::MapFieldBase *, _QWORD))(*(_QWORD *)v26 + 152LL))(
                v26,
                &v25);
            }
            sub_1000DF704(v24);
            sub_1000DF704(&v25);
          }
        }
        else
        {
LABEL_22:
          if ( *(_DWORD *)(v7 + 60) == 3 )
          {
            v15 = google::protobuf::Reflection::FieldSize(v3, this, (const google::protobuf::FieldDescriptor *)v7);
            if ( v15 >= 1 )
            {
              v16 = 0;
              do
              {
                v17 = google::protobuf::Reflection::MutableRepeatedMessage(
                        v3,
                        this,
                        (const google::protobuf::FieldDescriptor *)v7,
                        v16);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 128LL))(v17);
                ++v16;
              }
              while ( v15 != v16 );
            }
          }
          else
          {
            v18 = google::protobuf::Reflection::MutableMessage(
                    (std::once_flag::_State_type **)v3,
                    this,
                    (std::once_flag::_State_type **)v7,
                    0LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 128LL))(v18);
          }
        }
      }
      v5 += 8;
    }
    while ( v5 != v6 );
    v5 = v19;
  }
  if ( v5 )
  {
    v20 = v5;
    operator delete(v5);
  }
}