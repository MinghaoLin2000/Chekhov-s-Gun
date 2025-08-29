__ZN6google8protobuf15UnknownFieldSet14ParseFromArrayEPKvi
__int64 __fastcall google::protobuf::UnknownFieldSet::ParseFromArray(
        google::protobuf::UnknownFieldSet *this,
        const void *a2,
        int a3)
{
  _BYTE v5[32]; // [xsp+0h] [xbp-30h] BYREF

  google::protobuf::io::ArrayInputStream::ArrayInputStream((google::protobuf::io::ArrayInputStream *)v5, a2, a3, -1);
  return google::protobuf::UnknownFieldSet::ParseFromZeroCopyStream(this, (__int64)v5);
}