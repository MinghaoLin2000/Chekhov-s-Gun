__ZN6google8protobuf17DescriptorBuilder20ValidateFieldOptionsEPNS0_15FieldDescriptorERKNS0_20FieldDescriptorProtoE
void __fastcall google::protobuf::DescriptorBuilder::ValidateFieldOptions(
        std::once_flag::_State_type *this,
        google::protobuf::FieldDescriptor *a2,
        const google::protobuf::FieldDescriptorProto *a3)
{
  google::protobuf::DescriptorBuilder *v5; // x20
  __int64 v6; // x8
  google::protobuf::DescriptorBuilder *v7; // x22
  __int64 v8; // x1
  char *v9; // x4
  __int64 v10; // x0
  const google::protobuf::FieldDescriptorProto *v11; // x2
  __int64 v12; // x3
  __int64 v13; // x22
  google::protobuf::FileOptions *v14; // x23
  google::protobuf::FileOptions *v15; // x0
  __int64 v16; // x8
  __int64 v17; // x22
  __int64 v18; // x23
  std::once_flag::_State_type *v19; // x0
  unsigned __int8 *v20; // x23
  __int64 v21; // x8
  google::protobuf::FieldDescriptor **v22; // x9
  google::protobuf::FieldDescriptor **v23; // x10
  int v24; // w22
  unsigned __int8 *v25; // x1
  __int64 v26; // x8
  int v27; // w9
  int v28; // t1
  int v29; // t1
  _BOOL4 v30; // w24
  void *__p; // [xsp+0h] [xbp-60h] BYREF
  google::protobuf::FieldDescriptor **v33; // [xsp+8h] [xbp-58h]
  unsigned __int8 v34; // [xsp+17h] [xbp-49h]
  google::protobuf::FieldDescriptor *v35; // [xsp+18h] [xbp-48h] BYREF
  __int64 (__fastcall *v36)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-40h] BYREF
  void **p_p; // [xsp+28h] [xbp-38h] BYREF

  v5 = (google::protobuf::DescriptorBuilder *)this;
  if ( *(_BYTE *)(*this + 41) )
  {
    if ( !a2 )
      return;
    this = (std::once_flag::_State_type *)google::protobuf::FieldDescriptor::message_type(a2);
    if ( !this )
      return;
  }
  if ( *(_BYTE *)(*((_QWORD *)a2 + 15) + 77LL) )
  {
    this = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
    if ( this )
    {
      v35 = a2;
      v36 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)this, memory_order_acquire) != -1LL )
      {
        __p = &v36;
        v33 = &v35;
        p_p = &__p;
        std::__call_once(this, &p_p, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    if ( *((_DWORD *)a2 + 14) != 11 )
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)v5,
        *((_QWORD *)a2 + 1),
        (__int64)a3,
        2LL,
        "[lazy = true] can only be specified for submessage fields.");
  }
  if ( *(_BYTE *)(*((_QWORD *)a2 + 15) + 76LL) )
  {
    if ( *((_DWORD *)a2 + 15) != 3 )
      goto LABEL_16;
    this = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
    if ( this )
    {
      v35 = a2;
      v36 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)this, memory_order_acquire) != -1LL )
      {
        __p = &v36;
        v33 = &v35;
        p_p = &__p;
        std::__call_once(this, &p_p, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    if ( (unsigned int)(*((_DWORD *)a2 + 14) - 13) >= 0xFFFFFFFC )
LABEL_16:
      google::protobuf::DescriptorBuilder::AddError(
        (__int64)v5,
        *((_QWORD *)a2 + 1),
        (__int64)a3,
        2LL,
        "[packed = true] can only be specified for repeated primitive fields.");
  }
  v6 = *((_QWORD *)a2 + 10);
  if ( v6 )
  {
    v7 = *(google::protobuf::DescriptorBuilder **)(v6 + 32);
    this = (std::once_flag::_State_type *)google::protobuf::MessageOptions::default_instance((google::protobuf::MessageOptions *)this);
    if ( v7 != (google::protobuf::DescriptorBuilder *)this )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 10) + 32LL) + 72LL) )
      {
        if ( !*((_BYTE *)a2 + 67) )
        {
          v8 = *((_QWORD *)a2 + 1);
          v9 = "MessageSets cannot have fields, only extensions.";
          v10 = (__int64)v5;
          v11 = a3;
          v12 = 0LL;
          goto LABEL_28;
        }
        if ( *((_DWORD *)a2 + 15) != 1 )
          goto LABEL_26;
        this = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
        if ( this )
        {
          v35 = a2;
          v36 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)this, memory_order_acquire) != -1LL )
          {
            __p = &v36;
            v33 = &v35;
            p_p = &__p;
            std::__call_once(this, &p_p, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        if ( *((_DWORD *)a2 + 14) != 11 )
        {
LABEL_26:
          v8 = *((_QWORD *)a2 + 1);
          v9 = "Extensions of MessageSets must be optional messages.";
          v10 = (__int64)v5;
          v11 = a3;
          v12 = 2LL;
LABEL_28:
          google::protobuf::DescriptorBuilder::AddError(v10, v8, (__int64)v11, v12, v9);
        }
      }
    }
  }
  v13 = *((_QWORD *)a2 + 5);
  if ( v13 )
  {
    v14 = *(google::protobuf::FileOptions **)(v13 + 136);
    v15 = (google::protobuf::FileOptions *)google::protobuf::FileOptions::default_instance((google::protobuf::FileOptions *)this);
    if ( v14 != v15 && *(_DWORD *)(*(_QWORD *)(v13 + 136) + 160LL) == 3 )
    {
      v16 = *((_QWORD *)a2 + 10);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 16);
        if ( !v17
          || (v18 = *(_QWORD *)(v17 + 136), v18 == google::protobuf::FileOptions::default_instance(v15))
          || *(_DWORD *)(*(_QWORD *)(v17 + 136) + 160LL) != 3 )
        {
          google::protobuf::DescriptorBuilder::AddError(
            (__int64)v5,
            *((_QWORD *)a2 + 1),
            (__int64)a3,
            3LL,
            "Extensions to non-lite types can only be declared in non-lite files.  Note that you cannot extend a non-lite"
            " type to contain a lite type, but the reverse is allowed.");
        }
      }
    }
  }
  v19 = (std::once_flag::_State_type *)*((_QWORD *)a2 + 6);
  if ( v19 )
  {
    v35 = a2;
    v36 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v19, memory_order_acquire) != -1LL )
    {
      __p = &v36;
      v33 = &v35;
      p_p = &__p;
      std::__call_once(v19, &p_p, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *((_DWORD *)a2 + 14) == 11
    && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 32LL) + 75LL)
    && (google::protobuf::DescriptorBuilder::ValidateMapEntry(v5, a2, a3) & 1) == 0 )
  {
    google::protobuf::DescriptorBuilder::AddError(
      (__int64)v5,
      *((_QWORD *)a2 + 1),
      (__int64)a3,
      2LL,
      "map_entry should not be set explicitly. Use map<KeyType, ValueType> instead.");
  }
  google::protobuf::DescriptorBuilder::ValidateJSType(v5, a2, a3);
  if ( *((_BYTE *)a2 + 67) && *((_BYTE *)a2 + 66) )
  {
    v20 = (unsigned __int8 *)*((_QWORD *)a2 + 4);
    sub_10008D9BC(&__p, *(_QWORD *)a2);
    v21 = v20[23];
    if ( (v21 & 0x80u) == 0LL )
      v22 = (google::protobuf::FieldDescriptor **)v20[23];
    else
      v22 = (google::protobuf::FieldDescriptor **)*((_QWORD *)v20 + 1);
    v23 = (google::protobuf::FieldDescriptor **)v34;
    v24 = (char)v34;
    if ( (v34 & 0x80u) != 0 )
      v23 = v33;
    if ( v22 == v23 )
    {
      if ( (v34 & 0x80u) == 0 )
        v25 = (unsigned __int8 *)&__p;
      else
        v25 = (unsigned __int8 *)__p;
      if ( (v21 & 0x80) != 0 )
      {
        v30 = memcmp(*(const void **)v20, v25, *((_QWORD *)v20 + 1)) != 0;
        goto LABEL_67;
      }
      if ( v20[23] )
      {
        v26 = v21 - 1;
        do
        {
          v28 = *v20++;
          v27 = v28;
          v29 = *v25++;
          v30 = v27 != v29;
        }
        while ( v27 == v29 && v26-- != 0 );
LABEL_67:
        if ( (v24 & 0x80000000) == 0 )
          goto LABEL_69;
        goto LABEL_68;
      }
      v30 = 0;
      if ( ((char)v34 & 0x80000000) == 0 )
      {
LABEL_69:
        if ( v30 )
          google::protobuf::DescriptorBuilder::AddError(
            (__int64)v5,
            *((_QWORD *)a2 + 1),
            (__int64)a3,
            7LL,
            "option json_name is not allowed on extension fields.");
        return;
      }
    }
    else
    {
      v30 = 1;
      if ( ((char)v34 & 0x80000000) == 0 )
        goto LABEL_69;
    }
LABEL_68:
    operator delete(__p);
    goto LABEL_69;
  }
}