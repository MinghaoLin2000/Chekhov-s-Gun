-[DeviceModeFinderViewController isEraseInProgress]
bool __cdecl -[DeviceModeFinderViewController isEraseInProgress](DeviceModeFinderViewController *self, SEL a2)
{
  id v3; // x20
  AMPDevice *v4; // x19
  unsigned __int8 v5; // w21

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v5 = (unsigned __int8)objc_msgSend(v3, "isEraseInProgressForDevice:", v4);
  objc_release(v4);
  objc_release(v3);
  return v5;
}