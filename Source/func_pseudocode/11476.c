__ZN6google8protobuf21DynamicMessageFactory12GetPrototypeEPKNS0_10DescriptorE
_QWORD *__fastcall google::protobuf::DynamicMessageFactory::GetPrototype(
        google::protobuf::DynamicMessageFactory *this,
        const google::protobuf::Descriptor *a2)
{
  std::mutex *v4; // x19
  _QWORD *PrototypeNoLock; // x20

  v4 = (std::mutex *)((char *)this + 32);
  std::mutex::lock((std::mutex *)((char *)this + 32));
  PrototypeNoLock = google::protobuf::DynamicMessageFactory::GetPrototypeNoLock(this, a2);
  std::mutex::unlock(v4);
  return PrototypeNoLock;
}