__ZNK6google8protobuf10Reflection19SetAllocatedMessageEPNS0_7MessageES3_PKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::Reflection::SetAllocatedMessage(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        google::protobuf::Message *a3,
        const google::protobuf::FieldDescriptor *a4)
{
  __int64 v8; // x9
  unsigned __int64 *v9; // x8
  unsigned __int64 v10; // x11
  __int64 v11; // x10
  unsigned __int64 *v12; // x0
  unsigned __int64 v13; // x12
  __int64 (*v14)(void); // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a3 )
  {
    v8 = *((_QWORD *)a3 + 1);
    v9 = (unsigned __int64 *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v8 & 1) != 0 )
      v10 = *v9;
    v11 = *((_QWORD *)a2 + 1);
    v12 = (unsigned __int64 *)(v11 & 0xFFFFFFFFFFFFFFFELL);
    v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v11 & 1) != 0 )
      v13 = *v12;
    if ( v10 != v13 )
    {
      if ( (v8 & 1) != 0 )
      {
        if ( *v9 )
          goto LABEL_9;
      }
      else if ( v9 )
      {
LABEL_9:
        v14 = *(__int64 (**)(void))(*(_QWORD *)google::protobuf::Reflection::MutableMessage(this, a2, a4, 0LL) + 112LL);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return v14();
      }
      if ( (v11 & 1) != 0 )
      {
        v12 = (unsigned __int64 *)*v12;
        if ( !v12 )
          goto LABEL_9;
      }
      else if ( !v12 )
      {
        goto LABEL_9;
      }
      sub_1000D3344(v12, a3);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::Reflection::UnsafeArenaSetAllocatedMessage(this, a2, a3, a4);
}