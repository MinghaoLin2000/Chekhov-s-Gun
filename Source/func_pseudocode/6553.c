-[MediaConversionRequestTracker dumpResourceURLCollection:toParentDirectory:directoryName:updatingDebugInformation:]
void __cdecl -[MediaConversionRequestTracker dumpResourceURLCollection:toParentDirectory:directoryName:updatingDebugInformation:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v9; // x19
  id v10; // x20
  id v11; // x21
  void *v12; // x22
  id v13; // x23
  void *v14; // x24
  void *v15; // x25
  void *v16; // x24
  void *v17; // x25
  id v18; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-60h] BYREF
  id v20; // [xsp+14h] [xbp-5Ch]
  __int16 v21; // [xsp+1Ch] [xbp-54h]
  id v22; // [xsp+1Eh] [xbp-52h]

  v9 = objc_retain(a3);
  v10 = objc_retain(a5);
  v11 = objc_retain(a6);
  v18 = 0LL;
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "urlForDebugDumpWithDirectoryName:inExistingParentDirectory:error:", v10, a4, &v18));
  v13 = objc_retain(v18);
  if ( v12 )
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "path"));
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("resourceDumpPath-"), "stringByAppendingString:", v10));
    objc_msgSend(v11, "setObject:forKeyedSubscript:", v14, v15);
    objc_release(v15);
    objc_release(v14);
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "logMessageSummary"));
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("resourceURLCollectionSummary-"), "stringByAppendingString:", v10));
    objc_msgSend(v11, "setObject:forKeyedSubscript:", v16, v17);
    objc_release(v17);
    objc_release(v16);
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 138543618;
    v20 = v10;
    v21 = 2114;
    v22 = v13;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to dump resources %{public}@ to debug dump: %{public}@",
      buf,
      0x16u);
  }
  objc_release(v12);
  objc_release(v13);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
}