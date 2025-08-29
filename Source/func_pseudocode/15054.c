-[ATXHeuristicJSEnv mockUsesTwelveHourClock:]
void __cdecl -[ATXHeuristicJSEnv mockUsesTwelveHourClock:](ATXHeuristicJSEnv *self, SEL a2, bool a3)
{
  _QWORD *v5; // x20
  _QWORD v6[4]; // [xsp+8h] [xbp-58h] BYREF
  id v7; // [xsp+28h] [xbp-38h] BYREF
  bool v8; // [xsp+30h] [xbp-30h]
  id location; // [xsp+38h] [xbp-28h] BYREF

  objc_initWeak(&location, self);
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10001B9D0;
  v6[3] = &unk_100029C10;
  objc_copyWeak(&v7, &location);
  v8 = a3;
  v5 = objc_retainBlock(v6);
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", v5, CFSTR("isEventAtOne"));
  objc_release(v5);
  objc_destroyWeak(&v7);
  objc_destroyWeak(&location);
}