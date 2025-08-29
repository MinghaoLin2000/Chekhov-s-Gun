__ZN6google8protobuf14DynamicMessage10SharedCtorEb
void __fastcall google::protobuf::DynamicMessage::SharedCtor(google::protobuf::DynamicMessage *this, int a2)
{
  __int64 v4; // x8
  __int64 v5; // x24
  int v6; // w11
  __int64 v7; // x9
  int v8; // w12
  __int64 v9; // x10
  int v10; // w11
  __int64 v11; // x8
  google::protobuf::internal::ExtensionSet *v12; // x0
  __int64 v13; // x8
  google::protobuf::Arena *v14; // x1
  __int64 v15; // x25
  __int64 v16; // x26
  __int64 v17; // x19
  google::protobuf::FieldDescriptor *v18; // x22
  __int64 v19; // x21
  __int64 v20; // x8
  std::once_flag::_State_type *v21; // x0
  google::protobuf::internal::DynamicMapField *v22; // x21
  int v23; // w8
  __int64 *v24; // x8
  __int64 v25; // x9
  _QWORD *v26; // x8
  __int64 v27; // x9
  _QWORD *v28; // x8
  int v29; // w0
  __int64 v30; // x8
  _QWORD *v31; // x19
  __int64 v32; // x23
  __int64 v33; // x0
  const google::protobuf::Message *PrototypeNoLock; // x0
  __int64 v35; // x8
  __int64 v36; // x8
  bool v37; // zf
  google::protobuf::DynamicMessageFactory *v38; // x23
  const google::protobuf::Descriptor *v39; // x0
  __int64 v40; // x8
  google::protobuf::Arena *v41; // x2
  int v42; // [xsp+4h] [xbp-7Ch]
  __int64 v43; // [xsp+8h] [xbp-78h] BYREF
  void (__fastcall *v44)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-70h] BYREF
  _QWORD *v45; // [xsp+18h] [xbp-68h] BYREF
  _QWORD v46[2]; // [xsp+20h] [xbp-60h] BYREF

  v4 = *((_QWORD *)this + 2);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v5 + 108);
  if ( v6 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    v9 = *(_QWORD *)(v5 + 48) + 32LL;
    do
    {
      if ( *(_DWORD *)(v9 - 8) != 1 || !*(_BYTE *)(**(_QWORD **)v9 + 65LL) )
      {
        v10 = *(_DWORD *)(v4 + 8) + 4 * v8++;
        *(_DWORD *)((char *)this + v10) = 0;
        v6 = *(_DWORD *)(v5 + 108);
      }
      v9 += 48LL;
      ++v7;
    }
    while ( v7 < v6 );
  }
  v11 = *(int *)(v4 + 12);
  if ( (_DWORD)v11 != -1 )
  {
    v12 = (google::protobuf::DynamicMessage *)((char *)this + v11);
    v13 = *((_QWORD *)this + 1);
    v14 = (google::protobuf::Arena *)(v13 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v13 & 1) != 0 )
      v14 = *(google::protobuf::Arena **)v14;
    google::protobuf::internal::ExtensionSet::ExtensionSet(v12, v14);
  }
  if ( *(int *)(v5 + 104) >= 1 )
  {
    v15 = 0LL;
    v16 = 0LL;
    do
    {
      v17 = *(_QWORD *)(v5 + 40);
      v18 = (google::protobuf::FieldDescriptor *)(v17 + v15);
      v19 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 4 * v16);
      v20 = *(_QWORD *)(v17 + v15 + 88);
      if ( !v20 || *(_DWORD *)(v20 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v20 + 32) + 65LL) )
      {
        v21 = (std::once_flag::_State_type *)*((_QWORD *)v18 + 6);
        if ( v21 )
        {
          v43 = v17 + v15;
          v44 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v21, memory_order_acquire) != -1LL )
          {
            v45 = v46;
            v46[0] = &v44;
            v46[1] = &v43;
            std::__call_once(v21, &v45, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        v22 = (google::protobuf::DynamicMessage *)((char *)this + v19);
        switch ( *(_DWORD *)(v17 + v15 + 56) )
        {
          case 1:
            if ( *(_DWORD *)(v17 + v15 + 60) == 3 )
              goto LABEL_31;
            *(_QWORD *)v22 = *(_QWORD *)(v17 + v15 + 144);
            break;
          case 2:
            if ( *(_DWORD *)(v17 + v15 + 60) == 3 )
              goto LABEL_31;
            *(_DWORD *)v22 = *(_DWORD *)(v17 + v15 + 144);
            break;
          case 3:
          case 4:
          case 6:
          case 0x10:
          case 0x12:
            if ( *(_DWORD *)(v17 + v15 + 60) == 3 )
              goto LABEL_31;
            v24 = *(__int64 **)(v17 + v15 + 144);
            goto LABEL_56;
          case 5:
          case 7:
          case 0xD:
          case 0xF:
          case 0x11:
            if ( *(_DWORD *)(v17 + v15 + 60) == 3 )
              goto LABEL_31;
            v23 = *(_DWORD *)(v17 + v15 + 144);
            goto LABEL_45;
          case 8:
            if ( *(_DWORD *)(v17 + v15 + 60) == 3 )
              goto LABEL_31;
            *(_BYTE *)v22 = *(_BYTE *)(v17 + v15 + 144);
            break;
          case 9:
          case 0xC:
            if ( *(_DWORD *)(v17 + v15 + 60) == 3 )
            {
              v27 = *((_QWORD *)this + 1);
              v28 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v27 & 1) != 0 )
                v28 = (_QWORD *)*v28;
              *((_QWORD *)v22 + 2) = 0LL;
              *(_QWORD *)v22 = v28;
              goto LABEL_52;
            }
            v35 = *(_QWORD *)(v17 + v15 + 144);
            if ( *(char *)(v35 + 23) < 0 )
              v36 = *(_QWORD *)(v35 + 8);
            else
              v36 = *(unsigned __int8 *)(v35 + 23);
            v37 = v36 == 0;
            v24 = &google::protobuf::internal::fixed_address_empty_string;
            if ( !v37 )
              v24 = 0LL;
LABEL_56:
            *(_QWORD *)v22 = v24;
            break;
          case 0xA:
          case 0xB:
            if ( *(_DWORD *)(v17 + v15 + 60) == 3 )
            {
              v29 = sub_1000BF2A4((google::protobuf::FieldDescriptor *)(v17 + v15));
              v30 = *((_QWORD *)this + 1);
              v31 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFELL);
              if ( v29 )
              {
                v42 = a2;
                if ( a2 )
                {
                  if ( (v30 & 1) != 0 )
                    v31 = (_QWORD *)*v31;
                  v32 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                  v33 = google::protobuf::FieldDescriptor::message_type(v18);
                  PrototypeNoLock = (const google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 16LL))(
                                                                         v32,
                                                                         v33);
                }
                else
                {
                  if ( (v30 & 1) != 0 )
                    v31 = (_QWORD *)*v31;
                  v38 = *(google::protobuf::DynamicMessageFactory **)(*((_QWORD *)this + 2) + 16LL);
                  v39 = (const google::protobuf::Descriptor *)google::protobuf::FieldDescriptor::message_type(v18);
                  PrototypeNoLock = (const google::protobuf::Message *)google::protobuf::DynamicMessageFactory::GetPrototypeNoLock(
                                                                         v38,
                                                                         v39);
                }
                if ( v31 )
                {
                  v40 = *((_QWORD *)this + 1);
                  v41 = (google::protobuf::Arena *)(v40 & 0xFFFFFFFFFFFFFFFELL);
                  if ( (v40 & 1) != 0 )
                    v41 = *(google::protobuf::Arena **)v41;
                  google::protobuf::internal::DynamicMapField::DynamicMapField(v22, PrototypeNoLock, v41);
                }
                else
                {
                  google::protobuf::internal::DynamicMapField::DynamicMapField(v22, PrototypeNoLock);
                }
                a2 = v42;
              }
              else
              {
                if ( (v30 & 1) != 0 )
                  v31 = (_QWORD *)*v31;
                *((_QWORD *)v22 + 2) = 0LL;
                *(_QWORD *)v22 = v31;
LABEL_52:
                *((_QWORD *)v22 + 1) = 0LL;
              }
            }
            else
            {
              *(_QWORD *)v22 = 0LL;
            }
            break;
          case 0xE:
            if ( *(_DWORD *)(v17 + v15 + 60) == 3 )
            {
LABEL_31:
              v25 = *((_QWORD *)this + 1);
              v26 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v25 & 1) != 0 )
                v26 = (_QWORD *)*v26;
              *(_QWORD *)v22 = 0LL;
              *((_QWORD *)v22 + 1) = v26;
            }
            else
            {
              v23 = *(_DWORD *)(google::protobuf::FieldDescriptor::default_value_enum((google::protobuf::FieldDescriptor *)(v17 + v15))
                              + 16);
LABEL_45:
              *(_DWORD *)v22 = v23;
            }
            break;
          default:
            break;
        }
      }
      ++v16;
      v15 += 152LL;
    }
    while ( v16 < *(int *)(v5 + 104) );
  }
}