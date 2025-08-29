__ZN6google8protobuf8internal12MapFieldBase20MutableRepeatedFieldEv
__int64 __fastcall google::protobuf::internal::MapFieldBase::MutableRepeatedField(atomic_uint *this)
{
  google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMap(this);
  this[22] = 1;
  return *((_QWORD *)this + 2);
}