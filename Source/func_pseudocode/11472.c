__ZN6google8protobuf21DynamicMessageFactoryD2Ev
void __fastcall google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(
        google::protobuf::DynamicMessageFactory *this,
        const google::protobuf::Descriptor *a2,
        const unsigned int *a3,
        const void *a4)
{
  char *v5; // x20
  _QWORD *i; // x21
  __int64 v7; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  *(_QWORD *)this = off_1001D9798;
  v5 = (char *)this + 24;
  for ( i = *(_QWORD **)(*((_QWORD *)this + 3) + 16LL); i; i = (_QWORD *)*i )
  {
    google::protobuf::DynamicMessageFactory::DeleteDefaultOneofInstance(
      *(google::protobuf::DynamicMessageFactory **)(i[3] + 32LL),
      a2,
      a3,
      a4);
    if ( i[3] )
    {
      v7 = sub_1000C08F0();
      operator delete(v7, 0x1070C40B706855ELL);
    }
  }
  std::mutex::~mutex((std::mutex *)((char *)this + 32));
  sub_1000C0A2C(v5, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  google::protobuf::MessageFactory::~MessageFactory(this);
}