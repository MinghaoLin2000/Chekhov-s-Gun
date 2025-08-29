__ZN6google8protobuf8internal20RepeatedPtrFieldBase7ReserveEi
google::protobuf::internal::RepeatedPtrFieldBase *__fastcall google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
        google::protobuf::internal::RepeatedPtrFieldBase *this,
        int a2)
{
  int v2; // w8
  bool v3; // vf
  int v4; // w1

  v2 = *((_DWORD *)this + 2);
  v3 = __OFSUB__(a2, v2);
  v4 = a2 - v2;
  if ( !((v4 < 0) ^ v3 | (v4 == 0)) )
    return (google::protobuf::internal::RepeatedPtrFieldBase *)google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
                                                                 this,
                                                                 v4);
  return this;
}