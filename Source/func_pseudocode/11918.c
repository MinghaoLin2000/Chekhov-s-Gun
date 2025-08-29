__ZNK6google8protobuf10Reflection21RepeatedFieldAccessorEPKNS0_15FieldDescriptorE
__int64 *__fastcall google::protobuf::Reflection::RepeatedFieldAccessor(
        google::protobuf::Reflection *this,
        const google::protobuf::FieldDescriptor *a2)
{
  google::protobuf::internal::LogMessage *v3; // x0
  std::once_flag::_State_type *v4; // x0
  int v5; // w8
  google::protobuf::internal::LogMessage *v7; // x0
  std::once_flag::_State_type *v8; // x0
  int v9; // w0
  __int64 *v10; // x8
  __int64 *v11; // x19
  __guard *v12; // x0
  int v13; // w0
  int v14; // w0
  int v15; // w0
  int v16; // w0
  int v17; // w0
  int v18; // w0
  int v19; // w0
  void (__fastcall **v20)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+8h] [xbp-58h] BYREF
  const google::protobuf::FieldDescriptor **v21; // [xsp+10h] [xbp-50h]
  const google::protobuf::FieldDescriptor *v22; // [xsp+38h] [xbp-28h] BYREF
  void (__fastcall *v23)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-20h] BYREF
  void (__fastcall ***v24)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+48h] [xbp-18h] BYREF

  if ( *((_DWORD *)a2 + 15) != 3 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v20,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/message.cc",
      298LL);
    v3 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     &v20,
                                                     "CHECK failed: field->is_repeated(): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v24, v3);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v20);
  }
  v4 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
  if ( v4 )
  {
    v22 = a2;
    v23 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v4, memory_order_acquire) != -1LL )
    {
      v20 = &v23;
      v21 = &v22;
      v24 = &v20;
      std::__call_once(v4, &v24, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v5 = *((_DWORD *)a2 + 14);
  switch ( v5 )
  {
    case 1:
      if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7DC8, memory_order_acquire) & 1) == 0 )
      {
        v15 = __cxa_guard_acquire(&qword_1001F7DC8);
        v10 = &qword_1001F7DC0;
        if ( !v15 )
          return v10;
        v11 = &qword_1001F7DC0;
        qword_1001F7DC0 = (__int64)off_1001DAC38;
        v12 = &qword_1001F7DC8;
        goto LABEL_53;
      }
      return &qword_1001F7DC0;
    case 2:
      if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7DB8, memory_order_acquire) & 1) == 0 )
      {
        v16 = __cxa_guard_acquire(&qword_1001F7DB8);
        v10 = &qword_1001F7DB0;
        if ( !v16 )
          return v10;
        v11 = &qword_1001F7DB0;
        qword_1001F7DB0 = (__int64)off_1001DAB68;
        v12 = &qword_1001F7DB8;
        goto LABEL_53;
      }
      return &qword_1001F7DB0;
    case 3:
    case 16:
    case 18:
      if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7D98, memory_order_acquire) & 1) == 0 )
      {
        v9 = __cxa_guard_acquire(&qword_1001F7D98);
        v10 = &qword_1001F7D90;
        if ( !v9 )
          return v10;
        v11 = &qword_1001F7D90;
        qword_1001F7D90 = (__int64)off_1001DA9C8;
        v12 = &qword_1001F7D98;
        goto LABEL_53;
      }
      return &qword_1001F7D90;
    case 4:
    case 6:
      if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7DA8, memory_order_acquire) & 1) == 0 )
      {
        v14 = __cxa_guard_acquire(&qword_1001F7DA8);
        v10 = &qword_1001F7DA0;
        if ( !v14 )
          return v10;
        v11 = &qword_1001F7DA0;
        qword_1001F7DA0 = (__int64)off_1001DAA98;
        v12 = &qword_1001F7DA8;
        goto LABEL_53;
      }
      return &qword_1001F7DA0;
    case 5:
    case 14:
    case 15:
    case 17:
      sub_1000E6A04();
      return &qword_1001F7D70;
    case 7:
    case 13:
      if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7D88, memory_order_acquire) & 1) == 0 )
      {
        v13 = __cxa_guard_acquire(&qword_1001F7D88);
        v10 = &qword_1001F7D80;
        if ( !v13 )
          return v10;
        v11 = &qword_1001F7D80;
        qword_1001F7D80 = (__int64)off_1001DA8F8;
        v12 = &qword_1001F7D88;
        goto LABEL_53;
      }
      return &qword_1001F7D80;
    case 8:
      if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7DD8, memory_order_acquire) & 1) == 0 )
      {
        v17 = __cxa_guard_acquire(&qword_1001F7DD8);
        v10 = &qword_1001F7DD0;
        if ( !v17 )
          return v10;
        v11 = &qword_1001F7DD0;
        qword_1001F7DD0 = (__int64)off_1001DAD08;
        v12 = &qword_1001F7DD8;
        goto LABEL_53;
      }
      return &qword_1001F7DD0;
    case 9:
    case 12:
      if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7DE8, memory_order_acquire) & 1) == 0 )
      {
        v18 = __cxa_guard_acquire(&qword_1001F7DE8);
        v10 = &qword_1001F7DE0;
        if ( !v18 )
          return v10;
        v11 = &qword_1001F7DE0;
        qword_1001F7DE0 = (__int64)off_1001DADD8;
        v12 = &qword_1001F7DE8;
        goto LABEL_53;
      }
      return &qword_1001F7DE0;
    case 10:
    case 11:
      v8 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
      if ( v8 )
      {
        v22 = a2;
        v23 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
        {
          v20 = &v23;
          v21 = &v22;
          v24 = &v20;
          std::__call_once(v8, &v24, (void (__cdecl *)(void *))sub_10007A460);
        }
        v5 = *((_DWORD *)a2 + 14);
      }
      if ( v5 == 11 && (unsigned int)google::protobuf::FieldDescriptor::is_map_message_type(a2) )
      {
        if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7DF8, memory_order_acquire) & 1) != 0 )
          return &qword_1001F7DF0;
        v11 = &qword_1001F7DF0;
        if ( !__cxa_guard_acquire(&qword_1001F7DF8) )
          return v11;
        qword_1001F7DF0 = (__int64)off_1001DAEB0;
        __cxa_atexit((void (__fastcall *)(void *))nullsub_2, &qword_1001F7DF0, (void *)&_mh_execute_header);
        v12 = &qword_1001F7DF8;
LABEL_53:
        __cxa_guard_release(v12);
        return v11;
      }
      if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7E08, memory_order_acquire) & 1) == 0 )
      {
        v19 = __cxa_guard_acquire(&qword_1001F7E08);
        v10 = &qword_1001F7E00;
        if ( !v19 )
          return v10;
        v11 = &qword_1001F7E00;
        qword_1001F7E00 = (__int64)off_1001DAF80;
        v12 = &qword_1001F7E08;
        goto LABEL_53;
      }
      return &qword_1001F7E00;
    default:
      google::protobuf::internal::LogMessage::LogMessage(
        &v20,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/message.cc",
        326LL);
      v7 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                       &v20,
                                                       "Should not reach here.");
      google::protobuf::internal::LogFinisher::operator=((int)&v24, v7);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v20);
      return 0LL;
  }
}