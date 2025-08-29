__ZN6google8protobuf11MessageLite14ParseFromArrayEPKvi
__int64 __fastcall google::protobuf::MessageLite::ParseFromArray(
        google::protobuf::MessageLite *this,
        const void *a2,
        int a3)
{
  __int64 v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = a3;
  (*(void (__fastcall **)(google::protobuf::MessageLite *))(*(_QWORD *)this + 40LL))(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return google::protobuf::internal::MergeFromImpl<false>(a2, v5, this, 1LL);
}