-[_TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A024WiFiHelperClientDelegate updatedWiFiConfiguration:]
void __cdecl -[WiFiHelperClientDelegate updatedWiFiConfiguration:](
        _TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A024WiFiHelperClientDelegate *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  _TtC19ControlCenterHelperP33_F14D4C22208E7A416F4CC2A655BC16A024WiFiHelperClientDelegate *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self);
  sub_100019B0C(v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}