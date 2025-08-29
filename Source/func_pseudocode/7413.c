-[_TtC13DisplayMarkup14MarkupDelegate complete]
void __cdecl -[MarkupDelegate complete](_TtC13DisplayMarkup14MarkupDelegate *self, SEL a2)
{
  _TtC13DisplayMarkup14MarkupDelegate *v2; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retain(self);
  MarkupDelegate.complete()();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}