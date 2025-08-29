-[EAFirmwareUpdater getDeviceClassName]
id __cdecl -[EAFirmwareUpdater getDeviceClassName](EAFirmwareUpdater *self, SEL a2)
{
  return -[NSDictionary objectForKey:](self->_deviceOptions, "objectForKey:", CFSTR("DeviceClassName"));
}