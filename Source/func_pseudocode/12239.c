__ZN6google8protobuf8internal10WireFormat13FieldByteSizeEPKNS0_15FieldDescriptorERKNS0_7MessageE
__int64 __fastcall google::protobuf::internal::WireFormat::FieldByteSize(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::FieldDescriptor *a2,
        const google::protobuf::Message *a3)
{
  const google::protobuf::Message *v5; // x2
  google::protobuf::Reflection *v6; // x1
  google::protobuf::Reflection *v7; // x21
  std::once_flag::_State_type *v8; // x0
  std::once_flag::_State_type *v9; // x0
  atomic_uint *MapData; // x22
  unsigned int HasField; // w0
  unsigned int v12; // w21
  __int64 v13; // x20
  int v15; // w22
  std::once_flag::_State_type *v16; // x0
  google::protobuf::internal::WireFormat *v17; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v18)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  void (__fastcall ***v19)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-38h] BYREF
  void (__fastcall **v20)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-30h] BYREF
  google::protobuf::internal::WireFormat **v21; // [xsp+28h] [xbp-28h]

  (*(void (__fastcall **)(const google::protobuf::FieldDescriptor *))(*(_QWORD *)a2 + 152LL))(a2);
  v7 = v6;
  if ( *((_BYTE *)this + 67) && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 72LL) )
  {
    v8 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
    if ( v8 )
    {
      v17 = this;
      v18 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
      {
        v20 = &v18;
        v21 = &v17;
        v19 = &v20;
        std::__call_once(v8, &v19, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)this + 14)] == 10
      && *((_DWORD *)this + 15) != 3 )
    {
      return google::protobuf::internal::WireFormat::MessageSetItemByteSize(this, a2, v5);
    }
  }
  if ( *((_DWORD *)this + 15) == 3 )
  {
    v9 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
    if ( v9 )
    {
      v17 = this;
      v18 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
      {
        v20 = &v18;
        v21 = &v17;
        v19 = &v20;
        std::__call_once(v9, &v19, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    if ( *((_DWORD *)this + 14) == 11
      && (unsigned int)google::protobuf::FieldDescriptor::is_map_message_type(this)
      && (MapData = (atomic_uint *)google::protobuf::Reflection::GetMapData(v7, a2, this),
          google::protobuf::internal::MapFieldBase::IsMapValid(MapData)) )
    {
      HasField = (*(__int64 (__fastcall **)(atomic_uint *))(*(_QWORD *)MapData + 88LL))(MapData);
    }
    else
    {
      HasField = google::protobuf::Reflection::FieldSize(v7, a2, this);
    }
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 75LL) )
    {
      v12 = 1;
      goto LABEL_21;
    }
    HasField = google::protobuf::Reflection::HasField(v7, a2, this);
  }
  v12 = HasField;
LABEL_21:
  v13 = google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(this, a2, v5);
  if ( google::protobuf::FieldDescriptor::is_packed(this) )
  {
    if ( v13 )
      return v13
           + ((9 * (__clz(v13 | 1) ^ 0x1F) + 73) >> 6)
           + ((9 * (__clz((8 * *((_DWORD *)this + 17)) | 1) ^ 0x1F) + 73) >> 6);
    else
      return 0LL;
  }
  else
  {
    v15 = *((_DWORD *)this + 17);
    v16 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
    if ( v16 )
    {
      v17 = this;
      v18 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v16, memory_order_acquire) != -1LL )
      {
        v20 = &v18;
        v21 = &v17;
        v19 = &v20;
        std::__call_once(v16, &v19, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    return v13
         + (unsigned int)((unsigned __int64)((9 * (__clz((8 * v15) | 1) ^ 0x1F) + 73) >> 6) << (*((_DWORD *)this + 14) == 10))
         * (unsigned __int64)v12;
  }
}