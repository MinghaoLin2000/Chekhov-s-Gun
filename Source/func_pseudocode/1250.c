+[DeviceViewController stringValueForDeviceType:]
id __cdecl +[DeviceViewController stringValueForDeviceType:](id a1, SEL a2, unsigned __int64 a3)
{
  if ( a3 - 3 > 6 )
    return CFSTR("iPod");
  else
    return off_1000B93E8[a3 - 3];
}