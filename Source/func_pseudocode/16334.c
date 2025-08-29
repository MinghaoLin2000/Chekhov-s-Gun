+[EAFirmwareUpdater bootloaderProtocolStringWithEAID:]
id __cdecl +[EAFirmwareUpdater bootloaderProtocolStringWithEAID:](id a1, SEL a2, id a3)
{
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@.%@.%@"),
           CFSTR("com.apple.accessory.updater"),
           CFSTR("dfu"),
           a3);
}