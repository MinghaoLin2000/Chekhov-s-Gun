-[_TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinOtherNetworkDialog .cxx_destruct]
void __cdecl -[JoinOtherNetworkDialog .cxx_destruct](
        _TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinOtherNetworkDialog *self,
        SEL a2)
{
  __int64 v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  swift_release(*(Class *)((char *)&self->super.isa
                         + OBJC_IVAR____TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinOtherNetworkDialog_delegate));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinOtherNetworkDialog_dialog));
  objc_release(*(id *)((char *)&self->super.isa
                     + OBJC_IVAR____TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinOtherNetworkDialog_interface));
  swift_bridgeObjectRelease(*(Class *)((char *)&self->super.isa
                                     + OBJC_IVAR____TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinOtherNetworkDialog_scanResults));
  v3 = *(__int64 *)((char *)&self->super.isa
                  + OBJC_IVAR____TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinOtherNetworkDialog_modalSession);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  swift_release(v3);
}