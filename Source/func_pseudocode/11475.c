__ZN6google8protobuf21DynamicMessageFactoryD0Ev
void __fastcall google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(
        google::protobuf::DynamicMessageFactory *this,
        const google::protobuf::Descriptor *a2,
        const unsigned int *a3,
        const void *a4)
{
  __int64 v4; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(this, a2, a3, a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v4, 0x10E1C401296BE88LL);
}