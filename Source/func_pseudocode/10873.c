__ZNK6google8protobuf15FieldDescriptor6CopyToEPNS0_20FieldDescriptorProtoE
__int64 __fastcall google::protobuf::FieldDescriptor::CopyTo(
        google::protobuf::FieldDescriptor *this,
        google::protobuf::FieldDescriptorProto *a2)
{
  __int64 v4; // x1
  __int64 v5; // x8
  _QWORD *v6; // x2
  char *v7; // x2
  int v8; // w10
  int v9; // w9
  int v10; // w8
  __int64 v11; // x1
  __int64 v12; // x8
  _QWORD *v13; // x2
  int v14; // w9
  int v15; // w8
  std::once_flag::_State_type *v16; // x0
  int v17; // w10
  int v18; // w9
  __int64 v19; // x8
  _QWORD *v20; // x2
  __int64 v21; // x8
  _QWORD *v22; // x1
  std::string *v23; // x0
  __int64 v24; // x8
  int v25; // w10
  const std::string::value_type *v26; // x1
  std::string::size_type v27; // x2
  std::once_flag::_State_type *v28; // x0
  int v29; // w8
  __int64 v30; // x8
  _QWORD *v31; // x2
  __int64 v32; // x8
  _QWORD *v33; // x1
  std::string *v34; // x21
  __int64 v35; // x0
  std::string *v36; // x0
  __int64 v37; // x8
  _QWORD *v38; // x2
  __int64 v39; // x8
  _QWORD *v40; // x1
  __int64 v41; // x8
  int v42; // w10
  const std::string::value_type *v43; // x1
  std::string::size_type v44; // x2
  __int64 v45; // x8
  _QWORD *v46; // x2
  __int64 v47; // x8
  int v48; // w8
  __int64 v49; // x21
  __int64 result; // x0
  google::protobuf::FieldOptions *v51; // x0
  __int64 v52; // x8
  _QWORD *v53; // x0
  google::protobuf::FieldDescriptor *v54; // [xsp+0h] [xbp-50h] BYREF
  __int64 (__fastcall *v55)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+8h] [xbp-48h] BYREF
  void **p_p; // [xsp+10h] [xbp-40h] BYREF
  void *__p; // [xsp+18h] [xbp-38h] BYREF
  google::protobuf::FieldDescriptor **v58; // [xsp+20h] [xbp-30h]
  char v59; // [xsp+2Fh] [xbp-21h]

  v4 = *(_QWORD *)this;
  *((_DWORD *)a2 + 4) |= 1u;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v5 & 1) != 0 )
    v6 = (_QWORD *)*v6;
  google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 24, v4, v6);
  v8 = *((_DWORD *)this + 17);
  v9 = *((_DWORD *)a2 + 4);
  v10 = v9 | 0x40;
  *((_DWORD *)a2 + 4) = v9 | 0x40;
  *((_DWORD *)a2 + 18) = v8;
  if ( *((_BYTE *)this + 66) )
  {
    v11 = *((_QWORD *)this + 4);
    *((_DWORD *)a2 + 4) = v9 | 0x50;
    v12 = *((_QWORD *)a2 + 1);
    v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v12 & 1) != 0 )
      v13 = (_QWORD *)*v13;
    google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 56, v11, v13);
    v10 = *((_DWORD *)a2 + 4);
  }
  if ( *((_BYTE *)this + 65) )
  {
    v10 |= 0x100u;
    *((_DWORD *)a2 + 4) = v10;
    *((_BYTE *)a2 + 80) = 1;
  }
  v14 = *((_DWORD *)this + 15);
  v15 = v10 | 0x200;
  *((_DWORD *)a2 + 4) = v15;
  *((_DWORD *)a2 + 21) = v14;
  v16 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v16 )
  {
    v54 = this;
    v55 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v16, memory_order_acquire) != -1LL )
    {
      __p = &v55;
      v58 = &v54;
      p_p = &__p;
      std::__call_once(v16, &p_p, (void (__cdecl *)(void *))sub_10007A460);
    }
    v15 = *((_DWORD *)a2 + 4);
  }
  v17 = *((_DWORD *)this + 14);
  v18 = v15 | 0x400;
  *((_DWORD *)a2 + 4) = v15 | 0x400;
  *((_DWORD *)a2 + 22) = v17;
  if ( *((_BYTE *)this + 67) )
  {
    if ( !*(_BYTE *)(*((_QWORD *)this + 10) + 141LL) )
    {
      *((_DWORD *)a2 + 4) = v15 | 0x402;
      sub_10007A754((int)&__p, ".");
      v19 = *((_QWORD *)a2 + 1);
      v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v19 & 1) != 0 )
        v20 = (_QWORD *)*v20;
      google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 32, &__p, v20);
      if ( v59 < 0 )
        operator delete(__p);
      v18 = *((_DWORD *)a2 + 4);
    }
    *((_DWORD *)a2 + 4) = v18 | 2;
    v21 = *((_QWORD *)a2 + 1);
    v22 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v21 & 1) != 0 )
      v22 = (_QWORD *)*v22;
    v23 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable((char *)a2 + 32, v22);
    v24 = *(_QWORD *)(*((_QWORD *)this + 10) + 8LL);
    v25 = *(char *)(v24 + 23);
    if ( v25 >= 0 )
      v26 = *(const std::string::value_type **)(*((_QWORD *)this + 10) + 8LL);
    else
      v26 = *(const std::string::value_type **)v24;
    if ( v25 >= 0 )
      v27 = *(unsigned __int8 *)(v24 + 23);
    else
      v27 = *(_QWORD *)(v24 + 8);
    std::string::append(v23, v26, v27);
  }
  v28 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v28 )
  {
    v54 = this;
    v55 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v28, memory_order_acquire) != -1LL )
    {
      __p = &v55;
      v58 = &v54;
      p_p = &__p;
      std::__call_once(v28, &p_p, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v29 = *((_DWORD *)this + 14);
  if ( (v29 & 0xFFFFFFFE) == 0xA )
  {
    if ( *(_BYTE *)(google::protobuf::FieldDescriptor::message_type(this) + 140) )
    {
      *((_DWORD *)a2 + 22) = 1;
      *((_DWORD *)a2 + 4) &= ~0x400u;
    }
    if ( !*(_BYTE *)(google::protobuf::FieldDescriptor::message_type(this) + 141) )
    {
      *((_DWORD *)a2 + 4) |= 4u;
      sub_10007A754((int)&__p, ".");
      v30 = *((_QWORD *)a2 + 1);
      v31 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v30 & 1) != 0 )
        v31 = (_QWORD *)*v31;
      google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 40, &__p, v31);
      if ( v59 < 0 )
        operator delete(__p);
    }
    *((_DWORD *)a2 + 4) |= 4u;
    v32 = *((_QWORD *)a2 + 1);
    v33 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v32 & 1) != 0 )
      v33 = (_QWORD *)*v33;
    v34 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable((char *)a2 + 40, v33);
    v35 = google::protobuf::FieldDescriptor::message_type(this);
