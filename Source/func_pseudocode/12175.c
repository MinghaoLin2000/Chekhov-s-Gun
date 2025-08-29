__ZN6google8protobuf8internal21MapFieldPrinterHelper7CopyKeyERKNS0_6MapKeyEPNS0_7MessageEPKNS0_15FieldDescriptorE
void __fastcall google::protobuf::internal::MapFieldPrinterHelper::CopyKey(
        __int64 a1,
        google::protobuf::Message *a2,
        __int64 a3)
{
  google::protobuf::Reflection *v6; // x1
  google::protobuf::Reflection *v7; // x21
  std::once_flag::_State_type *v8; // x0
  google::protobuf::internal::LogMessage *v9; // x0
  unsigned int v10; // w0
  unsigned __int64 v11; // x0
  int v12; // w0
  __int64 v13; // x0
  char v14; // w0
  __int64 v15; // x0
  __int128 v16; // q0
  void *__p[2]; // [xsp+0h] [xbp-80h] BYREF
  __int64 v18; // [xsp+10h] [xbp-70h]
  _QWORD v19[6]; // [xsp+18h] [xbp-68h] BYREF
  __int64 v20; // [xsp+48h] [xbp-38h] BYREF
  void (__fastcall *v21)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+50h] [xbp-30h] BYREF
  _QWORD *v22; // [xsp+58h] [xbp-28h] BYREF

  (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
  v7 = v6;
  v8 = *(std::once_flag::_State_type **)(a3 + 48);
  if ( v8 )
  {
    v20 = a3;
    v21 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v8, memory_order_acquire) != -1LL )
    {
      v19[0] = &v21;
      v19[1] = &v20;
      v22 = v19;
      std::__call_once(v8, &v22, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  switch ( *(_DWORD *)(a3 + 56) )
  {
    case 1:
    case 2:
    case 0xA:
    case 0xB:
    case 0xE:
      google::protobuf::internal::LogMessage::LogMessage(
        v19,
        2LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/text_format.cc",
        2186LL);
      v9 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                       v19,
                                                       "Not supported.");
      google::protobuf::internal::LogFinisher::operator=((int)&v22, v9);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v19);
      break;
    case 3:
    case 0x10:
    case 0x12:
      v13 = sub_1000CFAE8(a1);
      google::protobuf::Reflection::SetInt64(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v13);
      break;
    case 4:
    case 6:
      v11 = sub_1000CFCD8(a1);
      google::protobuf::Reflection::SetUInt64(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v11);
      break;
    case 5:
    case 0xF:
    case 0x11:
      v12 = sub_1000CFBE0(a1);
      google::protobuf::Reflection::SetInt32(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v12);
      break;
    case 7:
    case 0xD:
      v10 = sub_1000CFDD0(a1);
      google::protobuf::Reflection::SetUInt32(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v10);
      break;
    case 8:
      v14 = sub_1000CFEC8(a1);
      google::protobuf::Reflection::SetBool(v7, a2, (const google::protobuf::FieldDescriptor *)a3, v14);
      break;
    case 9:
    case 0xC:
      v15 = sub_1000CF9F0(a1);
      if ( *(char *)(v15 + 23) < 0 )
      {
        sub_10007A474(__p, *(void **)v15);
      }
      else
      {
        v16 = *(_OWORD *)v15;
        v18 = *(_QWORD *)(v15 + 16);
        *(_OWORD *)__p = v16;
      }
      google::protobuf::Reflection::SetString(
        (unsigned int *)v7,
        a2,
        (google::protobuf::FieldDescriptor *)a3,
        (__int64 *)__p);
      if ( SHIBYTE(v18) < 0 )
        operator delete(__p[0]);
      break;
    default:
      return;
  }
}