-[EAFirmwareUpdater validateAssetAttributes:]
id __cdecl -[EAFirmwareUpdater validateAssetAttributes:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  __int64 v3; // x30
  void *v6; // x0
  void *v7; // x2

  if ( a3 )
  {
    -[EAFirmwareUpdater setFirmwareBundleFilename:](
      self,
      "setFirmwareBundleFilename:",
      objc_msgSend(a3, "objectForKey:", CFSTR("FirmwareBundle")));
    if ( -[EAFirmwareUpdater firmwareBundleFilename](self, "firmwareBundleFilename") )
    {
      v6 = objc_msgSend(a3, "objectForKey:", CFSTR("ForceSilentUpdate"));
      if ( v6 )
        v7 = objc_msgSend(v6, "boolValue");
      else
        v7 = 0LL;
      -[EAFirmwareUpdater setForceSilentUpdate:](self, "setForceSilentUpdate:", v7);
      -[EAFirmwareUpdater log:format:](
        self,
        "log:format:",
        5LL,
        CFSTR("%s %@"),
        "-[EAFirmwareUpdater validateAssetAttributes:]",
        objc_autorelease(
          objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSString),
            "initWithFormat:",
            CFSTR("EA FUD Plugin: forceSilentUpdate=%d"),
            -[EAFirmwareUpdater forceSilentUpdate](self, "forceSilentUpdate"))));
      self->_firmwareVersionAvailable = +[NSString stringWithFormat:](
                                          &OBJC_CLASS___NSString,
                                          "stringWithFormat:",
                                          CFSTR("%@.%@.%@"),
                                          objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("FirmwareVersionMajor")),
                                          objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("FirmwareVersionMinor")),
                                          objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("FirmwareVersionRelease")));
      -[EAFirmwareUpdater log:format:](
        self,
        "log:format:",
        5LL,
        CFSTR("%s %@"),
        "-[EAFirmwareUpdater validateAssetAttributes:]",
        objc_autorelease(
          objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSString),
            "initWithFormat:",
            CFSTR("Firmware version available = %@"),
            self->_firmwareVersionAvailable)));
    }
    else
    {
      sub_100009A6C(0LL, 4LL, CFSTR("No firmware bundle filename in asset: %@"));
    }
    return 0LL;
  }
  else
  {
    if ( ((v3 ^ (2 * v3)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (id)sub_100009A6C(0LL, 3LL, CFSTR("No asset attributes"));
  }
}