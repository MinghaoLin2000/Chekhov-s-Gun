__ZZN6google8protobuf8internal16OnShutdownDeleteINS0_15UnknownFieldSetEEEPT_S5_ENUlPKvE_8__invokeES7_
void **__fastcall google::protobuf::internal::OnShutdownDelete<google::protobuf::UnknownFieldSet>(google::protobuf::UnknownFieldSet *)::{lambda(void const*)#1}::__invoke(
        void **this)
{
  void **v1; // x19
  void *v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( this )
  {
    v1 = this;
    v2 = *this;
    if ( v2 != v1[1] )
    {
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *)v1);
      v2 = *v1;
    }
    if ( v2 )
    {
      v1[1] = v2;
      operator delete(v2);
    }
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (void **)operator delete(v1, 0x20C40960023A9LL);
  }
  return this;
}