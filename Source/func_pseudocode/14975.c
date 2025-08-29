-[ATXHeuristicJSEnv _allHeuristicClassNames]
id __cdecl -[ATXHeuristicJSEnv _allHeuristicClassNames](ATXHeuristicJSEnv *self, SEL a2)
{
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF

  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100011514;
  block[3] = &unk_100029690;
  block[4] = self;
  if ( qword_100032370 != -1 )
    dispatch_once(&qword_100032370, block);
  return objc_retainAutoreleaseReturnValue((id)qword_100032368);
}