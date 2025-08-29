__ZNK6google8protobuf8internal15DynamicMapField30SyncMapWithRepeatedFieldNoLockEv
void __fastcall google::protobuf::internal::DynamicMapField::SyncMapWithRepeatedFieldNoLock(
        google::protobuf::internal::DynamicMapField *this)
{
  char *v2; // x20
  google::protobuf::Reflection *v3; // x1
  google::protobuf::Reflection *v4; // x21
  google::protobuf::Descriptor *v5; // x0
  __int64 v6; // x22
  google::protobuf::Descriptor *v7; // x0
  __int64 v8; // x23
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x10
  __int64 v11; // x11
  __int64 v12; // x9
  __int64 v13; // x8
  __int64 v14; // x8
  const google::protobuf::Message **v15; // x28
  std::once_flag::_State_type *v16; // x0
  google::protobuf::internal::LogMessage *v17; // x0
  int Int32; // w26
  int v19; // w8
  void *Int64; // x26
  int v21; // w8
  char Bool; // w26
  __int64 v23; // x25
  std::once_flag::_State_type *v24; // x0
  std::once_flag::_State_type *v25; // x0
  int v26; // w8
  __int64 v27; // x26
  int UInt32; // w0
  __int64 UInt64; // x0
  __int64 v30; // d0
  int v31; // s0
  __int128 v32; // q0
  __int64 Message; // x27
  __int64 v34; // x8
  __int64 v35; // x9
  __int64 v36; // x9
  __int128 v37; // [xsp+8h] [xbp-D8h] BYREF
  unsigned __int64 v38; // [xsp+18h] [xbp-C8h]
  void *v39[2]; // [xsp+38h] [xbp-A8h] BYREF
  char v40; // [xsp+4Fh] [xbp-91h]
  __int64 v41; // [xsp+50h] [xbp-90h] BYREF
  void (__fastcall *v42)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+58h] [xbp-88h] BYREF
  __int128 *v43; // [xsp+60h] [xbp-80h] BYREF
  void *__p[2]; // [xsp+68h] [xbp-78h] BYREF
  char v45; // [xsp+7Fh] [xbp-61h]
  int v46; // [xsp+80h] [xbp-60h]

  v2 = (char *)this + 96;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 152LL))(*((_QWORD *)this + 18));
  v4 = v3;
  v5 = (google::protobuf::Descriptor *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 152LL))(*((_QWORD *)this + 18));
  v6 = google::protobuf::Descriptor::map_key(v5);
  v7 = (google::protobuf::Descriptor *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 152LL))(*((_QWORD *)this + 18));
  v8 = google::protobuf::Descriptor::map_value(v7);
  if ( !*((_QWORD *)this + 1) )
  {
    v9 = *((_QWORD *)this + 15);
    v10 = *((_QWORD *)this + 13);
    if ( v10 > v9 )
    {
      v11 = *((_QWORD *)this + 16);
      while ( 1 )
      {
        v12 = *(_QWORD *)(v11 + 8 * v9);
        if ( v12 )
          break;
        if ( v10 == ++v9 )
          goto LABEL_11;
      }
      if ( v12 == *(_QWORD *)(v11 + 8 * (v9 ^ 1)) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)v12 + 40LL);
        *(_QWORD *)&v37 = v12;
        *((_QWORD *)&v37 + 1) = v2;
        v38 = v9;
        if ( !v12 )
          goto LABEL_11;
      }
      else
      {
        *(_QWORD *)&v37 = *(_QWORD *)(v11 + 8 * v9);
        *((_QWORD *)&v37 + 1) = v2;
        v38 = v9;
      }
      do
      {
        sub_1000CD248(v12 + 32);
        sub_1000D1430(&v37);
        v12 = v37;
      }
      while ( (_QWORD)v37 );
    }
  }
