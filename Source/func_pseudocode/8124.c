-[XPCSignpostReader mxSignpostIntervalDataForTasking:]
id __cdecl -[XPCSignpostReader mxSignpostIntervalDataForTasking:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v3; // x19
  NSMutableDictionary *v4; // x20
  void *v5; // x21
  void *v6; // x22
  void *v7; // x22
  void *v8; // x23
  void *v9; // x24
  double v10; // d0
  NSNumber *v11; // x21
  void *v12; // x21
  void *v13; // x22
  void *v14; // x23
  void *v15; // x21
  void *v16; // x22
  void *v17; // x23
  void *v18; // x21
  void *v19; // x22
  void *v20; // x23
  void *v21; // x21
  void *v22; // x22
  void *v23; // x22
  void *v24; // x23
  void *v25; // x24
  double v26; // d0
  NSNumber *v27; // x21
  void *v28; // x21
  void *v29; // x22
  void *v30; // x23
  void *v31; // x21
  void *v32; // x22
  void *v33; // x23
  void *v34; // x21
  void *v35; // x22
  void *v36; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "beginEvent"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "metrics"));
  objc_release(v6);
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "beginEvent"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "metrics"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "cpuTimeNsec"));
    objc_msgSend(v9, "doubleValue");
    v11 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v10 / 1000000000.0));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v11, CFSTR("BeginCPUTime"));
    objc_release(v11);
    objc_release(v9);
    objc_release(v8);
    objc_release(v7);
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "beginEvent"));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "metrics"));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "dirtyMemoryLifetimePeakKB"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v4,
      "setObject:forKeyedSubscript:",
      v14,
      CFSTR("BeginPeakMemory"));
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "beginEvent"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "metrics"));
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "dirtyMemoryKB"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v4,
      "setObject:forKeyedSubscript:",
      v17,
      CFSTR("BeginDirtyMemory"));
    objc_release(v17);
    objc_release(v16);
    objc_release(v15);
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "beginEvent"));
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "metrics"));
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "storageDirtiedKB"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v4,
      "setObject:forKeyedSubscript:",
      v20,
      CFSTR("BeginDiskLogicalWrites"));
    objc_release(v20);
    objc_release(v19);
    objc_release(v18);
  }
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "endEvent"));
  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "metrics"));
  objc_release(v22);
  objc_release(v21);
  if ( v22 )
  {
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "endEvent"));
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "metrics"));
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "cpuTimeNsec"));
    objc_msgSend(v25, "doubleValue");
    v27 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v26 / 1000000000.0));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v27, CFSTR("EndCPUTime"));
    objc_release(v27);
    objc_release(v25);
    objc_release(v24);
    objc_release(v23);
    v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "endEvent"));
    v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "metrics"));
    v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "dirtyMemoryLifetimePeakKB"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v30, CFSTR("EndPeakMemory"));
    objc_release(v30);
    objc_release(v29);
    objc_release(v28);
    v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "endEvent"));
    v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "metrics"));
    v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "dirtyMemoryKB"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v4,
      "setObject:forKeyedSubscript:",
      v33,
      CFSTR("EndDirtyMemory"));
    objc_release(v33);
    objc_release(v32);
    objc_release(v31);
    v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "endEvent"));
    v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v34, "metrics"));
    v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "storageDirtiedKB"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v4,
      "setObject:forKeyedSubscript:",
      v36,
      CFSTR("EndDiskLogicalWrites"));
    objc_release(v36);
    objc_release(v35);
    objc_release(v34);
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}