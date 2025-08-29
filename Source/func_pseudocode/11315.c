__ZNK6google8protobuf28UninterpretedOption_NamePart13IsInitializedEv
bool __fastcall google::protobuf::UninterpretedOption_NamePart::IsInitialized(
        google::protobuf::UninterpretedOption_NamePart *this)
{
  return (~*((_DWORD *)this + 4) & 3) == 0;
}