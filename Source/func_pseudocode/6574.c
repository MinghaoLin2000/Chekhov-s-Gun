-[MediaConversionRequestTracker compare:]
signed __int64 __cdecl -[MediaConversionRequestTracker compare:](MediaConversionRequestTracker *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x20
  void *v6; // x0
  signed __int64 v7; // x20
  NSDate *v8; // x21
  void *v9; // x22
  NSComparisonResult v10; // x23

  v4 = objc_retain(a3);
  v5 = -[MediaConversionRequestTracker effectivePriority](self, "effectivePriority");
  v6 = objc_msgSend(v4, "effectivePriority");
  if ( v5 <= (__int64)v6 )
  {
    if ( v5 < (__int64)v6 )
    {
      v7 = 1LL;
    }
    else
    {
      v8 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker enqueueTime](self, "enqueueTime"));
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "enqueueTime"));
      v10 = -[NSDate compare:](v8, "compare:", v9);
      objc_release(v9);
      objc_release(v8);
      if ( v5 <= 0 )
        v7 = v10;
      else
        v7 = -(__int64)v10;
    }
  }
  else
  {
    v7 = -1LL;
  }
  objc_release(v4);
  return v7;
}