__ZNK6google8protobuf8internal12MapFieldBase16GetRepeatedFieldEv
__int64 __fastcall google::protobuf::internal::MapFieldBase::GetRepeatedField(
        google::protobuf::internal::MapFieldBase *this)
{
  google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMap(this);
  return *((_QWORD *)this + 2);
}