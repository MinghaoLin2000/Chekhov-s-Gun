-[XPCSignpostReader workflowDataForEventTracker:]
id __cdecl -[XPCSignpostReader workflowDataForEventTracker:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v3; // x19
  NSMutableDictionary *v4; // x20
  void *v5; // x21
  void *v6; // x22
  void *v7; // x22
  NSNumber *v8; // x21
  void *v9; // x22
  NSNumber *v10; // x21
  void *v11; // x21
  void *v12; // x21
  void *v13; // x22
  void *v14; // x23
  void *v15; // x25
  NSNumber *v16; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v4,
    "setObject:forKeyedSubscript:",
    CFSTR("WorkflowResponsiveness"),
    CFSTR("CollectionType"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "workflow"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "name"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v6, CFSTR("WorkflowName"));
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "eventStart"));
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithUnsignedLongLong:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedLongLong:",
           objc_msgSend(v7, "machContTimeNs")));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v8, CFSTR("OverallStartTime"));
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "eventEnd"));
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedLongLong:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedLongLong:",
            objc_msgSend(v9, "machContTimeNs")));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v10, CFSTR("OverallEndTime"));
  objc_release(v10);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "error"));
  objc_release(v11);
  if ( v11 )
  {
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "error"));
    if ( v12 )
    {
      v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "error"));
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "domain"));
      if ( (unsigned int)objc_msgSend(v14, "isEqualToString:", WRErrorDomain) )
      {
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "error"));
        v16 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", objc_msgSend(v15, "code")));
        -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v16, CFSTR("ErrorCode"));
        objc_release(v16);
        objc_release(v15);
      }
      else
      {
        -[NSMutableDictionary setObject:forKeyedSubscript:](
          v4,
          "setObject:forKeyedSubscript:",
          &off_100015888,
          CFSTR("ErrorCode"));
      }
      objc_release(v14);
      objc_release(v13);
    }
    else
    {
      -[NSMutableDictionary setObject:forKeyedSubscript:](
        v4,
        "setObject:forKeyedSubscript:",
        &off_100015888,
        CFSTR("ErrorCode"));
    }
    objc_release(v12);
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}