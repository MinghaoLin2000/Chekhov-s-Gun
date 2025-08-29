-[_TtC34AppleMediaServicesUIDynamicService15JSAccountObject .cxx_destruct]
void __cdecl -[JSAccountObject .cxx_destruct](_TtC34AppleMediaServicesUIDynamicService15JSAccountObject *self, SEL a2)
{
  void *v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_release(*(Class *)((char *)&self->super.isa
                         + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService15JSAccountObject_dynamicAccountsStore));
  v3 = *(Class *)((char *)&self->super.isa
                + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService15JSAccountObject_clientInfo);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}