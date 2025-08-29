-[_TtC34AppleMediaServicesUIDynamicService14JSClientObject .cxx_destruct]
void __cdecl -[JSClientObject .cxx_destruct](_TtC34AppleMediaServicesUIDynamicService14JSClientObject *self, SEL a2)
{
  __int64 v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService14JSClientObject_clientInfo));
  swift_bridgeObjectRelease(*(_QWORD *)&self->clientInfo[OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService14JSClientObject_mediaClient]);
  v3 = *(_QWORD *)&self->clientInfo[OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService14JSClientObject_metricsContext];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v3);
}