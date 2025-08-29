__ZNK6google8protobuf10Reflection26FindKnownExtensionByNumberEi
__int64 __fastcall google::protobuf::Reflection::FindKnownExtensionByNumber(std::mutex ***this, unsigned int a2)
{
  if ( *((_DWORD *)this + 10) == -1 )
    return 0LL;
  else
    return google::protobuf::DescriptorPool::FindExtensionByNumber(
             this[7],
             (const google::protobuf::Descriptor *)*this,
             a2);
}