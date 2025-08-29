-[_TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinNetworkErrorDialog .cxx_destruct]
void __cdecl -[JoinNetworkErrorDialog .cxx_destruct](
        _TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinNetworkErrorDialog *self,
        SEL a2)
{
  void *v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  sub_10001CA48(
    *(Class *)((char *)&self->super.isa
             + OBJC_IVAR____TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinNetworkErrorDialog_completion),
    *(_QWORD *)&self->completion[OBJC_IVAR____TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinNetworkErrorDialog_completion]);
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinNetworkErrorDialog_dialog));
  swift_release(*(Class *)((char *)&self->super.isa
                         + OBJC_IVAR____TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinNetworkErrorDialog_modalSession));
  v3 = *(Class *)((char *)&self->super.isa
                + OBJC_IVAR____TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinNetworkErrorDialog_scanResult);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}