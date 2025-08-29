-[_TtC13DisplayMarkup27ScreenAnnotationsController .cxx_destruct]
void __cdecl -[ScreenAnnotationsController .cxx_destruct](
        _TtC13DisplayMarkup27ScreenAnnotationsController *self,
        SEL a2)
{
  objc_release(*(id *)((char *)&self->super.super.super.isa
                     + OBJC_IVAR____TtC13DisplayMarkup27ScreenAnnotationsController_activeAnnotationsController));
  swift_bridgeObjectRelease(*(Class *)((char *)&self->super.super.super.isa
                                     + OBJC_IVAR____TtC13DisplayMarkup27ScreenAnnotationsController_oldAnnotationControllers));
  objc_release(*(id *)((char *)&self->super.super.super.isa
                     + OBJC_IVAR____TtC13DisplayMarkup27ScreenAnnotationsController_pageController));
  objc_release(*(id *)((char *)&self->super.super.super.isa
                     + OBJC_IVAR____TtC13DisplayMarkup27ScreenAnnotationsController_controller));
  sub_10000AAC8(
    *(Class *)((char *)&self->super.super.super.isa
             + OBJC_IVAR____TtC13DisplayMarkup27ScreenAnnotationsController_streams),
    *(_QWORD *)&self->activeAnnotationsController[OBJC_IVAR____TtC13DisplayMarkup27ScreenAnnotationsController_streams]);
  sub_10000AF20((char *)self + OBJC_IVAR____TtC13DisplayMarkup27ScreenAnnotationsController_expiration, &unk_100029AA0);
}