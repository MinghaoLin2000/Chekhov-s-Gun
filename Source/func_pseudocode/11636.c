__ZN6google8protobuf8internal15DynamicMapField9MergeFromERKNS1_12MapFieldBaseE
__int64 __fastcall google::protobuf::internal::DynamicMapField::MergeFrom(
        google::protobuf::internal::DynamicMapField *this,
        const google::protobuf::internal::MapFieldBase *a2)
{
  __int64 result; // x0
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x10
  __int64 v7; // x20
  __int64 v8; // x11
  __int64 v9; // x1
  __int64 v10; // x22
  google::protobuf::Descriptor *v11; // x0
  __int64 v12; // x23
  std::once_flag::_State_type *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x22
  __int64 v22; // x0
  __int64 v23; // [xsp+0h] [xbp-A0h] BYREF
  char *v24; // [xsp+8h] [xbp-98h]
  unsigned __int64 v25; // [xsp+10h] [xbp-90h]
  _QWORD v26[4]; // [xsp+18h] [xbp-88h] BYREF
  __int64 v27; // [xsp+38h] [xbp-68h] BYREF
  void (__fastcall *v28)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-60h] BYREF
  _QWORD *v29; // [xsp+48h] [xbp-58h] BYREF

  result = (*(__int64 (__fastcall **)(google::protobuf::internal::DynamicMapField *))(*(_QWORD *)this + 168LL))(this);
  v5 = *((_QWORD *)a2 + 15);
  v6 = *((_QWORD *)a2 + 13);
  if ( v6 > v5 )
  {
    v7 = result;
    v8 = *((_QWORD *)a2 + 16);
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 8 * v5);
      if ( v9 )
        break;
      if ( v6 == ++v5 )
        return result;
    }
    if ( v9 == *(_QWORD *)(v8 + 8 * (v5 ^ 1)) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)v9 + 40LL);
      v23 = v9;
      v24 = (char *)a2 + 96;
      v25 = v5;
      if ( !v9 )
        return result;
    }
    else
    {
      v23 = *(_QWORD *)(v8 + 8 * v5);
      v24 = (char *)a2 + 96;
      v25 = v5;
    }
    do
    {
      sub_1000D15A4(v26, v7, v9, 0LL);
      if ( v26[0] )
      {
        v10 = v26[0] + 32LL;
      }
      else
      {
        sub_1000D23CC(v26, (char *)this + 96, v23);
        v10 = v26[0] + 32LL;
        google::protobuf::internal::DynamicMapField::AllocateMapValue((__int64)this, v26[0] + 32LL);
      }
      v11 = (google::protobuf::Descriptor *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 152LL))(*((_QWORD *)this + 18));
      v12 = google::protobuf::Descriptor::map_value(v11);
      v13 = *(std::once_flag::_State_type **)(v12 + 48);
      if ( v13 )
      {
        v27 = v12;
        v28 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v13, memory_order_acquire) != -1LL )
        {
          v26[0] = &v28;
          v26[1] = &v27;
          v29 = v26;
          std::__call_once(v13, &v29, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      switch ( *(_DWORD *)(v12 + 56) )
      {
        case 1:
          sub_1000CE9C4(v23 + 32);
          sub_1000CE8BC(v10);
          break;
        case 2:
          sub_1000CE7C0(v23 + 32);
          sub_1000CE6B8(v10);
          break;
        case 3:
        case 0x10:
        case 0x12:
          v15 = sub_1000CE1C4(v23 + 32);
          sub_1000CE0C4(v10, v15);
          break;
        case 4:
        case 6:
          v17 = sub_1000CE5BC(v23 + 32);
          sub_1000CE4BC(v10, v17);
          break;
        case 5:
        case 0xF:
        case 0x11:
          v14 = sub_1000CDFC8(v23 + 32);
          sub_1000CDEC8(v10, v14);
          break;
        case 7:
        case 0xD:
          v16 = sub_1000CE3C0(v23 + 32);
          sub_1000CE2C0(v10, v16);
          break;
        case 8:
          v18 = sub_1000CEBC0(v23 + 32);
          sub_1000CEAC0(v10, v18);
          break;
        case 9:
        case 0xC:
          v20 = sub_1000CEDC0(v23 + 32);
          sub_1000CECBC(v10, v20);
          break;
        case 0xA:
        case 0xB:
          v21 = sub_1000CF0B4(v10);
          v22 = sub_1000CF1AC(v23 + 32);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 112LL))(v21, v22);
          break;
        case 0xE:
          v19 = sub_1000CEFB8(v23 + 32);
          sub_1000CEEB8(v10, v19);
          break;
        default:
          break;
      }
      result = sub_1000D1430(&v23);
      v9 = v23;
    }
    while ( v23 );
  }
  return result;
}