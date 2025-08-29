__ZNK6google8protobuf10TextFormat7Printer10PrintFieldERKNS0_7MessageEPKNS0_10ReflectionEPKNS0_15FieldDescriptorEPNS2_13TextGeneratorE
void __fastcall google::protobuf::TextFormat::Printer::PrintField(
        __int64 a1,
        google::protobuf::Message *a2,
        google::protobuf::Reflection *a3,
        google::protobuf::FieldDescriptor *a4,
        __int64 a5)
{
  std::once_flag::_State_type *v9; // x0
  int v10; // w8
  std::once_flag::_State_type *v11; // x0
  __int64 v12; // x24
  const google::protobuf::Descriptor *v13; // x1
  const unsigned int *v14; // x2
  const void *v15; // x3
  std::once_flag::_State_type *v16; // x0
  __int64 v17; // x26
  _QWORD *v18; // x21
  __int64 v19; // x28
  std::once_flag::_State_type *v20; // x0
  _QWORD *v21; // x9
  __int64 *v22; // x10
  _QWORD *v23; // x8
  unsigned __int64 v24; // x10
  bool v25; // cf
  _QWORD *v26; // x10
  unsigned __int64 v27; // x9
  __int64 *v28; // x8
  __int64 v29; // x25
  const google::protobuf::Message *v30; // x27
  const char *v31; // x1
  __int64 RepeatedMessage; // x0
  _QWORD *v33; // x19
  _QWORD *v34; // x20
  __int64 v35; // [xsp+0h] [xbp-120h]
  void *__p; // [xsp+20h] [xbp-100h] BYREF
  _QWORD *v38; // [xsp+28h] [xbp-F8h]
  __int64 v39; // [xsp+30h] [xbp-F0h]
  google::protobuf::FieldDescriptor *v40; // [xsp+38h] [xbp-E8h] BYREF
  void (__fastcall *v41)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-E0h] BYREF
  void (__fastcall **v42)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+48h] [xbp-D8h] BYREF
  void (__fastcall *v43)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+50h] [xbp-D0h] BYREF
  google::protobuf::FieldDescriptor **v44; // [xsp+58h] [xbp-C8h]
  void (__fastcall **v45)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+60h] [xbp-C0h] BYREF
  void (__fastcall ***v46)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+68h] [xbp-B8h]

  if ( !*(_BYTE *)(a1 + 6) || *((_DWORD *)a4 + 15) != 3 )
    goto LABEL_12;
  v9 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
  if ( v9 )
  {
    v42 = (void (__fastcall **)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))a4;
    v43 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
    {
      v45 = &v43;
      v46 = &v42;
      __p = &v45;
      std::__call_once(v9, &__p, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  v10 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a4 + 14)];
  if ( v10 == 9 )
    goto LABEL_12;
  v11 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
  if ( v11 )
  {
    v42 = (void (__fastcall **)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))a4;
    v43 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v11, memory_order_acquire) != -1LL )
    {
      v45 = &v43;
      v46 = &v42;
      __p = &v45;
      std::__call_once(v11, &__p, (void (__cdecl *)(void *))sub_10007A460);
    }
    v10 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a4 + 14)];
  }
  if ( v10 != 10 )
  {
    google::protobuf::TextFormat::Printer::PrintShortRepeatedField(a1, (int)a2, a3, a4);
  }
  else
  {
LABEL_12:
    if ( *((_DWORD *)a4 + 15) == 3 )
      v12 = google::protobuf::Reflection::FieldSize(a3, a2, a4);
    else
      v12 = (google::protobuf::Reflection::HasField(a3, a2, a4) & 1) != 0
         || *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a4 + 10) + 32LL) + 75LL);
    google::protobuf::DynamicMessageFactory::DynamicMessageFactory((google::protobuf::DynamicMessageFactory *)&v45);
    __p = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v16 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
    if ( v16 )
    {
      v40 = a4;
      v41 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v16, memory_order_acquire) != -1LL )
      {
        v43 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v41;
        v44 = &v40;
        v42 = &v43;
        std::__call_once(v16, &v42, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    if ( *((_DWORD *)a4 + 14) == 11 && (unsigned int)google::protobuf::FieldDescriptor::is_map_message_type(a4) )
    {
      LOBYTE(v35) = google::protobuf::internal::MapFieldPrinterHelper::SortMap(a2, a3);
      HIDWORD(v35) = 1;
    }
    else
    {
      v35 = 0LL;
    }
    if ( (int)v12 >= 1 )
    {
      v17 = 0LL;
      v18 = (_QWORD *)(a1 + 40);
      while ( 1 )
      {
        if ( *((_DWORD *)a4 + 15) == 3 )
          v19 = (unsigned int)v17;
        else
          v19 = 0xFFFFFFFFLL;
        google::protobuf::TextFormat::Printer::PrintFieldName(a1, a2, v19, v12, a3, a4, a5);
        v20 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
        if ( v20 )
        {
          v40 = a4;
          v41 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v20, memory_order_acquire) != -1LL )
          {
            v43 = (void (__fastcall *)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *))&v41;
            v44 = &v40;
            v42 = &v43;
            std::__call_once(v20, &v42, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*((unsigned int *)a4 + 14)] == 10 )
          break;
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a5 + 40LL))(a5, ": ", 2LL);
        google::protobuf::TextFormat::Printer::PrintFieldValue(a1, a2, a3, a4, v19);
        if ( *(_BYTE *)(a1 + 4) )
          v31 = " ";
        else
          v31 = "\n";
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a5 + 40LL))(a5, v31, 1LL);
LABEL_59:
        if ( ++v17 == (unsigned int)v12 )
          goto LABEL_60;
      }
      v21 = (_QWORD *)*v18;
      v22 = (__int64 *)(a1 + 24);
      if ( *v18 )
      {
        v23 = (_QWORD *)(a1 + 40);
        do
        {
          v24 = v21[4];
          v25 = v24 >= (unsigned __int64)a4;
          if ( v24 >= (unsigned __int64)a4 )
            v26 = v21;
          else
            v26 = v21 + 1;
          if ( v25 )
            v23 = v21;
          v21 = (_QWORD *)*v26;
        }
        while ( *v26 );
        v22 = (__int64 *)(a1 + 24);
        if ( v23 != v18 )
        {
          v27 = v23[4];
          v28 = v23 + 5;
          if ( v27 <= (unsigned __int64)a4 )
            v22 = v28;
          else
            v22 = (__int64 *)(a1 + 24);
        }
      }
      v29 = *v22;
      if ( *((_DWORD *)a4 + 15) == 3 )
      {
        if ( HIDWORD(v35) )
        {
          v30 = (const google::protobuf::Message *)*((_QWORD *)__p + v17);
LABEL_56:
          (*(void (__fastcall **)(__int64, const google::protobuf::Message *, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v29 + 112LL))(
            v29,
            v30,
            v19,
            v12,
            *(unsigned __int8 *)(a1 + 4),
            a5);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
          if ( ((*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v29 + 120LL))(
                  v29,
                  v30,
                  v19,
                  v12,
                  *(unsigned __int8 *)(a1 + 4),
                  a5) & 1) == 0 )
            google::protobuf::TextFormat::Printer::Print(a1, v30, a5);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 24LL))(a5);
          (*(void (__fastcall **)(__int64, const google::protobuf::Message *, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v29 + 128LL))(
            v29,
            v30,
            v19,
            v12,
            *(unsigned __int8 *)(a1 + 4),
            a5);
          goto LABEL_59;
        }
        RepeatedMessage = google::protobuf::Reflection::GetRepeatedMessage(a3, a2, a4, v17);
      }
      else
      {
        RepeatedMessage = google::protobuf::Reflection::GetMessage(a3, a2, a4, 0LL);
      }
      v30 = (const google::protobuf::Message *)RepeatedMessage;
      goto LABEL_56;
    }
LABEL_60:
    v33 = __p;
    if ( (v35 & 1) != 0 )
    {
      v34 = v38;
      if ( __p != v38 )
      {
        do
        {
          if ( *v33 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v33 + 8LL))(*v33);
          ++v33;
        }
        while ( v33 != v34 );
        v33 = __p;
      }
    }
    if ( v33 )
    {
      v38 = v33;
      operator delete(v33);
    }
    google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(
      (google::protobuf::DynamicMessageFactory *)&v45,
      v13,
      v14,
      v15);
  }
}