__ZN6google8protobuf8internal15DynamicMapField10MutableMapEv
__int64 __fastcall google::protobuf::internal::DynamicMapField::MutableMap(
        google::protobuf::internal::DynamicMapField *this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  *((_DWORD *)this + 22) = 0;
  return (__int64)this + 96;
}