-[DeviceFooterViewController updateCapacityTotals]
void __cdecl -[DeviceFooterViewController updateCapacityTotals](DeviceFooterViewController *self, SEL a2)
{
  AMPDevice *v3; // x19
  AMPDevice *v4; // x19
  void *v5; // x21
  void *v6; // x23
  AMPCapacityBarViewController *v7; // x22
  AMPCapacityBarViewController *v8; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v5 = objc_retainAutoreleasedReturnValue(-[AMPDevice totalDataCapacity](v4, "totalDataCapacity"));
    v6 = objc_msgSend(v5, "unsignedLongLongValue");
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController capacityBarViewController](self, "capacityBarViewController"));
    -[AMPCapacityBarViewController setCapacity:](v7, "setCapacity:", v6);
    objc_release(v7);
    objc_release(v5);
    objc_release(v4);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController capacityBarViewController](self, "capacityBarViewController"));
    -[AMPCapacityBarViewController setBytesUsed:](v8, "setBytesUsed:", 0LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v8);
  }
}