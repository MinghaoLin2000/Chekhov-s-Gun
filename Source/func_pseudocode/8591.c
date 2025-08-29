-[MetricMeasurementHelper _sampleWithProxyMetric:timeout:response:]
void __cdecl -[MetricMeasurementHelper _sampleWithProxyMetric:timeout:response:](
        MetricMeasurementHelper *self,
        SEL a2,
        id a3,
        double a4,
        id a5)
{
  id v7; // x19
  void (__fastcall **v8)(id, void *, __int64, _QWORD); // x20
  os_log_s *v9; // x21
  void *v10; // x22
  void *v11; // x21
  void *v12; // x22
  os_log_s *v13; // x23
  void *v14; // x24
  os_log_s *v15; // x20
  __int64 v16; // [xsp+8h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-70h] BYREF
  void *v18; // [xsp+14h] [xbp-6Ch]

  v7 = objc_retain(a3);
  v8 = (void (__fastcall **)(id, void *, __int64, _QWORD))objc_retain(a5);
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_INFO) )
  {
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "metric"));
    *(_DWORD *)buf = 138412290;
    v18 = v10;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v9,
      OS_LOG_TYPE_INFO,
      "Attempting to sample probe using underlying metric: %@.",
      buf,
      0xCu);
    objc_release(v10);
  }
  objc_release(v9);
  v16 = 0LL;
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "_remoteProbe"));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "sampleWithTimeout:stopReason:", &v16, a4));
  v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
  if ( os_log_type_enabled(v13, OS_LOG_TYPE_INFO) )
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "samples"));
    *(_DWORD *)buf = 138412290;
    v18 = v14;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v13,
      OS_LOG_TYPE_INFO,
      "Captured Samples: %@. Now attempting to reply with this data.",
      buf,
      0xCu);
    objc_release(v14);
  }
  objc_release(v13);
  v8[2](v8, v12, v16, 0LL);
  objc_release(v8);
  v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_MXMGetLog());
  if ( os_log_type_enabled(v15, OS_LOG_TYPE_INFO) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl((void *)&_mh_execute_header, v15, OS_LOG_TYPE_INFO, "Replied with samples.", buf, 2u);
  }
  objc_release(v15);
  objc_release(v12);
  objc_release(v11);
  objc_release(v7);
}