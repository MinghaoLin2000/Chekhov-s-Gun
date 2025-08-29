__ZNK6google8protobuf15FieldDescriptor25PrintableNameForExtensionEv
__int64 __fastcall google::protobuf::FieldDescriptor::PrintableNameForExtension(
        google::protobuf::FieldDescriptor *this)
{
  std::once_flag::_State_type *v2; // x0
  __int64 v3; // x20
  char *v4; // x8
  google::protobuf::FieldDescriptor *v6; // [xsp+8h] [xbp-38h] BYREF
  void (__fastcall *v7)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+10h] [xbp-30h] BYREF
  _QWORD *v8; // [xsp+18h] [xbp-28h] BYREF
  _QWORD v9[2]; // [xsp+20h] [xbp-20h] BYREF

  if ( !*((_BYTE *)this + 67) || !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 72LL) )
    goto LABEL_9;
  v2 = (std::once_flag::_State_type *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    v6 = this;
    v7 = google::protobuf::FieldDescriptor::TypeOnceInit;
    if ( atomic_load_explicit((atomic_ullong *volatile)v2, memory_order_acquire) != -1LL )
    {
      v9[0] = &v7;
      v9[1] = &v6;
      v8 = v9;
      std::__call_once(v2, &v8, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  if ( *((_DWORD *)this + 14) == 11
    && *((_DWORD *)this + 15) == 1
    && (v3 = *((_QWORD *)this + 12), v3 == google::protobuf::FieldDescriptor::message_type(this)) )
  {
    v4 = (char *)(google::protobuf::FieldDescriptor::message_type(this) + 8);
  }
  else
  {
LABEL_9:
    v4 = (char *)this + 8;
  }
  return *(_QWORD *)v4;
}