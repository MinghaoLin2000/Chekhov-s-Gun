__ZN6google8protobuf6Struct9MergeFromERKS1_
__int64 __fastcall google::protobuf::Struct::MergeFrom(
        google::protobuf::Struct *this,
        const google::protobuf::Struct *a2)
{
  __int64 v4; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    sub_10003A25C((char *)this + 8, (v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return sub_1001100CC((char *)this + 16, (char *)a2 + 16);
}