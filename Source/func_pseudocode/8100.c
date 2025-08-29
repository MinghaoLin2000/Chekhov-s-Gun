-[XPCSignpostReader updateTimeSeriesLaunches:withBundleID:]
void __cdecl -[XPCSignpostReader updateTimeSeriesLaunches:withBundleID:](XPCSignpostReader *self, SEL a2, id a3, id a4)
{
  id v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader signpostIntervalData:withBundleID:](self, "signpostIntervalData:withBundleID:", a3, a4));
  -[NSMutableArray addObject:](self->_launchTimeSeries, "addObject:", v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}