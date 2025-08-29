__ZNK6google8protobuf8internal12MapFieldBase26SpaceUsedExcludingSelfLongEv
__int64 __fastcall google::protobuf::internal::MapFieldBase::SpaceUsedExcludingSelfLong(
        google::protobuf::internal::MapFieldBase *this)
{
  std::mutex *v2; // x20
  __int64 v3; // x19

  v2 = (std::mutex *)((char *)this + 24);
  std::mutex::lock((std::mutex *)((char *)this + 24));
  v3 = (*(__int64 (__fastcall **)(google::protobuf::internal::MapFieldBase *))(*(_QWORD *)this + 104LL))(this);
  std::mutex::unlock(v2);
  return v3;
}