__ZN6google8protobuf8internal13ReflectionOps13IsInitializedERKNS0_7MessageE
__int64 __fastcall google::protobuf::internal::ReflectionOps::IsInitialized(
        google::protobuf::internal::ReflectionOps *this,
        const google::protobuf::Message *a2)
{
  __int64 v3; // x21
  __int64 v4; // x1
  google::protobuf::Reflection *v5; // x20
  int v6; // w8
  __int64 v7; // x22
  __int64 v8; // x23
  const google::protobuf::FieldDescriptor *v9; // x2
  char *v10; // x21
  char *v11; // x26
  __int64 v12; // x23
  std::once_flag::_State_type *v13; // x0
  __int64 v14; // x8
  std::once_flag::_State_type *v15; // x0
  __int64 v16; // x24
  std::once_flag::_State_type *v17; // x0
  atomic_uint *MapData; // x24
  __int64 v19; // x0
  int v20; // w24
  int v21; // w25
  __int64 RepeatedMessage; // x0
  __int64 Message; // x0
  __int64 v24; // x19
  char *v26; // [xsp+8h] [xbp-108h] BYREF
  char *v27; // [xsp+10h] [xbp-100h]
  __int64 v28; // [xsp+18h] [xbp-F8h]
  __int64 v29; // [xsp+20h] [xbp-F0h] BYREF
  void (__fastcall *v30)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+28h] [xbp-E8h] BYREF
  _QWORD v31[8]; // [xsp+30h] [xbp-E0h] BYREF
  void (__fastcall **v32)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+70h] [xbp-A0h] BYREF
  __int64 *v33; // [xsp+78h] [xbp-98h]
  __int64 v34; // [xsp+A0h] [xbp-70h] BYREF

  v3 = (*(__int64 (__fastcall **)(google::protobuf::internal::ReflectionOps *, const google::protobuf::Message *))(*(_QWORD *)this + 152LL))(
         this,
         a2);
  v5 = (google::protobuf::Reflection *)sub_1000ED454(this, v4);
  v6 = *(_DWORD *)(v3 + 104);
  if ( v6 >= 1 )
  {
    v7 = 0LL;
    v8 = 152LL * (unsigned int)v6;
    do
    {
      v9 = (const google::protobuf::FieldDescriptor *)(*(_QWORD *)(v3 + 40) + v7);
      if ( *((_DWORD *)v9 + 15) == 2 && !(unsigned int)google::protobuf::Reflection::HasField(v5, this, v9) )
        return 0LL;
      v7 += 152LL;
    }
    while ( v8 != v7 );
  }
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  google::protobuf::Reflection::ListFieldsOmitStripped((__int64)v5, this, &v26);
  v10 = v26;
  v11 = v27;
  if ( v26 == v27 )
  {
    v24 = 1LL;
    if ( v26 )
      goto LABEL_42;
    return v24;
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)v10;
    v13 = *(std::once_flag::_State_type **)(*(_QWORD *)v10 + 48LL);
    if ( v13 )
    {
      v29 = *(_QWORD *)v10;
      v30 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v13, memory_order_acquire) != -1LL )
      {
        v32 = &v30;
        v33 = &v29;
        v31[0] = &v32;
        std::__call_once(v13, v31, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v14 = *(unsigned int *)(v12 + 56);
    if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v14] != 10 )
      goto LABEL_33;
    v15 = *(std::once_flag::_State_type **)(v12 + 48);
    if ( v15 )
    {
      v29 = v12;
      v30 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v15, memory_order_acquire) != -1LL )
      {
        v32 = &v30;
        v33 = &v29;
        v31[0] = &v32;
        std::__call_once(v15, v31, (void (__cdecl *)(void *))sub_10007A460);
      }
      LODWORD(v14) = *(_DWORD *)(v12 + 56);
    }
    if ( (_DWORD)v14 == 11
      && (unsigned int)google::protobuf::FieldDescriptor::is_map_message_type((google::protobuf::FieldDescriptor *)v12) )
    {
      v16 = *(_QWORD *)(google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v12) + 40);
      v17 = *(std::once_flag::_State_type **)(v16 + 200);
      if ( v17 )
      {
        v29 = v16 + 152;
        v30 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v17, memory_order_acquire) != -1LL )
        {
          v32 = &v30;
          v33 = &v29;
          v31[0] = &v32;
          std::__call_once(v17, v31, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v16 + 208)] != 10 )
        goto LABEL_33;
      MapData = (atomic_uint *)google::protobuf::Reflection::GetMapData(
                                 v5,
                                 this,
                                 (const google::protobuf::FieldDescriptor *)v12);
      if ( google::protobuf::internal::MapFieldBase::IsMapValid(MapData) )
      {
        sub_1000DF4C8(&v32, this, v12);
        sub_1000DF4C8(v31, this, v12);
        (*(void (__fastcall **)(atomic_uint *, _QWORD))(*(_QWORD *)MapData + 56LL))(MapData, &v32);
        (*(void (__fastcall **)(atomic_uint *, _QWORD *))(*(_QWORD *)MapData + 64LL))(MapData, v31);
        while ( 1 )
        {
          if ( ((*(__int64 (__fastcall **)(__int64 *, void (__fastcall ***)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *), _QWORD *))(*v33 + 48))(
                  v33,
                  &v32,
                  v31) & 1) != 0 )
          {
            sub_1000DF704(v31);
            sub_1000DF704(&v32);
            goto LABEL_33;
          }
          v19 = sub_1000CF1AC(&v34);
          if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19) & 1) == 0 )
            break;
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v33 + 152))(v33, &v32);
        }
        sub_1000DF704(v31);
        sub_1000DF704(&v32);
        goto LABEL_40;
      }
    }
    if ( *(_DWORD *)(v12 + 60) == 3 )
      break;
    Message = google::protobuf::Reflection::GetMessage(v5, this, (const google::protobuf::FieldDescriptor *)v12, 0LL);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Message + 48LL))(Message) & 1) == 0 )
      goto LABEL_40;
LABEL_33:
    v10 += 8;
    if ( v10 == v11 )
    {
      v24 = 1LL;
      goto LABEL_41;
    }
  }
  v20 = google::protobuf::Reflection::FieldSize(v5, this, (const google::protobuf::FieldDescriptor *)v12);
  if ( v20 < 1 )
    goto LABEL_33;
  v21 = 0;
  while ( 1 )
  {
    RepeatedMessage = google::protobuf::Reflection::GetRepeatedMessage(
                        v5,
                        this,
                        (const google::protobuf::FieldDescriptor *)v12,
                        v21);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)RepeatedMessage + 48LL))(RepeatedMessage) & 1) == 0 )
      break;
    if ( v20 == ++v21 )
      goto LABEL_33;
  }
LABEL_40:
  v24 = 0LL;
LABEL_41:
  v10 = v26;
  if ( v26 )
  {
LABEL_42:
    v27 = v10;
    operator delete(v10);
  }
  return v24;
}