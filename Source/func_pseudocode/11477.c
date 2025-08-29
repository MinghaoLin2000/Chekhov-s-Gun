__ZN6google8protobuf21DynamicMessageFactory29ConstructDefaultOneofInstanceEPKNS0_10DescriptorEPKjPv
void __fastcall google::protobuf::DynamicMessageFactory::ConstructDefaultOneofInstance(
        google::protobuf::DynamicMessageFactory *this,
        const google::protobuf::Descriptor *a2,
        const unsigned int *a3,
        void *a4)
{
  int v4; // w9
  __int64 v8; // x23
  __int64 v9; // x8
  __int64 v10; // x28
  __int64 v11; // x22
  __int64 v12; // x8
  _QWORD *v13; // x8
  __int64 v14; // x27
  std::once_flag::_State_type *v15; // x0
  unsigned int v16; // w8
  __int64 v17; // [xsp+8h] [xbp-78h] BYREF
  void (__fastcall *v18)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-70h] BYREF
  _QWORD *v19; // [xsp+18h] [xbp-68h] BYREF
  _QWORD v20[2]; // [xsp+20h] [xbp-60h] BYREF

  v4 = *((_DWORD *)this + 27);
  if ( v4 >= 1 )
  {
    v8 = 0LL;
    v9 = *((_QWORD *)this + 6);
    do
    {
      if ( (*(_DWORD *)(v9 + 48 * v8 + 24) != 1 || !*(_BYTE *)(**(_QWORD **)(v9 + 48 * v8 + 32) + 65LL))
        && *(int *)(v9 + 48 * v8 + 24) >= 1 )
      {
        v10 = 0LL;
        do
        {
          v11 = *(_QWORD *)(*(_QWORD *)(v9 + 48 * v8 + 32) + 8 * v10);
          if ( *(_BYTE *)(v11 + 67) )
          {
            v12 = *(_QWORD *)(v11 + 96);
            if ( v12 )
              v13 = (_QWORD *)(v12 + 80);
            else
              v13 = (_QWORD *)(*(_QWORD *)(v11 + 40) + 128LL);
          }
          else
          {
            v13 = (_QWORD *)(*(_QWORD *)(v11 + 80) + 40LL);
          }
          v14 = *((unsigned int *)a2 + (int)(678152731 * ((unsigned __int64)(v11 - *v13) >> 3)));
          v15 = *(std::once_flag::_State_type **)(v11 + 48);
          if ( v15 )
          {
            v17 = v11;
            v18 = google::protobuf::FieldDescriptor::TypeOnceInit;
            if ( atomic_load_explicit((atomic_ullong *volatile)v15, memory_order_acquire) != -1LL )
            {
              v20[0] = &v18;
              v20[1] = &v17;
              v19 = v20;
              std::__call_once(v15, &v19, (void (__cdecl *)(void *))sub_10007A460);
            }
          }
          switch ( *(_DWORD *)(v11 + 56) )
          {
            case 1:
              *(_QWORD *)((char *)a3 + v14) = *(_QWORD *)(v11 + 144);
              break;
            case 2:
              *(const unsigned int *)((char *)a3 + v14) = *(_DWORD *)(v11 + 144);
              break;
            case 3:
            case 4:
            case 6:
            case 0x10:
            case 0x12:
              goto LABEL_24;
            case 5:
            case 7:
            case 0xD:
            case 0xF:
            case 0x11:
              v16 = *(_DWORD *)(v11 + 144);
              goto LABEL_19;
            case 8:
              *((_BYTE *)a3 + v14) = *(_BYTE *)(v11 + 144);
              break;
            case 9:
            case 0xC:
              *(_QWORD *)((char *)a3 + v14) = 0LL;
LABEL_24:
              *(_QWORD *)((char *)a3 + v14) = *(_QWORD *)(v11 + 144);
              break;
            case 0xA:
            case 0xB:
              *(_QWORD *)((char *)a3 + v14) = 0LL;
              break;
            case 0xE:
              v16 = *(_DWORD *)(google::protobuf::FieldDescriptor::default_value_enum((google::protobuf::FieldDescriptor *)v11)
                              + 16);
LABEL_19:
              *(const unsigned int *)((char *)a3 + v14) = v16;
              break;
            default:
              break;
          }
          ++v10;
          v9 = *((_QWORD *)this + 6);
        }
        while ( v10 < *(int *)(v9 + 48 * v8 + 24) );
        v4 = *((_DWORD *)this + 27);
      }
      ++v8;
    }
    while ( v8 < v4 );
  }
}