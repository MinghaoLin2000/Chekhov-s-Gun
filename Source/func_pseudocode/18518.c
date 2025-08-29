-[_TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinNetworkErrorDialog userDidCancelErrorDialog:]
void __cdecl -[JoinNetworkErrorDialog userDidCancelErrorDialog:](
        _TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinNetworkErrorDialog *self,
        SEL a2,
        id a3)
{
  id v5; // x21
  _TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A022JoinNetworkErrorDialog *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(self);
  sub_10001A6F4(a3, 0LL);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}