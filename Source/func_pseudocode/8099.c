-[XPCSignpostReader signpostIntervalData:withBundleID:]
id __cdecl -[XPCSignpostReader signpostIntervalData:withBundleID:](XPCSignpostReader *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x22
  NSMutableDictionary *v7; // x20
  void *v8; // x21
  void *v9; // x21
  float v10; // s0
  NSNumber *v11; // x21
  os_log_s *v12; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v6, CFSTR("bundleID"));
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "number1Value"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v8, CFSTR("IsForeground"));
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "beginDate"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v9, CFSTR("beginDate"));
  objc_release(v9);
  objc_msgSend(v5, "durationSeconds");
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedLongLong:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedLongLong:",
            (unsigned __int64)(float)(v10 * 1000.0)));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v11, CFSTR("duration"));
  objc_release(v11);
  v12 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEBUG) )
    sub_10000E154(v5, v7, v12);
  objc_release(v12);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}