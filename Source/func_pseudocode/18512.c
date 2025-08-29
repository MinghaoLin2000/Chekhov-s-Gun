-[_TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A024WiFiHelperClientDelegate didUpdateUIState:previous:]
void __cdecl -[WiFiHelperClientDelegate didUpdateUIState:previous:](
        _TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A024WiFiHelperClientDelegate *self,
        SEL a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A024WiFiHelperClientDelegate *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(self);
  sub_1000199C4(a3, a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}