__ZN6google8protobuf8internal13ReflectionOps5ClearEPNS0_7MessageE
void __fastcall google::protobuf::internal::ReflectionOps::Clear(
        google::protobuf::internal::ReflectionOps *this,
        google::protobuf::Message *a2)
{
  google::protobuf::Reflection *v3; // x20
  const google::protobuf::FieldDescriptor **v4; // x21
  const google::protobuf::FieldDescriptor **v5; // x22
  google::protobuf::UnknownFieldSet *v6; // x0
  void *__p; // [xsp+8h] [xbp-38h] BYREF
  const google::protobuf::FieldDescriptor **v8; // [xsp+10h] [xbp-30h]
  __int64 v9; // [xsp+18h] [xbp-28h]

  v3 = (google::protobuf::Reflection *)sub_1000ED454(this, a2);
  __p = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  google::protobuf::Reflection::ListFieldsOmitStripped((__int64)v3, this, (char **)&__p);
  v4 = (const google::protobuf::FieldDescriptor **)__p;
  v5 = v8;
  while ( v4 != v5 )
    google::protobuf::Reflection::ClearField(v3, this, *v4++);
  v6 = (google::protobuf::UnknownFieldSet *)google::protobuf::Reflection::MutableUnknownFields(v3, this);
  if ( *(_QWORD *)v6 != *((_QWORD *)v6 + 1) )
    google::protobuf::UnknownFieldSet::ClearFallback(v6);
  if ( __p )
  {
    v8 = (const google::protobuf::FieldDescriptor **)__p;
    operator delete(__p);
  }
}