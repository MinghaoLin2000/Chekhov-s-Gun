__ZNK6google8protobuf10Reflection10ClearOneofEPNS0_7MessageEPKNS0_15OneofDescriptorE
void __fastcall google::protobuf::Reflection::ClearOneof(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::OneofDescriptor *a3)
{
  const google::protobuf::FieldDescriptor *v6; // x2
  int v7; // w1
  __int64 FieldByNumber; // x0
  __int64 v9; // x22
  __int64 v10; // x9
  _QWORD *v11; // x8
  std::once_flag::_State_type *v12; // x0
  int v13; // w8
  __int64 v14; // x8
  unsigned int v15; // w0
  __int64 v16; // x0
  char *v17; // x0
  __int64 v18; // x8
  _QWORD *v19; // x2
  __int64 v20; // [xsp+8h] [xbp-48h] BYREF
  void (__fastcall *v21)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-40h] BYREF
  _QWORD *v22; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v23[2]; // [xsp+20h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  if ( *((_DWORD *)a3 + 6) != 1
    || (v6 = (const google::protobuf::FieldDescriptor *)**((_QWORD **)a3 + 4), !*((_BYTE *)v6 + 65)) )
  {
    v7 = *(_DWORD *)((char *)a2
                   + *((_DWORD *)this + 11)
                   - 1431655764 * (unsigned int)(((unsigned __int64)a3 - *(_QWORD *)(*((_QWORD *)a3 + 2) + 48LL)) >> 4));
    if ( !v7 )
      return;
    FieldByNumber = google::protobuf::Descriptor::FindFieldByNumber(*(google::protobuf::Descriptor **)this, v7);
    v9 = FieldByNumber;
    v10 = *(_QWORD *)((char *)a2 + *((unsigned int *)this + 9));
    v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v10 & 1) != 0 )
    {
      if ( *v11 )
        goto LABEL_9;
    }
    else if ( v11 )
    {
LABEL_9:
      *(_DWORD *)((char *)a2
                + *((_DWORD *)this + 11)
                - 1431655764 * (unsigned int)(((unsigned __int64)a3 - *(_QWORD *)(*((_QWORD *)a3 + 2) + 48LL)) >> 4)) = 0;
      return;
    }
    v12 = *(std::once_flag::_State_type **)(FieldByNumber + 48);
    if ( v12 )
    {
      v20 = v9;
      v21 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
      {
        v23[0] = &v21;
        v23[1] = &v20;
        v22 = v23;
        std::__call_once(v12, &v22, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v13 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v9 + 56)];
    if ( v13 == 10 )
    {
      v16 = *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, v9));
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    }
    else if ( v13 == 9 )
    {
      v14 = *(_QWORD *)(v9 + 88);
      if ( !v14 || *(_DWORD *)(v14 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v14 + 32) + 65LL) )
      {
        v15 = sub_1000D8CF8((char *)this + 8, v9);
        if ( v15 != -1 )
          *(_DWORD *)((char *)a2 + 4 * (v15 >> 5) + *((unsigned int *)this + 8)) |= 1 << v15;
      }
      else
      {
        *(_DWORD *)((char *)a2
                  + *((_DWORD *)this + 11)
                  - 1431655764
                  * (unsigned int)((unsigned __int64)(v14 - *(_QWORD *)(*(_QWORD *)(v14 + 16) + 48LL)) >> 4)) = *(_DWORD *)(v9 + 68);
      }
      v17 = (char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, v9);
      v18 = *(_QWORD *)((char *)a2 + *((unsigned int *)this + 9));
      v19 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v18 & 1) != 0 )
        v19 = (_QWORD *)*v19;
      google::protobuf::internal::ArenaStringPtr::Destroy(v17, 0LL, v19);
    }
    goto LABEL_9;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  google::protobuf::Reflection::ClearField(this, a2, v6);
}