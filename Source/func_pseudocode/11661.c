__ZNK6google8protobuf10Reflection10ClearFieldEPNS0_7MessageEPKNS0_15FieldDescriptorE
void __fastcall google::protobuf::Reflection::ClearField(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3)
{
  google::protobuf::internal::ExtensionSet *v6; // x0
  int v7; // w1
  char *v8; // x21
  std::once_flag::_State_type *v9; // x0
  __int64 v10; // x2
  unsigned int v11; // w0
  std::once_flag::_State_type *v12; // x0
  int v13; // w22
  unsigned int v14; // w0
  int v15; // w22
  char *v16; // x0
  __int64 v17; // x22
  __int64 v18; // d8
  int v19; // s8
  char v20; // w22
  unsigned __int64 v21; // x23
  char *v22; // x0
  __int64 v23; // x8
  _QWORD *v24; // x3
  unsigned int v25; // w0
  __int64 v26; // x9
  _QWORD *v27; // x8
  __int64 v28; // x0
  const google::protobuf::FieldDescriptor *v29; // [xsp+8h] [xbp-68h] BYREF
  void (__fastcall *v30)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-60h] BYREF
  void (__fastcall ***v31)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+18h] [xbp-58h] BYREF
  void (__fastcall **v32)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-50h] BYREF
  const google::protobuf::FieldDescriptor **v33; // [xsp+28h] [xbp-48h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  if ( *((_QWORD *)a3 + 10) != *(_QWORD *)this )
    sub_1000D8734();
  if ( *((_BYTE *)a3 + 67) )
  {
    v6 = (google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10));
    v7 = *((_DWORD *)a3 + 17);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    google::protobuf::internal::ExtensionSet::ClearExtension(v6, v7);
  }
  else
  {
    v8 = (char *)this + 8;
    if ( *((_DWORD *)a3 + 15) == 3 )
    {
      v9 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
      if ( v9 )
      {
        v29 = a3;
        v30 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v9, memory_order_acquire) != -1LL )
        {
          v32 = &v30;
          v33 = &v29;
          v31 = &v32;
          std::__call_once(v9, &v31, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      switch ( *((_DWORD *)a3 + 14) )
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
          *(_DWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3)) = 0;
          break;
        case 9:
        case 0xC:
          v14 = sub_1000DF774((char *)this + 8, a3);
          sub_1000B8898((char *)a2 + v14);
          break;
        case 0xA:
        case 0xB:
          v15 = sub_1000BF2A4(a3);
          v16 = (char *)a2 + (unsigned int)sub_1000DF774(v8, a3);
          if ( v15 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 96LL))(v16);
          else
            sub_1000D8D60(v16);
          break;
        default:
          return;
      }
    }
    else
    {
      v10 = *((_QWORD *)a3 + 11);
      if ( !v10 || *(_DWORD *)(v10 + 24) == 1 && *(_BYTE *)(**(_QWORD **)(v10 + 32) + 65LL) )
      {
        if ( (unsigned int)sub_1000D8808(this, a2, a3) )
        {
          v11 = sub_1000D8CF8((char *)this + 8, a3);
          if ( v11 != -1 )
            *(_DWORD *)((char *)a2 + 4 * (v11 >> 5) + *((unsigned int *)this + 8)) &= ~(1 << v11);
          v12 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
          if ( v12 )
          {
            v29 = a3;
            v30 = google::protobuf::FieldDescriptor::TypeOnceInit;
            if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
            {
              v32 = &v30;
              v33 = &v29;
              v31 = &v32;
              std::__call_once(v12, &v31, (void (__cdecl *)(void *))sub_10007A460);
            }
          }
          switch ( *((_DWORD *)a3 + 14) )
          {
            case 1:
              v18 = *((_QWORD *)a3 + 18);
              *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3)) = v18;
              return;
            case 2:
              v19 = *((_DWORD *)a3 + 36);
              *(_DWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3)) = v19;
              return;
            case 3:
            case 4:
            case 6:
            case 0x10:
            case 0x12:
              v17 = *((_QWORD *)a3 + 18);
              *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774(v8, a3)) = v17;
              return;
            case 5:
            case 7:
            case 0xD:
            case 0xF:
            case 0x11:
              v13 = *((_DWORD *)a3 + 36);
              goto LABEL_37;
            case 8:
              v20 = *((_BYTE *)a3 + 144);
              *((_BYTE *)a2 + (unsigned int)sub_1000DF774(v8, a3)) = v20;
              return;
            case 9:
            case 0xC:
              v21 = *(_QWORD *)sub_1000DFBD4((char *)this + 8, a3) & 0xFFFFFFFFFFFFFFFELL;
              v22 = (char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3);
              v23 = *(_QWORD *)((char *)a2 + *((unsigned int *)this + 9));
              v24 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v23 & 1) != 0 )
                v24 = (_QWORD *)*v24;
              google::protobuf::internal::ArenaStringPtr::SetAllocated(v22, v21, 0LL, v24);
              return;
            case 0xA:
            case 0xB:
              if ( (unsigned int)sub_1000D8CF8((char *)this + 8, a3) != -1 )
              {
                v25 = sub_1000DF774((char *)this + 8, a3);
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)((char *)a2 + v25) + 40LL))(*(_QWORD *)((char *)a2 + v25));
                return;
              }
              v26 = *(_QWORD *)((char *)a2 + *((unsigned int *)this + 9));
              v27 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFELL);
              if ( (v26 & 1) != 0 )
              {
                if ( *v27 )
                  goto LABEL_47;
              }
              else if ( v27 )
              {
                goto LABEL_47;
              }
              v28 = *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3));
              if ( v28 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
LABEL_47:
              *(_QWORD *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3)) = 0LL;
              break;
            case 0xE:
              v13 = *(_DWORD *)(google::protobuf::FieldDescriptor::default_value_enum(a3) + 16);
LABEL_37:
              *(_DWORD *)((char *)a2 + (unsigned int)sub_1000DF774(v8, a3)) = v13;
              return;
            default:
              return;
          }
        }
      }
      else if ( *(_DWORD *)((char *)a2
                          + *((_DWORD *)this + 11)
                          - 1431655764
                          * (unsigned int)((unsigned __int64)(v10 - *(_QWORD *)(*(_QWORD *)(v10 + 16) + 48LL)) >> 4)) == *((_DWORD *)a3 + 17) )
      {
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        google::protobuf::Reflection::ClearOneof(this, a2, (const google::protobuf::OneofDescriptor *)v10);
      }
    }
  }
}