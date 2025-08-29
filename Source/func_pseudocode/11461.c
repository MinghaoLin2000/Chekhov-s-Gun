__ZN6google8protobuf14DynamicMessageD2Ev
void __fastcall google::protobuf::DynamicMessage::~DynamicMessage(google::protobuf::DynamicMessage *this)
{
  __int64 v2; // x22
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x23
  __int64 v6; // x24
  __int64 v7; // x27
  __int64 v8; // x21
  __int64 v9; // x9
  char *v10; // x20
  std::once_flag::_State_type *v11; // x0
  __int64 v12; // x0
  void *v13; // x0
  __int64 v14; // t1
  __int64 v15; // x10
  int v16; // w9
  __int64 v17; // x28
  __int64 v18; // x20
  std::once_flag::_State_type *v19; // x0
  __int64 v20; // x27
  int v21; // w8
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x8
  __int64 v25; // x27
  int v26; // w8
  __int64 v27; // x8
  std::once_flag::_State_type *v28; // x0
  google::protobuf::DynamicMessage *v29; // x8
  std::once_flag::_State_type *v31; // x0
  __int64 v32; // [xsp+8h] [xbp-78h] BYREF
  void (__fastcall *v33)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-70h] BYREF
  void (__fastcall ***v34)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-68h] BYREF
  void (__fastcall **v35)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-60h] BYREF
  __int64 *v36; // [xsp+28h] [xbp-58h]

  *(_QWORD *)this = off_1001D96E8;
  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  sub_100037E58((char *)this + 8);
  v3 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  if ( (_DWORD)v3 != -1 )
    google::protobuf::internal::ExtensionSet::~ExtensionSet((google::protobuf::DynamicMessage *)((char *)this + v3));
  LODWORD(v4) = *(_DWORD *)(v2 + 104);
  if ( (int)v4 >= 1 )
  {
    v5 = 0LL;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v2 + 40);
      v8 = v7 + v5;
      v9 = *(_QWORD *)(v7 + v5 + 88);
      if ( !v9 || *(_DWORD *)(v9 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v9 + 32) + 65LL) )
        break;
      v15 = *((_QWORD *)this + 2);
      v16 = -1431655765 * ((unsigned __int64)(v9 - *(_QWORD *)(*(_QWORD *)(v9 + 16) + 48LL)) >> 4);
      v17 = v7 + v5;
      if ( *(_DWORD *)((char *)this + 4 * v16 + *(_DWORD *)(v15 + 8)) == *(_DWORD *)(v7 + v5 + 68) )
      {
        v18 = *(int *)(*(_QWORD *)(v15 + 40) + 4LL * ((int)v4 + v16));
        v19 = *(std::once_flag::_State_type **)(v17 + 48);
        if ( v19 )
        {
          v32 = v7 + v5;
          v33 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v19, memory_order_acquire) != -1LL )
          {
            v35 = &v33;
            v36 = &v32;
            v34 = &v35;
            std::__call_once(v19, &v34, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        v10 = (char *)this + v18;
        v20 = v7 + v5;
        v21 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v20 + 56)];
        if ( v21 != 9 )
        {
          v31 = *(std::once_flag::_State_type **)(v17 + 48);
          if ( v31 )
          {
            v32 = v8;
            v33 = google::protobuf::FieldDescriptor::TypeOnceInit;
            if ( atomic_load_explicit((atomic_ullong *volatile)v31, memory_order_acquire) != -1LL )
            {
              v35 = &v33;
              v36 = &v32;
              v34 = &v35;
              std::__call_once(v31, &v34, (void (__cdecl *)(void *))sub_10007A460);
            }
            v21 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v20 + 56)];
          }
          if ( v21 != 10 )
            goto LABEL_50;
LABEL_44:
          if ( *(_QWORD *)v10 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 8LL))(*(_QWORD *)v10);
          goto LABEL_50;
        }
        v22 = *((_QWORD *)this + 2);
        v23 = *(_QWORD *)(v22 + 64);
        v24 = *(unsigned int *)(*(_QWORD *)(v22 + 40) + 4 * v6);
LABEL_27:
        google::protobuf::internal::ArenaStringPtr::Destroy(v10, *(_QWORD *)(v23 + v24) & 0xFFFFFFFFFFFFFFFELL, 0LL);
      }
LABEL_50:
      ++v6;
      v4 = *(int *)(v2 + 104);
      v5 += 152LL;
      if ( v6 >= v4 )
        return;
    }
    v10 = (char *)this + *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 4 * v6);
    v11 = *(std::once_flag::_State_type **)(v8 + 48);
    if ( *(_DWORD *)(v8 + 60) == 3 )
    {
      if ( v11 )
      {
        v32 = v7 + v5;
        v33 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v11, memory_order_acquire) != -1LL )
        {
          v35 = &v33;
          v36 = &v32;
          v34 = &v35;
          std::__call_once(v11, &v34, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      switch ( *(_DWORD *)(v7 + v5 + 56) )
      {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
          if ( *((int *)v10 + 1) >= 1 )
          {
            v12 = *((_QWORD *)v10 + 1);
            v14 = *(_QWORD *)(v12 - 8);
            v13 = (void *)(v12 - 8);
            if ( !v14 )
              operator delete(v13);
          }
          break;
        case 9:
        case 0xC:
          sub_1000B8A24(v10);
          break;
        case 0xA:
        case 0xB:
          if ( (unsigned int)sub_1000BF2A4((google::protobuf::FieldDescriptor *)(v7 + v5)) )
            (**(void (__fastcall ***)(char *))v10)(v10);
          else
            sub_1000C09A0(v10);
          break;
        default:
          goto LABEL_50;
      }
      goto LABEL_50;
    }
    if ( v11 )
    {
      v32 = v7 + v5;
      v33 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v11, memory_order_acquire) != -1LL )
      {
        v35 = &v33;
        v36 = &v32;
        v34 = &v35;
        std::__call_once(v11, &v34, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v25 = v7 + v5;
    v26 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v25 + 56)];
    if ( v26 != 9 )
    {
      v28 = *(std::once_flag::_State_type **)(v8 + 48);
      if ( v28 )
      {
        v32 = v8;
        v33 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v28, memory_order_acquire) != -1LL )
        {
          v35 = &v33;
          v36 = &v32;
          v34 = &v35;
          std::__call_once(v28, &v34, (void (__cdecl *)(void *))sub_10007A460);
        }
        v26 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v25 + 56)];
      }
      if ( v26 != 10 )
        goto LABEL_50;
      v29 = *(google::protobuf::DynamicMessage **)(*((_QWORD *)this + 2) + 64LL);
      if ( v29 == this || v29 == 0LL )
        goto LABEL_50;
      goto LABEL_44;
    }
    v27 = *((_QWORD *)this + 2);
    v23 = *(_QWORD *)(v27 + 64);
    v24 = *(int *)(*(_QWORD *)(v27 + 40) + 4 * v6);
    goto LABEL_27;
  }
}