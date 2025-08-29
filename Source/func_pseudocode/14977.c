-[ATXHeuristicJSEnv _allHeuristicNames]
id __cdecl -[ATXHeuristicJSEnv _allHeuristicNames](ATXHeuristicJSEnv *self, SEL a2)
{
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF

  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_1000117B0;
  block[3] = &unk_100029690;
  block[4] = self;
  if ( qword_100032380 != -1 )
    dispatch_once(&qword_100032380, block);
  return objc_retainAutoreleaseReturnValue((id)qword_100032378);
}