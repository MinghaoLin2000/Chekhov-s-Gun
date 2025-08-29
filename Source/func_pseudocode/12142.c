__ZNK6google8protobuf10TextFormat6Finder21FindExtensionByNumberEPKNS0_10DescriptorEi
__int64 __fastcall google::protobuf::TextFormat::Finder::FindExtensionByNumber(
        google::protobuf::TextFormat::Finder *this,
        const google::protobuf::Descriptor *a2,
        unsigned int a3)
{
  return google::protobuf::DescriptorPool::FindExtensionByNumber(*(std::mutex ***)(*((_QWORD *)a2 + 2) + 16LL), a2, a3);
}