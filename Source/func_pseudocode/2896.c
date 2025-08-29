-[DeviceSummaryViewController supportsBackup]
bool __cdecl -[DeviceSummaryViewController supportsBackup](DeviceSummaryViewController *self, SEL a2)
{
  AMPDevice *v2; // x19
  bool v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v3 = -[AMPDevice deviceType](v2, "deviceType") != (void *)1;
  objc_release(v2);
  return v3;
}