-[_TtC34AppleMediaServicesUIDynamicService15JSNetworkObject .cxx_destruct]
void __cdecl -[JSNetworkObject .cxx_destruct](_TtC34AppleMediaServicesUIDynamicService15JSNetworkObject *self, SEL a2)
{
  char *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x0
  void (__fastcall *v6)(__int64); // x8
  void *v7; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_release(*(Class *)((char *)&self->super.isa
                         + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService15JSNetworkObject_accountStore));
  v3 = (char *)self + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService15JSNetworkObject_bag;
  v4 = sub_100045DD8(0LL);
  sub_10000BFCC(v4);
  v5 = sub_10000BF90(v3);
  v6(v5);
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService15JSNetworkObject_clientInfo));
  swift_bridgeObjectRelease(*(Class *)((char *)&self->super.isa
                                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService15JSNetworkObject_customSessions));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService15JSNetworkObject_defaultSession));
  swift_bridgeObjectRelease(*(_QWORD *)&self->accountStore[OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService15JSNetworkObject_mediaClient]);
  v7 = *(Class *)((char *)&self->super.isa
                + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService15JSNetworkObject_urlSessionHandler);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}