LABEL_56:
    v41 = *(_QWORD *)(v35 + 8);
    v42 = *(char *)(v41 + 23);
    if ( v42 >= 0 )
      v43 = *(const std::string::value_type **)(v35 + 8);
    else
      v43 = *(const std::string::value_type **)v41;
    if ( v42 >= 0 )
      v44 = *(unsigned __int8 *)(v41 + 23);
    else
      v44 = *(_QWORD *)(v41 + 8);
    v36 = std::string::append(v34, v43, v44);
    goto LABEL_63;
  }
  v36 = (std::string *)*((_QWORD *)this + 6);
  if ( v36 )
  {
    v54 = this;
    v55 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v36, memory_order_acquire) != -1LL )
    {
      __p = &v55;
      v58 = &v54;
      p_p = &__p;
      std::__call_once((std::once_flag::_State_type *)v36, &p_p, (void (__cdecl *)(void *))sub_10007A460);
    }
    v29 = *((_DWORD *)this + 14);
  }
  if ( v29 == 14 )
  {
    if ( !*(_BYTE *)(google::protobuf::FieldDescriptor::enum_type(this) + 41) )
    {
      *((_DWORD *)a2 + 4) |= 4u;
      sub_10007A754((int)&__p, ".");
      v37 = *((_QWORD *)a2 + 1);
      v38 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v37 & 1) != 0 )
        v38 = (_QWORD *)*v38;
      google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 40, &__p, v38);
      if ( v59 < 0 )
        operator delete(__p);
    }
    *((_DWORD *)a2 + 4) |= 4u;
    v39 = *((_QWORD *)a2 + 1);
    v40 = (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v39 & 1) != 0 )
      v40 = (_QWORD *)*v40;
    v34 = (std::string *)google::protobuf::internal::ArenaStringPtr::Mutable((char *)a2 + 40, v40);
    v35 = google::protobuf::FieldDescriptor::enum_type(this);
    goto LABEL_56;
  }
LABEL_63:
  if ( *((_BYTE *)this + 64) )
  {
    google::protobuf::FieldDescriptor::DefaultValueAsString(this, 0, v7, &__p);
    *((_DWORD *)a2 + 4) |= 8u;
    v45 = *((_QWORD *)a2 + 1);
    v46 = (_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v45 & 1) != 0 )
      v46 = (_QWORD *)*v46;
    v36 = (std::string *)google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 48, &__p, v46);
    if ( v59 < 0 )
      operator delete(__p);
  }
  v47 = *((_QWORD *)this + 11);
  if ( v47 && !*((_BYTE *)this + 67) )
  {
    v48 = -1431655765 * ((unsigned __int64)(v47 - *(_QWORD *)(*(_QWORD *)(v47 + 16) + 48LL)) >> 4);
    *((_DWORD *)a2 + 4) |= 0x80u;
    *((_DWORD *)a2 + 19) = v48;
  }
  v49 = *((_QWORD *)this + 15);
  result = google::protobuf::FieldOptions::default_instance((google::protobuf::FieldOptions *)v36);
  if ( v49 != result )
  {
    *((_DWORD *)a2 + 4) |= 0x20u;
    v51 = (google::protobuf::FieldOptions *)*((_QWORD *)a2 + 8);
    if ( !v51 )
    {
      v52 = *((_QWORD *)a2 + 1);
      v53 = (_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v52 & 1) != 0 )
        v53 = (_QWORD *)*v53;
      v51 = (google::protobuf::FieldOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FieldOptions>(v53);
      *((_QWORD *)a2 + 8) = v51;
    }
    return google::protobuf::FieldOptions::CopyFrom(v51, *((const google::protobuf::FieldOptions **)this + 15));
  }
  return result;
}