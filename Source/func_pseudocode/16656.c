-[EAAccessoryUpdater assetLocationForCustomBasejumperTrain:build:]
id __cdecl -[EAAccessoryUpdater assetLocationForCustomBasejumperTrain:build:](
        EAAccessoryUpdater *self,
        SEL a2,
        id a3,
        id a4)
{
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@/%@/%@%@"),
           getURLForAssetURLType(4uLL),
           a3,
           a3,
           a4);
}