__ZN6google8protobuf8internal10WireFormat22MessageSetItemByteSizeEPKNS0_15FieldDescriptorERKNS0_7MessageE
__int64 __fastcall google::protobuf::internal::WireFormat::MessageSetItemByteSize(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::FieldDescriptor *a2,
        const google::protobuf::Message *a3)
{
  __int64 v5; // x21
  google::protobuf::Reflection *v6; // x1
  __int64 Message; // x0
  __int64 v8; // x0

  (*(void (__fastcall **)(const google::protobuf::FieldDescriptor *))(*(_QWORD *)a2 + 152LL))(a2);
  v5 = ((9 * (__clz(*((_DWORD *)this + 17) | 1) ^ 0x1F) + 73) >> 6) + 4LL;
  Message = google::protobuf::Reflection::GetMessage(v6, a2, this, 0LL);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Message + 72LL))(Message);
  return v5 + v8 + ((9 * (__clz(v8 | 1) ^ 0x1F) + 73) >> 6);
}