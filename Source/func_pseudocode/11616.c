__ZNK6google8protobuf8internal12MapFieldBase10IsMapValidEv
bool __fastcall google::protobuf::internal::MapFieldBase::IsMapValid(atomic_uint *this)
{
  return atomic_load_explicit(this + 22, memory_order_acquire) != 1;
}