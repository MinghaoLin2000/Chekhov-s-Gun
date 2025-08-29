__ZNK6google8protobuf8internal15DynamicMapField30SyncRepeatedFieldWithMapNoLockEv
_QWORD *__fastcall google::protobuf::internal::DynamicMapField::SyncRepeatedFieldWithMapNoLock(
        google::protobuf::internal::DynamicMapField *this)
{
  google::protobuf::Reflection *v2; // x1
  google::protobuf::Reflection *v3; // x20
  google::protobuf::Descriptor *v4; // x0
  __int64 v5; // x21
  google::protobuf::Descriptor *v6; // x0
  _QWORD *result; // x0
  __int64 v8; // x22
  _QWORD *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x24
  __int64 *v12; // x25
  __int64 v13; // t1
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x10
  __int64 v16; // x11
  __int64 v17; // x12
  google::protobuf::Message *v18; // x23
  __int64 v19; // x24
  std::once_flag::_State_type *v20; // x0
  google::protobuf::internal::LogMessage *v21; // x0
  int v22; // w0
  __int64 v23; // x0
  unsigned int v24; // w0
  unsigned __int64 v25; // x0
  char v26; // w0
  __int64 v27; // x0
  __int128 v28; // q0
  __int64 v29; // x24
  std::once_flag::_State_type *v30; // x0
  __int64 v31; // x0
  int v32; // w0
  __int64 v33; // x0
  unsigned int v34; // w0
  unsigned __int64 v35; // x0
  double v36; // d0
  float v37; // s0
  char v38; // w0
  int v39; // w0
  __int64 v40; // x0
  __int128 v41; // q0
  __int64 v42; // x24
  __int64 v43; // x0
  void *v44[2]; // [xsp+0h] [xbp-E0h] BYREF
  __int64 v45; // [xsp+10h] [xbp-D0h]
  void (__fastcall **v46)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-C0h] BYREF
  __int64 *v47; // [xsp+28h] [xbp-B8h]
  void *__p[2]; // [xsp+50h] [xbp-90h] BYREF
  __int64 v49; // [xsp+60h] [xbp-80h]
  __int64 v50; // [xsp+70h] [xbp-70h] BYREF
  char *v51; // [xsp+78h] [xbp-68h]
  unsigned __int64 v52; // [xsp+80h] [xbp-60h]
  __int64 v53; // [xsp+88h] [xbp-58h] BYREF
  void (__fastcall *v54)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+90h] [xbp-50h] BYREF
  void (__fastcall ***v55)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+98h] [xbp-48h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 152LL))(*((_QWORD *)this + 18));
  v3 = v2;
  v4 = (google::protobuf::Descriptor *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 152LL))(*((_QWORD *)this + 18));
  v5 = google::protobuf::Descriptor::map_key(v4);
  v6 = (google::protobuf::Descriptor *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 152LL))(*((_QWORD *)this + 18));
  result = (_QWORD *)google::protobuf::Descriptor::map_value(v6);
  v8 = (__int64)result;
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !v9 )
  {
    v10 = *((_QWORD *)this + 1);
    if ( v10 )
    {
      result = (_QWORD *)sub_1000D0E94(v10);
      v9 = result;
    }
    else
    {
      result = (_QWORD *)operator new(24LL, 0x1020C4014030ADELL);
      v9 = result;
      result[1] = 0LL;
      result[2] = 0LL;
      *result = 0LL;
    }
    *((_QWORD *)this + 2) = v9;
  }
  v11 = *((unsigned int *)v9 + 2);
  if ( (int)v11 >= 1 )
  {
    v12 = (__int64 *)(v9[2] + 8LL);
    do
    {
      v13 = *v12++;
      result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
      --v11;
    }
    while ( v11 );
    *((_DWORD *)v9 + 2) = 0;
  }
  v14 = *((_QWORD *)this + 15);
  v15 = *((_QWORD *)this + 13);
  if ( v15 > v14 )
  {
    v16 = *((_QWORD *)this + 16);
    while ( 1 )
    {
      v17 = *(_QWORD *)(v16 + 8 * v14);
      if ( v17 )
        break;
      if ( v15 == ++v14 )
        return result;
    }
    if ( v17 == *(_QWORD *)(v16 + 8 * (v14 ^ 1)) )
    {
      v50 = *(_QWORD *)(*(_QWORD *)v17 + 40LL);
      v51 = (char *)this + 96;
      v52 = v14;
      if ( !v50 )
        return result;
    }
    else
    {
      v50 = *(_QWORD *)(v16 + 8 * v14);
      v51 = (char *)this + 96;
      v52 = v14;
    }
    do
    {
      v18 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 32LL))(
                                           *((_QWORD *)this + 18),
                                           *((_QWORD *)this + 1));
      sub_1000D31CC(*((_QWORD *)this + 2), v18);
      v19 = v50;
      v20 = *(std::once_flag::_State_type **)(v5 + 48);
      if ( v20 )
      {
        v53 = v5;
        v54 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v20, memory_order_acquire) != -1LL )
        {
          v46 = &v54;
          v47 = &v53;
          v55 = &v46;
          std::__call_once(v20, &v55, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      switch ( *(_DWORD *)(v5 + 56) )
      {
        case 1:
        case 2:
        case 0xA:
        case 0xB:
        case 0xE:
          google::protobuf::internal::LogMessage::LogMessage(
            &v46,
            3LL,
            "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/"
            "iWorkXPC/shared/persistence/google/protobuf/map_field.cc",
            430LL);
          v21 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                            &v46,
                                                            "Can't get here.");
          google::protobuf::internal::LogFinisher::operator=((int)&v55, v21);
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v46);
          break;
        case 3:
        case 0x10:
        case 0x12:
          v23 = sub_1000CFAE8(v19);
          google::protobuf::Reflection::SetInt64(v3, v18, (const google::protobuf::FieldDescriptor *)v5, v23);
          break;
        case 4:
        case 6:
          v25 = sub_1000CFCD8(v19);
          google::protobuf::Reflection::SetUInt64(v3, v18, (const google::protobuf::FieldDescriptor *)v5, v25);
          break;
        case 5:
        case 0xF:
        case 0x11:
          v22 = sub_1000CFBE0(v19);
          google::protobuf::Reflection::SetInt32(v3, v18, (const google::protobuf::FieldDescriptor *)v5, v22);
          break;
        case 7:
        case 0xD:
          v24 = sub_1000CFDD0(v19);
          google::protobuf::Reflection::SetUInt32(v3, v18, (const google::protobuf::FieldDescriptor *)v5, v24);
          break;
        case 8:
          v26 = sub_1000CFEC8(v19);
          google::protobuf::Reflection::SetBool(v3, v18, (const google::protobuf::FieldDescriptor *)v5, v26);
          break;
        case 9:
        case 0xC:
          v27 = sub_1000CF9F0(v19);
          if ( *(char *)(v27 + 23) < 0 )
          {
            sub_10007A474(__p, *(void **)v27);
          }
          else
          {
            v28 = *(_OWORD *)v27;
            v49 = *(_QWORD *)(v27 + 16);
            *(_OWORD *)__p = v28;
          }
          google::protobuf::Reflection::SetString((int)v3, (int)v18, (google::protobuf::FieldDescriptor *)v5);
          if ( SHIBYTE(v49) < 0 )
            operator delete(__p[0]);
          break;
        default:
          break;
      }
      v29 = v50;
      v30 = *(std::once_flag::_State_type **)(v8 + 48);
      if ( v30 )
      {
        v53 = v8;
        v54 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v30, memory_order_acquire) != -1LL )
        {
          v46 = &v54;
          v47 = &v53;
          v55 = &v46;
          std::__call_once(v30, &v55, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      v31 = v29 + 32;
      switch ( *(_DWORD *)(v8 + 56) )
      {
        case 1:
          sub_1000CE9C4(v31);
          google::protobuf::Reflection::SetDouble(v3, v18, (const google::protobuf::FieldDescriptor *)v8, v36);
          break;
        case 2:
          sub_1000CE7C0(v31);
          google::protobuf::Reflection::SetFloat(v3, v18, (const google::protobuf::FieldDescriptor *)v8, v37);
          break;
        case 3:
        case 0x10:
        case 0x12:
          v33 = sub_1000CE1C4(v31);
          google::protobuf::Reflection::SetInt64(v3, v18, (const google::protobuf::FieldDescriptor *)v8, v33);
          break;
        case 4:
        case 6:
          v35 = sub_1000CE5BC(v31);
          google::protobuf::Reflection::SetUInt64(v3, v18, (const google::protobuf::FieldDescriptor *)v8, v35);
          break;
        case 5:
        case 0xF:
        case 0x11:
          v32 = sub_1000CDFC8(v31);
          google::protobuf::Reflection::SetInt32(v3, v18, (const google::protobuf::FieldDescriptor *)v8, v32);
          break;
        case 7:
        case 0xD:
          v34 = sub_1000CE3C0(v31);
          google::protobuf::Reflection::SetUInt32(v3, v18, (const google::protobuf::FieldDescriptor *)v8, v34);
          break;
        case 8:
          v38 = sub_1000CEBC0(v31);
          google::protobuf::Reflection::SetBool(v3, v18, (const google::protobuf::FieldDescriptor *)v8, v38);
          break;
        case 9:
        case 0xC:
          v40 = sub_1000CEDC0(v31);
          if ( *(char *)(v40 + 23) < 0 )
          {
            sub_10007A474(v44, *(void **)v40);
          }
          else
          {
            v41 = *(_OWORD *)v40;
            v45 = *(_QWORD *)(v40 + 16);
            *(_OWORD *)v44 = v41;
          }
          google::protobuf::Reflection::SetString((int)v3, (int)v18, (google::protobuf::FieldDescriptor *)v8);
          if ( SHIBYTE(v45) < 0 )
            operator delete(v44[0]);
          break;
        case 0xA:
        case 0xB:
          v42 = sub_1000CF1AC(v31);
          v43 = google::protobuf::Reflection::MutableMessage(
                  v3,
                  v18,
                  (const google::protobuf::FieldDescriptor *)v8,
                  0LL);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 112LL))(v43, v42);
          break;
        case 0xE:
          v39 = sub_1000CEFB8(v31);
          google::protobuf::Reflection::SetEnumValue(v3, v18, (const google::protobuf::FieldDescriptor *)v8, v39);
          break;
        default:
          break;
      }
      result = (_QWORD *)sub_1000D1430(&v50);
    }
    while ( v50 );
  }
  return result;
}