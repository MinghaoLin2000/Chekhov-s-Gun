-[_TtC13DisplayMarkup14MarkupDelegate start:]
void __cdecl -[MarkupDelegate start:](_TtC13DisplayMarkup14MarkupDelegate *self, SEL a2, id a3)
{
  void *v4; // x20
  _TtC13DisplayMarkup14MarkupDelegate *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = _Block_copy(a3);
  _Block_copy(v4);
  v5 = objc_retain(self);
  sub_100003DF0();
  _Block_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}