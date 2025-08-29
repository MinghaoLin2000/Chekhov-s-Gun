-[ATXHeuristicJSEnv mockMidnightAndGetHolidayEventsTomorrow:]
void __cdecl -[ATXHeuristicJSEnv mockMidnightAndGetHolidayEventsTomorrow:](ATXHeuristicJSEnv *self, SEL a2, double a3)
{
  _QWORD *v4; // x20
  _QWORD v5[5]; // [xsp+8h] [xbp-38h] BYREF

  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3221225472LL;
  v5[2] = sub_10001B57C;
  v5[3] = &unk_100029BA0;
  *(double *)&v5[4] = a3;
  v4 = objc_retainBlock(v5);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v4,
    CFSTR("getHolidayEvents"));
  objc_release(v4);
}