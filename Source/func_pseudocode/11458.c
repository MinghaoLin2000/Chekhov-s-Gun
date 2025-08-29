__ZN6google8protobuf25EncodedDescriptorDatabaseD0Ev
void __fastcall google::protobuf::EncodedDescriptorDatabase::~EncodedDescriptorDatabase(
        google::protobuf::EncodedDescriptorDatabase *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::EncodedDescriptorDatabase::~EncodedDescriptorDatabase(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0xA1C40F4AD4952LL);
}