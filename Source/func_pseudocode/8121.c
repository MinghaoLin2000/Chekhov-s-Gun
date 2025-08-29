-[XPCSignpostReader workflowDataForWRInterval:]
id __cdecl -[XPCSignpostReader workflowDataForWRInterval:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v3; // x20
  NSMutableDictionary *v4; // x19
  void *v5; // x22
  NSNumber *v6; // x21
  void *v7; // x22
  NSNumber *v8; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "start"));
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithUnsignedLongLong:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedLongLong:",
           objc_msgSend(v5, "machContTimeNs")));
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v4,
    "setObject:forKeyedSubscript:",
    v6,
    CFSTR("startMachContinuousTime"));
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "end"));
  objc_release(v3);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithUnsignedLongLong:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedLongLong:",
           objc_msgSend(v7, "machContTimeNs")));
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v4,
    "setObject:forKeyedSubscript:",
    v8,
    CFSTR("endMachContinuousTime"));
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}