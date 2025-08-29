-[_TtC22localspeechrecognition12EARInterface .cxx_destruct]
void __cdecl -[EARInterface .cxx_destruct](_TtC22localspeechrecognition12EARInterface *self, SEL a2)
{
  __int64 v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_bridgeObjectRelease(*(Class *)((char *)&self->super.isa
                                     + OBJC_IVAR____TtC22localspeechrecognition12EARInterface_listeners));
  v3 = *(__int64 *)((char *)&self->super.isa + OBJC_IVAR____TtC22localspeechrecognition12EARInterface_listenerLock);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(v3);
}