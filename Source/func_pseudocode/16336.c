+[EAFirmwareUpdater multiAssetAppProtocolStringWithEAID:]
id __cdecl +[EAFirmwareUpdater multiAssetAppProtocolStringWithEAID:](id a1, SEL a2, id a3)
{
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@.%@.%@"),
           CFSTR("com.apple.accessory.updater"),
           CFSTR("app.multiasset"),
           a3);
}