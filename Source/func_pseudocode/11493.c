__ZN6google8protobuf8internal12ExtensionSet17MaybeNewExtensionEiPKNS0_15FieldDescriptorEPPNS2_9ExtensionE
bool __fastcall google::protobuf::internal::ExtensionSet::MaybeNewExtension(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        const google::protobuf::FieldDescriptor *a3,
        google::protobuf::internal::ExtensionSet::Extension **a4)
{
  google::protobuf::internal::ExtensionSet::Extension *v6; // x0
  char v7; // w1

  v6 = (google::protobuf::internal::ExtensionSet::Extension *)google::protobuf::internal::ExtensionSet::Insert(this, a2);
  *a4 = v6;
  *((_QWORD *)v6 + 2) = a3;
  return v7 != 0LL;
}