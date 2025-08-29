__ZNK6google8protobuf10Reflection13SpaceUsedLongERKNS0_7MessageE
__int64 __fastcall google::protobuf::Reflection::SpaceUsedLong(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  __int64 v5; // x8
  google::protobuf::UnknownFieldSet *v6; // x0
  __int64 v7; // x21
  __int64 v8; // x8
  __int64 v9; // x26
  __int64 v10; // x24
  __int64 v11; // x23
  std::once_flag::_State_type *v12; // x0
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x25
  __int64 v16; // x8
  __int64 *v17; // x25
  __int64 v18; // t1
  std::once_flag::_State_type *v19; // x0
  int v20; // w8
  unsigned __int64 v21; // x24
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x24
  __int64 v29; // x23
  int *v30; // x8
  __int64 v31; // x25
  int v32; // w24
  unsigned int v33; // w0
  __int64 v34; // x23
  __int64 v35; // x24
  int *v36; // x8
  __int64 v37; // x25
  __int64 v39; // [xsp+0h] [xbp-80h]
  __int64 v40; // [xsp+8h] [xbp-78h] BYREF
  void (__fastcall *v41)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-70h] BYREF
  void (__fastcall ***v42)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-68h] BYREF
  void (__fastcall **v43)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-60h] BYREF
  __int64 *v44; // [xsp+28h] [xbp-58h]

  v4 = *(unsigned int *)(a1 + 48);
  v5 = *(_QWORD *)(a2 + *(unsigned int *)(a1 + 36));
  if ( (v5 & 1) != 0 )
    v6 = (google::protobuf::UnknownFieldSet *)((v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  else
    v6 = (google::protobuf::UnknownFieldSet *)google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)a1);
  v7 = google::protobuf::UnknownFieldSet::SpaceUsedExcludingSelfLong(v6) + v4;
  v8 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v8 != -1 )
    v7 += google::protobuf::internal::ExtensionSet::SpaceUsedExcludingSelfLong((google::protobuf::internal::ExtensionSet *)(a2 + v8));
  if ( (*(_DWORD *)(a1 + 72) & 0x80000000) == 0 )
  {
    v9 = 0LL;
    v39 = a2 + 4;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
      v11 = v10 + 152 * v9;
      if ( *(_DWORD *)(v11 + 60) == 3 )
      {
        v12 = *(std::once_flag::_State_type **)(v10 + 152 * v9 + 48);
        if ( v12 )
        {
          v40 = v10 + 152 * v9;
          v41 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
          {
            v43 = &v41;
            v44 = &v40;
            v42 = &v43;
            std::__call_once(v12, &v42, (void (__cdecl *)(void *))sub_10007A460);
          }
        }
        switch ( *(_DWORD *)(v10 + 152 * v9 + 56) )
        {
          case 1:
          case 3:
          case 4:
          case 6:
          case 0x10:
          case 0x12:
            v13 = *(unsigned int *)(v39 + (unsigned int)sub_1000DF774(a1 + 8, v10 + 152 * v9));
            v14 = 8 * v13;
            goto LABEL_28;
          case 2:
          case 5:
          case 7:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x11:
            v13 = *(unsigned int *)(v39 + (unsigned int)sub_1000DF774(a1 + 8, v10 + 152 * v9));
            v14 = 4 * v13;
LABEL_28:
            v23 = v14 + 8;
            goto LABEL_29;
          case 8:
            v13 = *(unsigned int *)(v39 + (unsigned int)sub_1000DF774(a1 + 8, v10 + 152 * v9));
            v23 = v13 + 8;
LABEL_29:
            if ( (int)v13 <= 0 )
              v24 = 0LL;
            else
              v24 = v23;
            v7 += v24;
            break;
          case 9:
          case 0xC:
            v28 = a2 + (unsigned int)sub_1000DF774(a1 + 8, v10 + 152 * v9);
            v29 = 8LL * *(int *)(v28 + 12);
            v30 = *(int **)(v28 + 16);
            if ( v30 )
            {
              if ( *v30 >= 1 )
              {
                v31 = 0LL;
                do
                {
                  v29 += google::protobuf::internal::StringSpaceUsedExcludingSelfLong(*(_QWORD *)&v30[2 * v31++ + 2])
                       + 24;
                  v30 = *(int **)(v28 + 16);
                }
                while ( v31 < *v30 );
              }
              v29 += 8LL;
            }
            v7 += v29;
            break;
          case 0xA:
          case 0xB:
            v32 = sub_1000BF2A4((google::protobuf::FieldDescriptor *)(v10 + 152 * v9));
            v33 = sub_1000DF774(a1 + 8, v11);
            v34 = a2 + v33;
            if ( v32 )
            {
              v27 = google::protobuf::internal::MapFieldBase::SpaceUsedExcludingSelfLong((google::protobuf::internal::MapFieldBase *)(a2 + v33));
              goto LABEL_47;
            }
            v35 = 8LL * *(int *)(v34 + 12);
            v36 = *(int **)(v34 + 16);
            if ( v36 )
            {
              if ( *v36 >= 1 )
              {
                v37 = 0LL;
                do
                {
                  v35 += (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v36[2 * v37 + 2] + 136LL))(*(_QWORD *)&v36[2 * v37 + 2]);
                  ++v37;
                  v36 = *(int **)(v34 + 16);
                }
                while ( v37 < *v36 );
              }
              v35 += 8LL;
            }
            v7 += v35;
            break;
          default:
            break;
        }
      }
      else
      {
        v15 = v10 + 152 * v9;
        v18 = *(_QWORD *)(v15 + 88);
        v17 = (__int64 *)(v15 + 88);
        v16 = v18;
        if ( !v18
          || *(_DWORD *)(v16 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v16 + 32) + 65LL)
          || *(_DWORD *)(a2
                       + *(_DWORD *)(a1 + 44)
                       - 1431655764
                       * (unsigned int)((unsigned __int64)(v16 - *(_QWORD *)(*(_QWORD *)(v16 + 16) + 48LL)) >> 4)) == *(_DWORD *)(v10 + 152 * v9 + 68) )
        {
          v19 = *(std::once_flag::_State_type **)(v10 + 152 * v9 + 48);
          if ( v19 )
          {
            v40 = v10 + 152 * v9;
            v41 = google::protobuf::FieldDescriptor::TypeOnceInit;
            if ( atomic_load_explicit((atomic_ullong *volatile)v19, memory_order_acquire) != -1LL )
            {
              v43 = &v41;
              v44 = &v40;
              v42 = &v43;
              std::__call_once(v19, &v42, (void (__cdecl *)(void *))sub_10007A460);
            }
          }
          v20 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[*(unsigned int *)(v10 + 152 * v9 + 56)];
          if ( v20 == 10 )
          {
            if ( *(_QWORD *)(a1 + 8) != a2 )
            {
              v26 = *(_QWORD *)(a2 + (unsigned int)sub_1000DF774(a1 + 8, v10 + 152 * v9));
              if ( v26 )
              {
                v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 136LL))(v26);
LABEL_47:
                v7 += v27;
              }
            }
          }
          else if ( v20 == 9 )
          {
            if ( (v21 = *(_QWORD *)(a2 + (unsigned int)sub_1000DF774(a1 + 8, v10 + 152 * v9)) & 0xFFFFFFFFFFFFFFFELL,
                  (v22 = *v17) != 0)
              && (*(_DWORD *)(v22 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v22 + 32) + 65LL))
              || v21 != (*(_QWORD *)sub_1000DFBD4(a1 + 8, v11) & 0xFFFFFFFFFFFFFFFELL) )
            {
              v7 += google::protobuf::internal::StringSpaceUsedExcludingSelfLong(v21) + 24;
            }
          }
        }
      }
    }
    while ( v9++ < *(int *)(a1 + 72) );
  }
  return v7;
}