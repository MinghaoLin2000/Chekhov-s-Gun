__ZNK6google8protobuf14EnumDescriptor17FindValueByNumberEi
__int64 __fastcall google::protobuf::EnumDescriptor::FindValueByNumber(
        google::protobuf::EnumDescriptor *this,
        unsigned int a2)
{
  __int64 v2; // x8
  _QWORD v4[2]; // [xsp+0h] [xbp-10h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 144LL) + 192LL;
  v4[0] = this;
  v4[1] = a2;
  return sub_100096954(v2, v4);
}