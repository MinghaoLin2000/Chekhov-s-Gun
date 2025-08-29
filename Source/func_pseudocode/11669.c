__ZNK6google8protobuf10Reflection9FieldSizeERKNS0_7MessageEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::Reflection::FieldSize(
        google::protobuf::Reflection *this,
        const google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3)
{
  __int64 v6; // x0
  google::protobuf::internal::ExtensionSet *v7; // x0
  int v8; // w1
  __int64 result; // x0
  std::once_flag::_State_type *v10; // x0
  int v11; // w22
  unsigned int *v12; // x19
  google::protobuf::internal::LogMessage *v13; // x0
  _QWORD v14[6]; // [xsp+8h] [xbp-68h] BYREF
  const google::protobuf::FieldDescriptor *v15; // [xsp+38h] [xbp-38h] BYREF
  void (__fastcall *v16)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-30h] BYREF
  _QWORD *v17; // [xsp+48h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v6 = *(_QWORD *)this;
  if ( *((_QWORD *)a3 + 10) != v6 )
    sub_1000D8734(v6, a3, "FieldSize", "Field does not match message type.");
  if ( *((_DWORD *)a3 + 15) != 3 )
    sub_1000D8734(*(_QWORD *)this, a3, "FieldSize", "Field is singular; the method requires a repeated field.");
  if ( *((_BYTE *)a3 + 67) )
  {
    v7 = (const google::protobuf::Message *)((char *)a2 + *((unsigned int *)this + 10));
    v8 = *((_DWORD *)a3 + 17);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (__int64)google::protobuf::internal::ExtensionSet::ExtensionSize(v7, v8);
  }
  else
  {
    v10 = (std::once_flag::_State_type *)*((_QWORD *)a3 + 6);
    if ( v10 )
    {
      v16 = google::protobuf::FieldDescriptor::TypeOnceInit;
      v15 = a3;
      if ( atomic_load_explicit((atomic_ullong *volatile)v10, memory_order_acquire) != -1LL )
      {
        v14[0] = &v16;
        v14[1] = &v15;
        v17 = v14;
        std::__call_once(v10, &v17, (void (__cdecl *)(void *))sub_10007A460);
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
        result = *(unsigned int *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3));
        break;
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
        v11 = sub_1000BF2A4(a3);
        v12 = (unsigned int *)((char *)a2 + (unsigned int)sub_1000DF774((char *)this + 8, a3));
        if ( v11 )
        {
          if ( google::protobuf::internal::MapFieldBase::IsRepeatedFieldValid((atomic_uint *)v12) )
            result = *(unsigned int *)(google::protobuf::internal::MapFieldBase::GetRepeatedField((google::protobuf::internal::MapFieldBase *)v12)
                                     + 8);
          else
            result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v12 + 88LL))(v12);
        }
        else
        {
          result = v12[2];
        }
        break;
      default:
        google::protobuf::internal::LogMessage::LogMessage(
          v14,
          3LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/generated_message_reflection.cc",
          783LL);
        v13 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                          v14,
                                                          "Can't get here.");
        google::protobuf::internal::LogFinisher::operator=((int)&v17, v13);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v14);
        result = 0LL;
        break;
    }
  }
  return result;
}