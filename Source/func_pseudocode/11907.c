__ZNK6google8protobuf7Message25InitializationErrorStringEv
__int64 __fastcall google::protobuf::Message::InitializationErrorString(google::protobuf::Message *this)
{
  _QWORD v2[3]; // [xsp+0h] [xbp-40h] BYREF
  _QWORD *v3; // [xsp+18h] [xbp-28h] BYREF

  memset(v2, 0, sizeof(v2));
  google::protobuf::Message::FindInitializationErrors((__int64)this, (__int64)v2);
  sub_100097A98((int)v2, ", ");
  v3 = v2;
  return sub_10009857C(&v3);
}