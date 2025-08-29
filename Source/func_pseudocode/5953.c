-[_TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService buildAutoCompleteIndexOnStartUpEvent:with:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[SiriSuggestionsBookkeepingService buildAutoCompleteIndexOnStartUpEvent:with:](
        _TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService *self,
        SEL a2,
        bool a3,
        id a4)
{
  _BOOL8 v4; // x19
  void *v6; // x21
  __int64 v7; // x22
  _TtC33SiriSuggestionsBookkeepingService33SiriSuggestionsBookkeepingService *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = a3;
  v6 = _Block_copy(a4);
  v7 = swift_allocObject(&unk_100010950, 24LL, 7LL);
  *(_QWORD *)(v7 + 16) = v6;
  v8 = objc_retain(self);
  sub_1000064CC(v4, sub_10000CEE4, v7);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(v7);
}