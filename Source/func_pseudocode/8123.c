-[XPCSignpostReader signpostIntervalData:forTaskingConfig:]
id __cdecl -[XPCSignpostReader signpostIntervalData:forTaskingConfig:](XPCSignpostReader *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  NSMutableDictionary *v8; // x21
  void *v9; // x23
  void *v10; // x23
  void *v11; // x23
  NSNumber *v12; // x23
  void *v13; // x23
  void *v14; // x23
  void *v15; // x23
  void *v16; // x23
  NSNumber *v17; // x23
  void *v18; // x23
  NSNumber *v19; // x23
  void *v20; // x23
  void *v21; // x23
  void *v22; // x24
  NSNumber *v23; // x23
  void *v24; // x23
  void *v25; // x24
  void *v26; // x23
  void *v27; // x24
  NSNumber *v28; // x23
  void *v29; // x23
  void *v30; // x24
  void *v31; // x0
  void *v32; // x23
  void *v33; // x24
  void *v34; // x23
  void *v35; // x23
  void *v36; // x0
  void *v37; // x23
  void *v38; // x24
  void *v39; // x23
  void *v40; // x23
  void *v41; // x23
  unsigned int v42; // w24
  void *v43; // x23
  unsigned int v44; // w24
  id v45; // x22
  os_log_s *v46; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v8,
    "setObject:forKeyedSubscript:",
    CFSTR("Powerlog"),
    CFSTR("CollectionType"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "category"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v9, CFSTR("Category"));
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "name"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v10, CFSTR("Name"));
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "subsystem"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v11, CFSTR("Subsystem"));
  objc_release(v11);
  objc_msgSend(v6, "timebaseRatio");
  v12 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v12, CFSTR("TimebaseRatio"));
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "string1Name"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v13, CFSTR("String1Name"));
  objc_release(v13);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "string1Value"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v14, CFSTR("String1Value"));
  objc_release(v14);
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "string2Name"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v15, CFSTR("String2Name"));
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "string2Value"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v16, CFSTR("String2Value"));
  objc_release(v16);
  v17 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedLongLong:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedLongLong:",
            objc_msgSend(v6, "startMachContinuousTime")));
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v8,
    "setObject:forKeyedSubscript:",
    v17,
    CFSTR("startMachContinuousTime"));
  objc_release(v17);
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "beginWallTimeStringWithTimeZoneName:", 0LL));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v18, CFSTR("beginWallTime"));
  objc_release(v18);
  v19 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedLongLong:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedLongLong:",
            objc_msgSend(v6, "endMachContinuousTime")));
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v8,
    "setObject:forKeyedSubscript:",
    v19,
    CFSTR("endMachContinuousTime"));
  objc_release(v19);
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "endWallTimeStringWithTimeZoneName:", 0LL));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v20, CFSTR("endWallTime"));
  objc_release(v20);
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "beginEvent"));
  objc_release(v21);
  if ( v21 )
  {
    v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "beginEvent"));
    v23 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", objc_msgSend(v22, "processID")));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v23, CFSTR("BeginPid"));
    objc_release(v23);
    objc_release(v22);
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "beginEvent"));
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "processName"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v8,
      "setObject:forKeyedSubscript:",
      v25,
      CFSTR("BeginProcessName"));
    objc_release(v25);
    objc_release(v24);
  }
  v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "endEvent"));
  objc_release(v26);
  if ( v26 )
  {
    v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "endEvent"));
    v28 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", objc_msgSend(v27, "processID")));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v28, CFSTR("EndPid"));
    objc_release(v28);
    objc_release(v27);
    v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "endEvent"));
    v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "processName"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v8,
      "setObject:forKeyedSubscript:",
      v30,
      CFSTR("EndProcessName"));
    objc_release(v30);
    objc_release(v29);
  }
  v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "number1Name"));
  if ( v31 )
  {
    v32 = v31;
    v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "number1Value"));
    objc_release(v33);
    objc_release(v32);
    if ( v33 )
    {
      v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "number1Name"));
      -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v34, CFSTR("Number1Name"));
      objc_release(v34);
      v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "number1Value"));
      -[NSMutableDictionary setObject:forKeyedSubscript:](
        v8,
        "setObject:forKeyedSubscript:",
        v35,
        CFSTR("Number1Value"));
      objc_release(v35);
    }
  }
  v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "number2Name"));
  if ( v36 )
  {
    v37 = v36;
    v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "number2Value"));
    objc_release(v38);
    objc_release(v37);
    if ( v38 )
    {
      v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "number2Name"));
      -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v39, CFSTR("Number2Name"));
      objc_release(v39);
      v40 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "number2Value"));
      -[NSMutableDictionary setObject:forKeyedSubscript:](
        v8,
        "setObject:forKeyedSubscript:",
        v40,
        CFSTR("Number2Value"));
      objc_release(v40);
    }
  }
  v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Internal")));
  v42 = (unsigned int)objc_msgSend(v41, "boolValue");
  objc_release(v41);
  if ( v42 )
  {
    v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "subsystem"));
    v44 = (unsigned int)objc_msgSend(v43, "isEqualToString:", CFSTR("com.apple.metrickit.log"));
    objc_release(v43);
    if ( v44 )
    {
      v45 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader mxSignpostIntervalDataForTasking:](self, "mxSignpostIntervalDataForTasking:", v6));
      -[NSMutableDictionary addEntriesFromDictionary:](v8, "addEntriesFromDictionary:", v45);
      objc_release(v45);
    }
  }
  v46 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v46, OS_LOG_TYPE_DEBUG) )
    sub_10000E774(v8, v46);
  objc_release(v46);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}