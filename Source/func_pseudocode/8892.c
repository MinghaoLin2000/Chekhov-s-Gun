-[_TtC34AppleMediaServicesUIDynamicService16JSMediaAPIObject .cxx_destruct]
void __cdecl -[JSMediaAPIObject .cxx_destruct](
        _TtC34AppleMediaServicesUIDynamicService16JSMediaAPIObject *self,
        SEL a2)
{
  char *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x16
  void *v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_release(*(Class *)((char *)&self->super.isa
                         + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService16JSMediaAPIObject_accountStore));
  v3 = (char *)self + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService16JSMediaAPIObject_bag;
  v4 = sub_100045DD8(0LL);
  sub_10000BFCC(v4);
  (*(void (__fastcall **)(char *))(v5 + 8))(v3);
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService16JSMediaAPIObject_clientInfo));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService16JSMediaAPIObject_encoder));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService16JSMediaAPIObject_tokenService));
  swift_bridgeObjectRelease(*(_QWORD *)&self->accountStore[OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService16JSMediaAPIObject_mediaClient]);
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService16JSMediaAPIObject_urlSession));
  v6 = *(Class *)((char *)&self->super.isa
                + OBJC_IVAR____TtC34AppleMediaServicesUIDynamicService16JSMediaAPIObject_urlSessionHandler);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}