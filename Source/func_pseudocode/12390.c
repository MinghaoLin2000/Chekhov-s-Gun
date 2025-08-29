__ZN6google8protobuf13SourceContextD0Ev
void __fastcall google::protobuf::SourceContext::~SourceContext(google::protobuf::SourceContext *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::SourceContext::~SourceContext(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x1081C40AA79BA9DLL);
}