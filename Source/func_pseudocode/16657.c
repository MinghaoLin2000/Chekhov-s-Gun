-[EAAccessoryUpdater assetLocationForType:withTrain:]
id __cdecl -[EAAccessoryUpdater assetLocationForType:withTrain:](
        EAAccessoryUpdater *self,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  __CFString *v5; // x20
  id v6; // x21
  __CFString *URLForAssetURLType; // x0
  unsigned __int64 v8; // x0
  __int64 v10; // [xsp+8h] [xbp-28h]

  v5 = 0LL;
  switch ( a3 )
  {
    case 0uLL:
      v6 = a4;
      if ( !objc_msgSend(a4, "length") )
        v6 = -[EAAccessoryUpdater trainName](self, "trainName");
      URLForAssetURLType = +[NSString stringWithFormat:](
                             &OBJC_CLASS___NSString,
                             "stringWithFormat:",
                             CFSTR("%@/%@"),
                             getURLForAssetURLType(0LL),
                             v6);
      goto LABEL_12;
    case 1uLL:
      URLForAssetURLType = +[NSString stringWithFormat:](
                             &OBJC_CLASS___NSString,
                             "stringWithFormat:",
                             CFSTR("%@/MarimbaSeed"),
                             getURLForAssetURLType(0LL),
                             v10);
      goto LABEL_12;
    case 2uLL:
      v8 = 2LL;
      goto LABEL_11;
    case 3uLL:
      URLForAssetURLType = +[NSString stringWithFormat:](
                             &OBJC_CLASS___NSString,
                             "stringWithFormat:",
                             CFSTR("%@/AirPods2022Seed"),
                             getURLForAssetURLType(2uLL),
                             v10);
      goto LABEL_12;
    case 4uLL:
      v8 = 4LL;
      goto LABEL_11;
    case 6uLL:
      v8 = 6LL;
LABEL_11:
      URLForAssetURLType = getURLForAssetURLType(v8);
LABEL_12:
      v5 = URLForAssetURLType;
      break;
    default:
      break;
  }
  -[FudPluginDelegate log:format:](self->delegate, "log:format:", 7LL, CFSTR("Selected location: %@"), v5);
  return v5;
}