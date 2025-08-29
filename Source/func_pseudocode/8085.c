-[SignpostIntervalMetrics getMetricDictionary]
id __cdecl -[SignpostIntervalMetrics getMetricDictionary](SignpostIntervalMetrics *self, SEL a2)
{
  NSNumber *v3; // x19
  NSNumber *v4; // x20
  NSNumber *v5; // x21
  NSNumber *v6; // x23
  NSNumber *v7; // x24
  NSNumber *v8; // x25
  NSNumber *v9; // x26
  NSNumber *v10; // x27
  NSDictionary *v11; // x22
  _QWORD v13[8]; // [xsp+8h] [xbp-D8h] BYREF
  _QWORD v14[8]; // [xsp+48h] [xbp-98h] BYREF
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  v13[0] = CFSTR("cpuTime");
  v3 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", self->cpuTimeSec));
  v14[0] = v3;
  v13[1] = CFSTR("peakMemory");
  v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", self->peakMemoryKB));
  v14[1] = v4;
  v13[2] = CFSTR("averageMemory");
  v5 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", self->averageMemoryKB));
  v14[2] = v5;
  v13[3] = CFSTR("diskIO");
  v6 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", self->diskLogicalWritesKB));
  v14[3] = v6;
  v13[4] = CFSTR("hitchDuration");
  v7 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", self->hitchDuration));
  v14[4] = v7;
  v13[5] = CFSTR("animationDuration");
  v8 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", self->animationDuration));
  v14[5] = v8;
  v13[6] = CFSTR("countInstances");
  v9 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", (double)self->countInstances));
  v14[6] = v9;
  v13[7] = CFSTR("countIntervalOverlaps");
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithDouble:](
            &OBJC_CLASS___NSNumber,
            "numberWithDouble:",
            (double)self->countIntervalOverlaps));
  v14[7] = v10;
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v14,
            v13,
            8LL));
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}