__ZNK6google8protobuf8internal12MapFieldBase20IsRepeatedFieldValidEv
bool __fastcall google::protobuf::internal::MapFieldBase::IsRepeatedFieldValid(atomic_uint *this)
{
  return atomic_load_explicit(this + 22, memory_order_acquire) != 0;
}