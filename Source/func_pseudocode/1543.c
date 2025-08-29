-[DeviceFooterViewController clickSkipSyncOperationButton:]
void __cdecl -[DeviceFooterViewController clickSkipSyncOperationButton:](
        DeviceFooterViewController *self,
        SEL a2,
        id a3)
{
  AMPDevicesClient *v4; // x19
  __int64 currentSyncOperation; // x21
  AMPDevice *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient", a3));
  currentSyncOperation = self->_currentSyncOperation;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  -[AMPDevicesClient skipSyncOperation:forDevice:withReply:](
    v4,
    "skipSyncOperation:forDevice:withReply:",
    currentSyncOperation,
    v6,
    &stru_1000B9520);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}