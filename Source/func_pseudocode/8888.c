-[_TtC34AppleMediaServicesUIDynamicService17JSMarketingObject .cxx_destruct]
void __cdecl -[JSMarketingObject .cxx_destruct](
        _TtC34AppleMediaServicesUIDynamicService17JSMarketingObject *self,
        SEL a2)
{
  char *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x16
  __int64 v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService17JSMarketingObject_account));
  v3 = (char *)self + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService17JSMarketingObject_bag;
  v4 = sub_100045DD8(0LL);
  sub_10001CD80(v4, v4);
  (*(void (__fastcall **)(char *))(v5 + 8))(v3);
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService17JSMarketingObject_clientInfo));
  v6 = *(_QWORD *)&self->account[OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService17JSMarketingObject_mediaClient];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v6);
}