__ZNK6google8protobuf10Reflection14ReleaseMessageEPNS0_7MessageEPKNS0_15FieldDescriptorEPNS0_14MessageFactoryE
__int64 __fastcall google::protobuf::Reflection::ReleaseMessage(
        google::protobuf::Reflection *this,
        google::protobuf::Message *a2,
        const google::protobuf::FieldDescriptor *a3,
        google::protobuf::MessageFactory *a4)
{
  __int64 v6; // x0
  __int64 v7; // x19
  __int64 v8; // x9
  _QWORD *v9; // x8
  bool v10; // zf
  __int64 v11; // x20

  v6 = google::protobuf::Reflection::UnsafeArenaReleaseMessage(this, a2, a3, a4);
  v7 = v6;
  v8 = *(_QWORD *)((char *)a2 + *((unsigned int *)this + 9));
  v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v8 & 1) != 0 )
    v9 = (_QWORD *)*v9;
  if ( v9 )
    v10 = v6 == 0;
  else
    v10 = 1;
  if ( !v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 112LL))(v11, v7);
    return v11;
  }
  return v7;
}