__ZN6google8protobuf8internal10WireFormat21FieldDataOnlyByteSizeEPKNS0_15FieldDescriptorERKNS0_7MessageE
__int64 __fastcall google::protobuf::internal::WireFormat::FieldDataOnlyByteSize(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::FieldDescriptor *a2,
        const google::protobuf::Message *a3)
{
  google::protobuf::Reflection *v5; // x1
  google::protobuf::Reflection *v6; // x21
  std::once_flag::_State_type *v7; // x0
  atomic_uint *MapData; // x22
  __int64 v9; // x20
  __int64 v10; // x19
  __int64 v11; // x22
  __int64 v12; // x19
  __int64 v13; // x24
  __int64 v14; // x0
  unsigned int HasField; // w0
  __int64 v16; // x24
  std::once_flag::_State_type *v17; // x0
  __int64 v18; // x23
  unsigned __int64 RepeatedStringReference; // x0
  __int64 v20; // x25
  __int64 v21; // x23
  __int64 v22; // x23
  __int64 v23; // x23
  int RepeatedInt32; // w0
  __int64 v25; // x8
  __int64 v26; // x23
  __int64 RepeatedMessage; // x0
  __int64 v28; // x23
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x23
  __int64 v32; // x23
  int v33; // w8
  __int64 v34; // x8
  __int64 v35; // x23
  int v36; // w0
  __int64 v37; // x23
  __int64 RepeatedInt64; // x0
  __int64 Int64; // x0
  unsigned __int64 v40; // x8
  int Int32; // w0
  __int64 Message; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  unsigned int v45; // w8
  int v46; // w8
  int v47; // w0
  __int64 v48; // x0
  google::protobuf::internal::WireFormat *v50; // [xsp+8h] [xbp-D8h] BYREF
  void (__fastcall *v51)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-D0h] BYREF
  _QWORD v52[8]; // [xsp+18h] [xbp-C8h] BYREF
  void *__p; // [xsp+58h] [xbp-88h] BYREF
  google::protobuf::internal::WireFormat **v54; // [xsp+60h] [xbp-80h]
  __int64 v55; // [xsp+68h] [xbp-78h] BYREF
  __int64 v56; // [xsp+88h] [xbp-58h] BYREF

  (*(void (__fastcall **)(const google::protobuf::FieldDescriptor *))(*(_QWORD *)a2 + 152LL))(a2);
  v6 = v5;
  v7 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    v50 = this;
    v51 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v7, memory_order_acquire) != -1LL )
    {
      __p = &v51;
      v54 = &v50;
      v52[0] = &__p;
      std::__call_once(v7, v52, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *((_DWORD *)this + 14) == 11 )
  {
    if ( (unsigned int)google::protobuf::FieldDescriptor::is_map_message_type(this) )
    {
      MapData = (atomic_uint *)google::protobuf::Reflection::GetMapData(v6, a2, this);
      if ( google::protobuf::internal::MapFieldBase::IsMapValid(MapData) )
      {
        sub_1000DF4C8(&__p, a2, this);
        sub_1000DF4C8(v52, a2, this);
        v9 = *(_QWORD *)(google::protobuf::FieldDescriptor::message_type(this) + 40);
        v10 = *(_QWORD *)(google::protobuf::FieldDescriptor::message_type(this) + 40);
        (*(void (__fastcall **)(atomic_uint *, void **))(*(_QWORD *)MapData + 56LL))(MapData, &__p);
        (*(void (__fastcall **)(atomic_uint *, _QWORD *))(*(_QWORD *)MapData + 64LL))(MapData, v52);
        v11 = 0LL;
        v12 = v10 + 152;
        while ( ((*((__int64 (__fastcall **)(google::protobuf::internal::WireFormat **, void **, _QWORD *))*v54 + 6))(
                   v54,
                   &__p,
                   v52) & 1) == 0 )
        {
          v13 = sub_10010C5E8(v9, &v55);
          v14 = sub_10010C85C(v12, &v56);
          v11 += v13 + v14 + 2 + ((9 * (__clz((v13 + v14 + 2) | 1) ^ 0x1F) + 73) >> 6);
          (*((void (__fastcall **)(google::protobuf::internal::WireFormat **, void **))*v54 + 19))(v54, &__p);
        }
        sub_1000DF704(v52);
        sub_1000DF704(&__p);
        return v11;
      }
    }
  }
  if ( *((_DWORD *)this + 15) == 3 )
  {
    HasField = google::protobuf::Reflection::FieldSize(v6, a2, this);
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 75LL) )
    {
      v16 = 1LL;
      goto LABEL_16;
    }
    HasField = google::protobuf::Reflection::HasField(v6, a2, this);
  }
  v16 = HasField;
