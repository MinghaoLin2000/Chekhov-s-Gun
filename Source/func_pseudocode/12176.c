__ZN6google8protobuf8internal21MapFieldPrinterHelper9CopyValueERKNS0_11MapValueRefEPNS0_7MessageEPKNS0_15FieldDescriptorE
void __fastcall google::protobuf::internal::MapFieldPrinterHelper::CopyValue(
        __int64 a1,
        google::protobuf::Message *a2,
        __int64 a3)
{
  google::protobuf::Reflection *v6; // x1
  google::protobuf::Reflection *v7; // x21
  std::once_flag::_State_type *v8; // x0
  int v9; // w0
  __int64 v10; // x0
  unsigned int v11; // w0
  unsigned __int64 v12; // x0
  double v13; // d0
  float v14; // s0
  char v15; // w0
  signed int v16; // w0
  __int64 v17; // x0
  google::protobuf::Message *v18; // x23
  __int64 v19; // x0
  __int64 v20; // x0
  __int128 v21; // q0
  void *__p[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v23; // [xsp+10h] [xbp-60h]
  __int64 v24; // [xsp+18h] [xbp-58h] BYREF
  void (__fastcall *v25)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+20h] [xbp-50h] BYREF
  _QWORD *v26; // [xsp+28h] [xbp-48h] BYREF
  _QWORD v27[2]; // [xsp+30h] [xbp-40h] BYREF

  (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
  v7 = v6;
  v8 = *(std::once_flag::_State_type **)(a3 + 48);
  if ( v8 )
  {
    v24 = a3;
    v25 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
    {
      v27[0] = &v25;
      v27[1] = &v24;
      v26 = v27;
      std::__call_once(v8, &v26, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  switch ( *(_DWORD *)(a3 + 56) )
  {
    case 1:
      sub_1000CE9C4(a1);
      google::protobuf::Reflection::SetDouble(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v13);
      break;
    case 2:
      sub_1000CE7C0(a1);
      google::protobuf::Reflection::SetFloat(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v14);
      break;
    case 3:
    case 0x10:
    case 0x12:
      v10 = sub_1000CE1C4(a1);
      google::protobuf::Reflection::SetInt64(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v10);
      break;
    case 4:
    case 6:
      v12 = sub_1000CE5BC(a1);
      google::protobuf::Reflection::SetUInt64(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v12);
      break;
    case 5:
    case 0xF:
    case 0x11:
      v9 = sub_1000CDFC8(a1);
      google::protobuf::Reflection::SetInt32(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v9);
      break;
    case 7:
    case 0xD:
      v11 = sub_1000CE3C0(a1);
      google::protobuf::Reflection::SetUInt32(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v11);
      break;
    case 8:
      v15 = sub_1000CEBC0(a1);
      google::protobuf::Reflection::SetBool(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v15);
      break;
    case 9:
    case 0xC:
      v20 = sub_1000CEDC0(a1);
      if ( *(char *)(v20 + 23) < 0 )
      {
        sub_10007A474(__p, *(void **)v20);
      }
      else
      {
        v21 = *(_OWORD *)v20;
        v23 = *(_QWORD *)(v20 + 16);
        *(_OWORD *)__p = v21;
      }
      google::protobuf::Reflection::SetString(
        (unsigned int *)v7,
        a2,
        (google::protobuf::FieldDescriptor *)a3,
        (__int64 *)__p);
      if ( SHIBYTE(v23) < 0 )
        operator delete(__p[0]);
      break;
    case 0xA:
    case 0xB:
      v17 = sub_1000CF1AC(a1);
      v18 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
      v19 = sub_1000CF1AC(a1);
      (*(void (__fastcall **)(google::protobuf::Message *, __int64))(*(_QWORD *)v18 + 112LL))(v18, v19);
      google::protobuf::Reflection::SetAllocatedMessage(v7, a2, v18, (const google::protobuf::FieldDescriptor *)a3);
      break;
    case 0xE:
      v16 = sub_1000CEFB8(a1);
      google::protobuf::Reflection::SetEnumValue(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v16);
      break;
    default:
      return;
  }
}