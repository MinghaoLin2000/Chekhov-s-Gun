-[_TtC22localspeechrecognition32EARModelContextDelegateInterface .cxx_destruct]
void __cdecl -[EARModelContextDelegateInterface .cxx_destruct](
        _TtC22localspeechrecognition32EARModelContextDelegateInterface *self,
        SEL a2)
{
  __int64 v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  sub_100004D28((char *)self + OBJC_IVAR____TtC22localspeechrecognition32EARModelContextDelegateInterface_asrId, a2);
  swift_bridgeObjectRelease(*(_QWORD *)&self->taskName[OBJC_IVAR____TtC22localspeechrecognition32EARModelContextDelegateInterface_taskName]);
  v3 = *(__int64 *)((char *)&self->super.isa
                  + OBJC_IVAR____TtC22localspeechrecognition32EARModelContextDelegateInterface_pendingANECompilationContextEvents);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_bridgeObjectRelease(v3);
}