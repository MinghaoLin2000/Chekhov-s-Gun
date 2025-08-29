+[EAFirmwareUpdater getEAFirmwareRevisionActive:forProtocol:]
id __cdecl +[EAFirmwareUpdater getEAFirmwareRevisionActive:forProtocol:](id a1, SEL a2, id a3, id a4)
{
  void *v4; // x20
  unsigned int v7; // w22
  unsigned __int8 v8; // w23
  void *v9; // x0

  v4 = 0LL;
  if ( a3 )
  {
    if ( a4 )
    {
      v4 = objc_msgSend(a3, "firmwareRevisionActive");
      v7 = (unsigned int)objc_msgSend(objc_msgSend(a3, "modelNumber"), "isEqualToString:", CFSTR("A2084"));
      v8 = (unsigned __int8)objc_msgSend(objc_msgSend(a3, "modelNumber"), "isEqualToString:", CFSTR("A2096"));
      if ( ((unsigned int)objc_msgSend(objc_msgSend(a3, "modelNumber"), "isEqualToString:", CFSTR("A3184")) & 1) != 0
        || (v8 & 1) != 0
        || v7 )
      {
        if ( objc_msgSend(a3, "protocolDetails")
          && objc_msgSend(objc_msgSend(a3, "protocolDetails"), "objectForKey:", a4) )
        {
          v9 = objc_msgSend(objc_msgSend(a3, "protocolDetails"), "objectForKey:", a4);
          v4 = objc_msgSend(v9, "objectForKey:", EAProtocolFirmwareVersionActiveKey);
          NSLog(
            &CFSTR("%s(): fwRevisionActive=%@ forProtocol=%@").isa,
            "+[EAFirmwareUpdater getEAFirmwareRevisionActive:forProtocol:]",
            v4,
            a4);
        }
        else
        {
          NSLog(
            &CFSTR("%s() EAAccessory has no protocolDetails=%@ for protocol").isa,
            "+[EAFirmwareUpdater getEAFirmwareRevisionActive:forProtocol:]",
            objc_msgSend(a3, "protocolDetails"),
            a4);
        }
      }
    }
  }
  return v4;
}