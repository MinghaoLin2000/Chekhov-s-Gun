-[_TtC13DisplayMarkup14MarkupDelegate setupWith:appStream:complete:]
void __cdecl -[MarkupDelegate setupWith:appStream:complete:](
        _TtC13DisplayMarkup14MarkupDelegate *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  void *v8; // x22
  __int64 v9; // x23
  id v10; // x22
  id v11; // x19
  _TtC13DisplayMarkup14MarkupDelegate *v12; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = _Block_copy(a5);
  v9 = swift_allocObject(&unk_1000254C8, 24LL, 7LL);
  *(_QWORD *)(v9 + 16) = v8;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(self);
  MarkupDelegate.setup(with:appStream:complete:)(v10, v11, (__int64)sub_1000044D8, v9);
  objc_release(v10);
  objc_release(v11);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(v9);
}