LABEL_16:
  v17 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v17 )
  {
    v50 = this;
    v51 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v17, memory_order_acquire) != -1LL )
    {
      __p = &v51;
      v54 = &v50;
      v52[0] = &__p;
      std::__call_once(v17, v52, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  switch ( *((_DWORD *)this + 14) )
  {
    case 1:
    case 6:
    case 0x10:
      v11 = 8 * v16;
      break;
    case 2:
    case 7:
    case 0xF:
      v11 = 4 * v16;
      break;
    case 3:
      if ( *((_DWORD *)this + 15) != 3 )
      {
        Int64 = google::protobuf::Reflection::GetInt64(v6, a2, this);
        goto LABEL_90;
      }
      if ( !v16 )
        goto LABEL_87;
      v21 = 0LL;
      v11 = 0LL;
      do
        v11 += (9 * (__clz(google::protobuf::Reflection::GetRepeatedInt64(v6, a2, this, v21++) | 1) ^ 0x3F) + 73) >> 6;
      while ( v16 != v21 );
      break;
    case 4:
      if ( *((_DWORD *)this + 15) != 3 )
      {
        Int64 = google::protobuf::Reflection::GetUInt64(v6, a2, this);
LABEL_90:
        v40 = Int64 | 1;
        goto LABEL_103;
      }
      if ( !v16 )
        goto LABEL_87;
      v22 = 0LL;
      v11 = 0LL;
      do
        v11 += (9 * (__clz(google::protobuf::Reflection::GetRepeatedUInt64(v6, a2, this, v22++) | 1) ^ 0x3F) + 73) >> 6;
      while ( v16 != v22 );
      break;
    case 5:
      if ( *((_DWORD *)this + 15) != 3 )
      {
        Int32 = google::protobuf::Reflection::GetInt32(v6, a2, this);
        if ( (Int32 & 0x80000000) == 0 )
          goto LABEL_96;
        goto LABEL_98;
      }
      if ( !v16 )
        goto LABEL_87;
      v23 = 0LL;
      v11 = 0LL;
      do
      {
        RepeatedInt32 = google::protobuf::Reflection::GetRepeatedInt32(v6, a2, this, v23);
        if ( RepeatedInt32 < 0 )
          v25 = 10LL;
        else
          v25 = (9 * (__clz(RepeatedInt32 | 1) ^ 0x1F) + 73) >> 6;
        v11 += v25;
        ++v23;
      }
      while ( v16 != v23 );
      break;
    case 8:
      v11 = v16;
      break;
    case 9:
    case 0xC:
      if ( !v16 )
        goto LABEL_87;
      v18 = 0LL;
      v11 = 0LL;
      do
      {
        __p = 0LL;
        v54 = 0LL;
        v55 = 0LL;
        if ( *((_DWORD *)this + 15) == 3 )
          RepeatedStringReference = google::protobuf::Reflection::GetRepeatedStringReference(
                                      v6,
                                      (__int64)a2,
                                      (__int64)this,
                                      v18);
        else
          RepeatedStringReference = google::protobuf::Reflection::GetStringReference(v6, (__int64)a2, (__int64)this);
        if ( *(char *)(RepeatedStringReference + 23) >= 0 )
          v20 = *(unsigned __int8 *)(RepeatedStringReference + 23);
        else
          v20 = *(_QWORD *)(RepeatedStringReference + 8);
        if ( SHIBYTE(v55) < 0 )
          operator delete(__p);
        v11 += v20 + ((9 * (__clz(v20 | 1) ^ 0x1F) + 73) >> 6);
        ++v18;
      }
      while ( v16 != v18 );
      break;
    case 0xA:
      if ( *((_DWORD *)this + 15) == 3 )
      {
        if ( !v16 )
          goto LABEL_87;
        v26 = 0LL;
        v11 = 0LL;
        do
        {
          RepeatedMessage = google::protobuf::Reflection::GetRepeatedMessage(v6, a2, this, v26);
          v11 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)RepeatedMessage + 72LL))(RepeatedMessage);
          ++v26;
        }
        while ( v16 != v26 );
      }
      else
      {
        Message = google::protobuf::Reflection::GetMessage(v6, a2, this, 0LL);
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Message + 72LL))(Message);
      }
      break;
    case 0xB:
      if ( *((_DWORD *)this + 15) == 3 )
      {
        if ( !v16 )
          goto LABEL_87;
        v28 = 0LL;
        v11 = 0LL;
        do
        {
          v29 = google::protobuf::Reflection::GetRepeatedMessage(v6, a2, this, v28);
          v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 72LL))(v29);
          v11 += v30 + ((9 * (__clz(v30 | 1) ^ 0x1F) + 73) >> 6);
          ++v28;
        }
        while ( v16 != v28 );
      }
      else
      {
        v43 = google::protobuf::Reflection::GetMessage(v6, a2, this, 0LL);
        v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 72LL))(v43);
        v11 = v44 + ((9 * (__clz(v44 | 1) ^ 0x1F) + 73) >> 6);
      }
      break;
    case 0xD:
      if ( *((_DWORD *)this + 15) != 3 )
      {
        Int32 = google::protobuf::Reflection::GetUInt32(v6, a2, this);
LABEL_96:
        v45 = Int32 | 1;
        goto LABEL_101;
      }
      if ( !v16 )
        goto LABEL_87;
      v31 = 0LL;
      v11 = 0LL;
      do
        v11 += (9 * (__clz(google::protobuf::Reflection::GetRepeatedUInt32(v6, a2, this, v31++) | 1) ^ 0x1F) + 73) >> 6;
      while ( v16 != v31 );
      break;
    case 0xE:
      if ( *((_DWORD *)this + 15) == 3 )
      {
        if ( !v16 )
          goto LABEL_87;
        v32 = 0LL;
        v11 = 0LL;
        do
        {
          v33 = *(_DWORD *)(google::protobuf::Reflection::GetRepeatedEnum(v6, a2, this, v32) + 16);
          if ( v33 < 0 )
            v34 = 10LL;
          else
            v34 = (9 * (__clz(v33 | 1) ^ 0x1F) + 73) >> 6;
          v11 += v34;
          ++v32;
        }
        while ( v16 != v32 );
      }
      else
      {
        v46 = *(_DWORD *)(google::protobuf::Reflection::GetEnum(v6, a2, this) + 16);
        if ( (v46 & 0x80000000) == 0 )
          goto LABEL_100;
LABEL_98:
        v11 = 10LL;
      }
      break;
    case 0x11:
      if ( *((_DWORD *)this + 15) == 3 )
      {
        if ( !v16 )
          goto LABEL_87;
        v35 = 0LL;
        v11 = 0LL;
        do
        {
          v36 = google::protobuf::Reflection::GetRepeatedInt32(v6, a2, this, v35);
          v11 += (9 * (__clz((2 * v36) ^ (v36 >> 31) | 1) ^ 0x1F) + 73) >> 6;
          ++v35;
        }
        while ( v16 != v35 );
      }
      else
      {
        v47 = google::protobuf::Reflection::GetInt32(v6, a2, this);
        v46 = (2 * v47) ^ (v47 >> 31);
LABEL_100:
        v45 = v46 | 1;
LABEL_101:
        v11 = (9 * (__clz(v45) ^ 0x1F) + 73) >> 6;
      }
      break;
    case 0x12:
      if ( *((_DWORD *)this + 15) == 3 )
      {
        if ( !v16 )
          goto LABEL_87;
        v37 = 0LL;
        v11 = 0LL;
        do
        {
          RepeatedInt64 = google::protobuf::Reflection::GetRepeatedInt64(v6, a2, this, v37);
          v11 += (9 * (__clz((2 * RepeatedInt64) ^ (RepeatedInt64 >> 63) | 1) ^ 0x3F) + 73) >> 6;
          ++v37;
        }
        while ( v16 != v37 );
      }
      else
      {
        v48 = google::protobuf::Reflection::GetInt64(v6, a2, this);
        v40 = (2 * v48) ^ (v48 >> 63) | 1;
LABEL_103:
        v11 = (9 * (__clz(v40) ^ 0x3F) + 73) >> 6;
      }
      break;
    default:
LABEL_87:
      v11 = 0LL;
      break;
  }
  return v11;
}