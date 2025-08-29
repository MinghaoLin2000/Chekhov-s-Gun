__ZNK6google8protobuf8internal15DynamicMapField6GetMapEv
__int64 __fastcall google::protobuf::internal::DynamicMapField::GetMap(
        google::protobuf::internal::DynamicMapField *this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return (__int64)this + 96;
}