-[_TtC13DisplayMarkup25AnnotationsViewController .cxx_destruct]
void __cdecl -[AnnotationsViewController .cxx_destruct](_TtC13DisplayMarkup25AnnotationsViewController *self, SEL a2)
{
  char *v3; // x20
  __int64 v4; // x0
  void *v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_release(*(id *)((char *)&self->super.super.super.isa
                     + OBJC_IVAR____TtC13DisplayMarkup25AnnotationsViewController_pageController));
  objc_release(*(id *)((char *)&self->super.super.super.isa
                     + OBJC_IVAR____TtC13DisplayMarkup25AnnotationsViewController_controller));
  v3 = (char *)self + OBJC_IVAR____TtC13DisplayMarkup25AnnotationsViewController_expiration;
  v4 = sub_10001C910(0LL);
  (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)(v4 - 8) + 8LL))(v3, v4);
  v5 = *(Class *)((char *)&self->super.super.super.isa
                + OBJC_IVAR____TtC13DisplayMarkup25AnnotationsViewController_annotationStream);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}