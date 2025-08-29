__ZN6google8protobuf8internal15DynamicMapField16AllocateMapValueEPNS0_11MapValueRefE
void __fastcall google::protobuf::internal::DynamicMapField::AllocateMapValue(__int64 a1, __int64 a2)
{
  google::protobuf::Descriptor *v4; // x0
  __int64 v5; // x21
  std::once_flag::_State_type *v6; // x0
  std::once_flag::_State_type *v7; // x0
  int v8; // w8
  __int64 v9; // x0
  google::protobuf::Reflection *v10; // x1
  __int64 Message; // x0
  __int64 v12; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v13)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  void (__fastcall ***v14)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-38h] BYREF
  void (__fastcall **v15)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-30h] BYREF
  __int64 *v16; // [xsp+28h] [xbp-28h]

  v4 = (google::protobuf::Descriptor *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 152LL))(*(_QWORD *)(a1 + 144));
  v5 = google::protobuf::Descriptor::map_value(v4);
  v6 = *(std::once_flag::_State_type **)(v5 + 48);
  if ( v6 )
  {
    v12 = v5;
    v13 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v6, memory_order_acquire) != -1LL )
    {
      v15 = &v13;
      v16 = &v12;
      v14 = &v15;
      std::__call_once(v6, &v14, (void (__cdecl *)(void *))sub_10007A460);
    }
    v7 = *(std::once_flag::_State_type **)(v5 + 48);
    v8 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v5 + 56)];
    *(_DWORD *)(a2 + 8) = v8;
    if ( v7 )
    {
      v12 = v5;
      v13 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v7, memory_order_acquire) != -1LL )
      {
        v15 = &v13;
        v16 = &v12;
        v14 = &v15;
        std::__call_once(v7, &v14, (void (__cdecl *)(void *))sub_10007A460);
      }
      v8 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v5 + 56)];
    }
  }
  else
  {
    v8 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v5 + 56)];
    *(_DWORD *)(a2 + 8) = v8;
  }
  switch ( v8 )
  {
    case 1:
    case 8:
      v9 = sub_1000D1CE8(*(_QWORD *)(a1 + 8));
      goto LABEL_19;
    case 2:
      v9 = sub_1000D1DE4(*(_QWORD *)(a1 + 8));
      goto LABEL_19;
    case 3:
      v9 = sub_1000D1EE0(*(_QWORD *)(a1 + 8));
      goto LABEL_19;
    case 4:
      v9 = sub_1000D1FDC(*(_QWORD *)(a1 + 8));
      goto LABEL_19;
    case 5:
      v9 = sub_1000D20D8(*(_QWORD *)(a1 + 8));
      goto LABEL_19;
    case 6:
      v9 = sub_1000D21D4(*(_QWORD *)(a1 + 8));
      goto LABEL_19;
    case 7:
      v9 = sub_1000D22D0(*(_QWORD *)(a1 + 8));
      goto LABEL_19;
    case 9:
      v9 = sub_10007A808(*(_QWORD *)(a1 + 8));
      goto LABEL_19;
    case 10:
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 152LL))(*(_QWORD *)(a1 + 144));
      Message = google::protobuf::Reflection::GetMessage(
                  v10,
                  *(const google::protobuf::Message **)(a1 + 144),
                  (const google::protobuf::FieldDescriptor *)v5,
                  0LL);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Message + 32LL))(Message, *(_QWORD *)(a1 + 8));
LABEL_19:
      *(_QWORD *)a2 = v9;
      break;
    default:
      return;
  }
}