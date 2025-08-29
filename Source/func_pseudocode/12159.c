__ZNK6google8protobuf10TextFormat21FastFieldValuePrinter14PrintFieldNameERKNS0_7MessageEPKNS0_10ReflectionEPKNS0_15FieldDescriptorEPNS1_17BaseTextGeneratorE
__int64 __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintFieldName(
        int a1,
        int a2,
        int a3,
        std::once_flag::_State_type **this,
        __int64 a5)
{
  __int64 v7; // x0
  int v8; // w9
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 (__fastcall *v11)(__int64, const char *, __int64); // x3
  std::once_flag::_State_type *v13; // x0
  std::once_flag::_State_type *v14; // x8
  int v15; // w10
  std::once_flag::_State_type v16; // x1
  std::once_flag::_State_type v17; // x2
  google::protobuf::FieldDescriptor *v18; // [xsp+8h] [xbp-38h] BYREF
  void (__fastcall *v19)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-30h] BYREF
  _QWORD *v20; // [xsp+18h] [xbp-28h] BYREF
  _QWORD v21[2]; // [xsp+20h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( *((_BYTE *)this + 67) )
  {
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a5 + 40LL))(a5, "[", 1LL);
    v7 = google::protobuf::FieldDescriptor::PrintableNameForExtension((google::protobuf::FieldDescriptor *)this);
    v8 = *(char *)(v7 + 23);
    if ( v8 >= 0 )
      v9 = v7;
    else
      v9 = *(_QWORD *)v7;
    if ( v8 >= 0 )
      v10 = *(unsigned __int8 *)(v7 + 23);
    else
      v10 = *(_QWORD *)(v7 + 8);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a5 + 40LL))(a5, v9, v10);
    v11 = *(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a5 + 40LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v11(a5, "]", 1LL);
  }
  else
  {
    v13 = this[6];
    if ( v13 )
    {
      v18 = (google::protobuf::FieldDescriptor *)this;
      v19 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v13, memory_order_acquire) != -1LL )
      {
        v21[0] = &v19;
        v21[1] = &v18;
        v20 = v21;
        std::__call_once(v13, &v20, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    if ( *((_DWORD *)this + 14) == 10 )
      v14 = *(std::once_flag::_State_type **)google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)this);
    else
      v14 = *this;
    v15 = *((char *)v14 + 23);
    if ( v15 >= 0 )
      v16 = (std::once_flag::_State_type)v14;
    else
      v16 = *v14;
    if ( v15 >= 0 )
      v17 = *((unsigned __int8 *)v14 + 23);
    else
      v17 = v14[1];
    return (*(__int64 (__fastcall **)(__int64, std::once_flag::_State_type, std::once_flag::_State_type))(*(_QWORD *)a5 + 40LL))(
             a5,
             v16,
             v17);
  }
}