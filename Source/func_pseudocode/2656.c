-[DeviceAutofillPlacardViewController clickAutofillButton:]
void __cdecl -[DeviceAutofillPlacardViewController clickAutofillButton:](
        DeviceAutofillPlacardViewController *self,
        SEL a2,
        id a3)
{
  AMPDevicesClient *v4; // x20
  AMPDevice *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController devicesClient](self, "devicesClient", a3));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController device](self, "device"));
  -[AMPDevicesClient autoFillMusicForDevice:withReply:](v4, "autoFillMusicForDevice:withReply:", v5, &stru_1000B9D98);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}