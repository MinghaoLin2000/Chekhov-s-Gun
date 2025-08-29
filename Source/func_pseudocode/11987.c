__ZN6google8protobuf8internal11GenericSwapEPNS0_7MessageES3_
unsigned int *__fastcall google::protobuf::internal::GenericSwap(
        google::protobuf::internal *this,
        google::protobuf::Message *a2,
        google::protobuf::Message *a3)
{
  __int64 v5; // x8
  _QWORD *v6; // x20
  __int64 v7; // x0
  google::protobuf::Message *v8; // x21
  __int64 v9; // x20
  unsigned int *v10; // x1
  unsigned int *result; // x0
  __int64 (__fastcall *v12)(__int64); // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = *((_QWORD *)a2 + 1);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v5 & 1) != 0 )
    v6 = (_QWORD *)*v6;
  v7 = (*(__int64 (__fastcall **)(google::protobuf::Message *, _QWORD *, google::protobuf::Message *))(*(_QWORD *)a2 + 32LL))(
         a2,
         v6,
         a3);
  v8 = (google::protobuf::Message *)v7;
  if ( v6 )
    v9 = 0LL;
  else
    v9 = v7;
  (*(void (__fastcall **)(__int64, google::protobuf::internal *))(*(_QWORD *)v7 + 64LL))(v7, this);
  (*(void (__fastcall **)(google::protobuf::internal *))(*(_QWORD *)this + 40LL))(this);
  (*(void (__fastcall **)(google::protobuf::internal *, google::protobuf::Message *))(*(_QWORD *)this + 64LL))(this, a2);
  (*(void (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)a2 + 152LL))(a2);
  result = google::protobuf::Reflection::Swap(v10, v8, a2);
  if ( v9 )
  {
    v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (unsigned int *)v12(v9);
  }
  return result;
}