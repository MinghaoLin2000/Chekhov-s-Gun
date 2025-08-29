-[_TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService getAccountDetailsWith:]
void __cdecl -[SiriSuggestionsBookkeepingService getAccountDetailsWith:](
        _TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  __int64 v5; // x21
  _TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = _Block_copy(a3);
  v5 = swift_allocObject(&unk_100010810, 24LL, 7LL);
  *(_QWORD *)(v5 + 16) = v4;
  v6 = objc_retain(self);
  sub_10000A52C(sub_10000C704, v5);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(v5);
}