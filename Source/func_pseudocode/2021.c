-[DeviceEULAViewController deviceType]
unsigned __int64 __cdecl -[DeviceEULAViewController deviceType](DeviceEULAViewController *self, SEL a2)
{
  unsigned __int64 result; // x0
  AMPDevice *v4; // x20

  result = self->_deviceType;
  if ( !result )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    self->_deviceType = (unsigned __int64)-[AMPDevice deviceType](v4, "deviceType");
    objc_release(v4);
    return self->_deviceType;
  }
  return result;
}