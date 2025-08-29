-[EAFirmwareUpdater queryPredicate]
id __cdecl -[EAFirmwareUpdater queryPredicate](EAFirmwareUpdater *self, SEL a2)
{
  _QWORD v4[6]; // [xsp+0h] [xbp-40h] BYREF

  if ( -[EAFirmwareUpdater isMultiAssetSession](self, "isMultiAssetSession")
    || !-[NSString isEqualToString:](
          -[EAFirmwareUpdater protocolString](self, "protocolString"),
          "isEqualToString:",
          -[EAFirmwareUpdater appProtocol](self, "appProtocol")) )
  {
    return 0LL;
  }
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_100009534;
  v4[3] = &unk_100031590;
  v4[4] = self;
  v4[5] = 2LL;
  return +[NSPredicate predicateWithBlock:](&OBJC_CLASS___NSPredicate, "predicateWithBlock:", v4);
}