LABEL_11:
  sub_1000D1018(v2);
  v13 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v13 + 8) )
  {
    v14 = *(_QWORD *)(v13 + 16);
    if ( v14 )
      v15 = (const google::protobuf::Message **)(v14 + 8);
    else
      v15 = 0LL;
    do
    {
      v46 = 0;
      v16 = *(std::once_flag::_State_type **)(v6 + 48);
      if ( v16 )
      {
        v41 = v6;
        v42 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v16, memory_order_acquire) != -1LL )
        {
          *(_QWORD *)&v37 = &v42;
          *((_QWORD *)&v37 + 1) = &v41;
          v43 = &v37;
          std::__call_once(v16, &v43, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      switch ( *(_DWORD *)(v6 + 56) )
      {
        case 1:
        case 2:
        case 0xA:
        case 0xB:
        case 0xE:
          google::protobuf::internal::LogMessage::LogMessage(
            &v37,
            3LL,
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/google/protobuf/map_field.cc",
            513LL);
          v17 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                            &v37,
                                                            "Can't get here.");
          google::protobuf::internal::LogFinisher::operator=((int)&v43, v17);
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v37);
          goto LABEL_52;
        case 3:
        case 0x10:
        case 0x12:
          Int64 = (void *)google::protobuf::Reflection::GetInt64(
                            v4,
                            *v15,
                            (const google::protobuf::FieldDescriptor *)v6);
          if ( v46 == 2 )
            goto LABEL_43;
          if ( v46 == 9 && v45 < 0 )
            operator delete(__p[0]);
          v21 = 2;
          goto LABEL_42;
        case 4:
        case 6:
          Int64 = (void *)google::protobuf::Reflection::GetUInt64(
                            v4,
                            *v15,
                            (const google::protobuf::FieldDescriptor *)v6);
          if ( v46 != 4 )
          {
            if ( v46 == 9 && v45 < 0 )
              operator delete(__p[0]);
            v21 = 4;
LABEL_42:
            v46 = v21;
          }
LABEL_43:
          __p[0] = Int64;
          goto LABEL_52;
        case 5:
        case 0xF:
        case 0x11:
          Int32 = google::protobuf::Reflection::GetInt32(v4, *v15, (const google::protobuf::FieldDescriptor *)v6);
          if ( v46 == 1 )
            goto LABEL_36;
          if ( v46 == 9 && v45 < 0 )
            operator delete(__p[0]);
          v19 = 1;
          break;
        case 7:
        case 0xD:
          Int32 = google::protobuf::Reflection::GetUInt32(v4, *v15, (const google::protobuf::FieldDescriptor *)v6);
          if ( v46 == 3 )
            goto LABEL_36;
          if ( v46 == 9 && v45 < 0 )
            operator delete(__p[0]);
          v19 = 3;
          break;
        case 8:
          Bool = google::protobuf::Reflection::GetBool(v4, *v15, (const google::protobuf::FieldDescriptor *)v6);
          if ( v46 != 7 )
          {
            if ( v46 == 9 && v45 < 0 )
              operator delete(__p[0]);
            v46 = 7;
          }
          LOBYTE(__p[0]) = Bool;
          goto LABEL_52;
        case 9:
        case 0xC:
          google::protobuf::Reflection::GetString(
            (__int64 *)v39,
            v4,
            *v15,
            (const google::protobuf::FieldDescriptor *)v6);
          sub_1000D07EC(__p, v39);
          if ( v40 < 0 )
            operator delete(v39[0]);
          goto LABEL_52;
        default:
          goto LABEL_52;
      }
      v46 = v19;
LABEL_36:
      LODWORD(__p[0]) = Int32;
LABEL_52:
      if ( !*((_QWORD *)this + 1) )
      {
        sub_1000D15A4(&v37, v2, __p, 0LL);
        if ( (_QWORD)v37 )
          sub_1000CD248(v37 + 32);
      }
      sub_1000D23CC(&v37, v2, __p);
      v23 = v37;
      v24 = *(std::once_flag::_State_type **)(v8 + 48);
      if ( v24 )
      {
        v41 = v8;
        v42 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v24, memory_order_acquire) != -1LL )
        {
          *(_QWORD *)&v37 = &v42;
          *((_QWORD *)&v37 + 1) = &v41;
          v43 = &v37;
          std::__call_once(v24, &v43, (void (__cdecl *)(void *))sub_10007A460);
        }
        v25 = *(std::once_flag::_State_type **)(v8 + 48);
        v26 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v8 + 56)];
        *(_DWORD *)(v23 + 40) = v26;
        if ( v25 )
        {
          v41 = v8;
          v42 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v25, memory_order_acquire) != -1LL )
          {
            *(_QWORD *)&v37 = &v42;
            *((_QWORD *)&v37 + 1) = &v41;
            v43 = &v37;
            std::__call_once(v25, &v43, (void (__cdecl *)(void *))sub_10007A460);
          }
          v26 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v8 + 56)];
        }
      }
      else
      {
        v26 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v8 + 56)];
        *(_DWORD *)(v37 + 40) = v26;
      }
      switch ( v26 )
      {
        case 1:
          v27 = sub_1000D1CE8(*((_QWORD *)this + 1));
          UInt32 = google::protobuf::Reflection::GetInt32(v4, *v15, (const google::protobuf::FieldDescriptor *)v8);
          goto LABEL_73;
        case 2:
          v27 = sub_1000D1DE4(*((_QWORD *)this + 1));
          UInt64 = google::protobuf::Reflection::GetInt64(v4, *v15, (const google::protobuf::FieldDescriptor *)v8);
          goto LABEL_68;
        case 3:
          v27 = sub_1000D1EE0(*((_QWORD *)this + 1));
          UInt32 = google::protobuf::Reflection::GetUInt32(v4, *v15, (const google::protobuf::FieldDescriptor *)v8);
          goto LABEL_73;
        case 4:
          v27 = sub_1000D1FDC(*((_QWORD *)this + 1));
          UInt64 = google::protobuf::Reflection::GetUInt64(v4, *v15, (const google::protobuf::FieldDescriptor *)v8);
LABEL_68:
          *(_QWORD *)v27 = UInt64;
          goto LABEL_78;
        case 5:
          v27 = sub_1000D20D8(*((_QWORD *)this + 1));
          google::protobuf::Reflection::GetDouble(v4, *v15, (const google::protobuf::FieldDescriptor *)v8);
          *(_QWORD *)v27 = v30;
          goto LABEL_78;
        case 6:
          v27 = sub_1000D21D4(*((_QWORD *)this + 1));
          google::protobuf::Reflection::GetFloat(v4, *v15, (const google::protobuf::FieldDescriptor *)v8);
          *(_DWORD *)v27 = v31;
          goto LABEL_78;
        case 7:
          v27 = sub_1000D22D0(*((_QWORD *)this + 1));
          *(_BYTE *)v27 = google::protobuf::Reflection::GetBool(v4, *v15, (const google::protobuf::FieldDescriptor *)v8);
          goto LABEL_78;
        case 8:
          v27 = sub_1000D1CE8(*((_QWORD *)this + 1));
          UInt32 = google::protobuf::Reflection::GetEnumValue(v4, *v15, (const google::protobuf::FieldDescriptor *)v8);
LABEL_73:
          *(_DWORD *)v27 = UInt32;
          goto LABEL_78;
        case 9:
          v27 = sub_10007A808(*((_QWORD *)this + 1));
          google::protobuf::Reflection::GetString(
            (__int64 *)&v37,
            v4,
            *v15,
            (const google::protobuf::FieldDescriptor *)v8);
          if ( *(char *)(v27 + 23) < 0 )
            operator delete(*(void **)v27);
          v32 = v37;
          *(_QWORD *)(v27 + 16) = v38;
          *(_OWORD *)v27 = v32;
          goto LABEL_78;
        case 10:
          Message = google::protobuf::Reflection::GetMessage(
                      v4,
                      *v15,
                      (const google::protobuf::FieldDescriptor *)v8,
                      0LL);
          v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Message + 32LL))(Message, *((_QWORD *)this + 1));
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 112LL))(v27, Message);
LABEL_78:
          *(_QWORD *)(v23 + 32) = v27;
          break;
        default:
          break;
      }
      if ( v46 == 9 && v45 < 0 )
        operator delete(__p[0]);
      ++v15;
      v34 = *((_QWORD *)this + 2);
      v35 = *(_QWORD *)(v34 + 16);
      if ( v35 )
        v36 = v35 + 8;
      else
        v36 = 0LL;
    }
    while ( v15 != (const google::protobuf::Message **)(v36 + 8LL * *(int *)(v34 + 8)) );
  }
}