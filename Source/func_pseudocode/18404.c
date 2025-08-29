_$s19ControlCenterHelper04WiFiC0C12wifiUIClient33_F14D4C22208E7A416F4CC2A655BC16A0LLSo04CWWiE13UIProxyClientCvpfi
id variable initialization expression of WiFiHelper.wifiUIClient()
{
  id v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v0 = objc_allocWithZone((Class)&OBJC_CLASS___CWWiFiUIProxyClient);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_msgSend(v0, "init");
}