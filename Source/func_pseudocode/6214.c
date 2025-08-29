-[MediaConversionQueue processCompletedQueueEntry:resultURLCollection:didConvertSuccessfully:conversionOutputInformation:conversionOutputData:conversionOutputFileType:conversionError:]
void __cdecl -[MediaConversionQueue processCompletedQueueEntry:resultURLCollection:didConvertSuccessfully:conversionOutputInformation:conversionOutputData:conversionOutputFileType:conversionError:](
        MediaConversionQueue *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id a6,
        id a7,
        id a8,
        id a9)
{
  _BOOL4 v12; // w22
  id v16; // x19
  id v17; // x24
  id v18; // x25
  id v19; // x21
  void *v20; // x21
  void *v21; // x23
  void *v22; // x23
  void *v23; // x26
  unsigned int v24; // w21
  void *v25; // x20
  id v26; // x20
  void *v27; // x0
  void *v28; // x27
  __int64 v29; // x28
  void *i; // x22
  void *v31; // x26
  void *v32; // x23
  void *v33; // x21
  unsigned __int8 v34; // w0
  void *v35; // x26
  void *v36; // x21
  NSAssertionHandler *v37; // x21
  NSAssertionHandler *v38; // x21
  NSAssertionHandler *v39; // x21
  MediaConversionQueue *v40; // [xsp+10h] [xbp-1A0h]
  id v41; // [xsp+18h] [xbp-198h]
  unsigned int v42; // [xsp+24h] [xbp-18Ch]
  id v43; // [xsp+28h] [xbp-188h]
  unsigned int v44; // [xsp+44h] [xbp-16Ch]
  id v45; // [xsp+48h] [xbp-168h]
  id v46; // [xsp+50h] [xbp-160h]
  id v47; // [xsp+58h] [xbp-158h]
  _BOOL4 v48; // [xsp+64h] [xbp-14Ch]
  id v49; // [xsp+68h] [xbp-148h] BYREF
  __int128 v50; // [xsp+70h] [xbp-140h] BYREF
  __int128 v51; // [xsp+80h] [xbp-130h]
  __int128 v52; // [xsp+90h] [xbp-120h]
  __int128 v53; // [xsp+A0h] [xbp-110h]
  uint8_t v54[128]; // [xsp+B0h] [xbp-100h] BYREF
  uint8_t buf[4]; // [xsp+130h] [xbp-80h] BYREF
  id v56; // [xsp+134h] [xbp-7Ch]

  v12 = a5;
  v16 = objc_retain(a3);
  v41 = objc_retain(a4);
  v46 = objc_retain(a6);
  v17 = objc_retain(a7);
  v18 = objc_retain(a8);
  v19 = objc_retain(a9);
  dispatch_assert_queue_V2((dispatch_queue_t)self->_requestProcessingQueue);
  v40 = self;
  os_unfair_lock_assert_not_owner(&self->_queueStateLock);
  v45 = v19;
  v48 = v12;
  if ( (v19 == 0LL) != v12 )
  {
    v37 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v37,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      668LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("(didConvertSuccessfully || error) && !(didConvertSuccessfully && error)"));
    objc_release(v37);
    if ( v16 )
      goto LABEL_3;
LABEL_35:
    v38 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v38,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      669LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("completedQueueEntry"));
    objc_release(v38);
    goto LABEL_3;
  }
  if ( !v16 )
    goto LABEL_35;
LABEL_3:
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "initialRequestConversionOptions"));
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionWantsResultAsDataKey")));
  v44 = (unsigned int)objc_msgSend(v21, "boolValue");
  objc_release(v21);
  objc_release(v20);
  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "initialRequestConversionOptions"));
  v23 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v22,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionIsPhotosAdjustmentsCalculationKey")));
  v24 = (unsigned int)objc_msgSend(v23, "boolValue");
  objc_release(v23);
  objc_release(v22);
  if ( !v17 && v12 && v44 && !v24 )
  {
    v39 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v39,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      678LL,
      CFSTR("Unexpected nil output data for completed conversion with result requested as data"));
    objc_release(v39);
  }
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "clientRequestsSnapshot"));
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138543362;
    v56 = v16;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Conversion completed: %{public}@",
      buf,
      0xCu);
  }
  v47 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v50 = 0u;
  v51 = 0u;
  v52 = 0u;
  v53 = 0u;
  v26 = objc_retain(v25);
  v27 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v50, v54, 16LL);
  if ( v27 )
  {
    v28 = v27;
    v29 = *(_QWORD *)v51;
    do
    {
      for ( i = 0LL; i != v28; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v51 != v29 )
          objc_enumerationMutation(v26);
        v31 = *(void **)(*((_QWORD *)&v50 + 1) + 8LL * (_QWORD)i);
        v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "requestTracker"));
        objc_msgSend(v32, "setOutputData:", v17);
        objc_msgSend(v32, "setOutputTypeIdentifier:", v18);
        if ( !v48 )
        {
          objc_msgSend(v32, "setError:", v45);
          goto LABEL_31;
        }
        v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "destinationURLCollection"));
        if ( (unsigned int)objc_msgSend(v47, "containsObject:", v33) )
        {
          if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
          {
            *(_DWORD *)buf = 138543362;
            v56 = v26;
            _os_log_impl(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_LOG_TYPE_INFO,
              "Request %{public}@ has same destination as another request handled by the same conversion, not copying output",
              buf,
              0xCu);
          }
        }
        else if ( (unsigned int)objc_msgSend(v16, "taskTypeSupportsDeduplication") )
        {
          v34 = (unsigned __int8)objc_msgSend(v31, "requiresDeduplicationAgainstOriginalWithIdenticalOutput");
          if ( (v44 & 1) != 0 )
            goto LABEL_26;
          if ( (v34 & 1) == 0 )
          {
            v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "requestIdentifier"));
            v49 = 0LL;
            v42 = -[MediaConversionQueue copyConversionOutput:toRequestDestination:requestIdentifier:error:](
                    v40,
                    "copyConversionOutput:toRequestDestination:requestIdentifier:error:",
                    v41,
                    v33,
                    v35,
                    &v49);
            v43 = objc_retain(v49);
            objc_release(v35);
            if ( v42 )
              objc_msgSend(v47, "addObject:", v33);
            else
              objc_msgSend(v32, "setError:", v43);
            objc_release(v43);
          }
        }
        else if ( v44 )
        {
LABEL_26:
          objc_msgSend(v32, "setOutputData:", v17);
          if ( v18 )
            objc_msgSend(v32, "setOutputTypeIdentifier:", v18);
        }
        objc_msgSend(v32, "setOutputInformation:", v46);
        objc_release(v33);
LABEL_31:
        v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "initialRequestIdentifier"));
        objc_msgSend(v32, "markAsCompletedWithInitialRequestIdentifier:", v36);
        objc_release(v36);
        objc_release(v32);
      }
      v28 = objc_msgSend(v26, "countByEnumeratingWithState:objects:count:", &v50, v54, 16LL);
    }
    while ( v28 );
  }
  objc_release(v26);
  objc_release(v47);
  objc_release(v26);
  objc_release(v45);
  objc_release(v18);
  objc_release(v17);
  objc_release(v46);
  objc_release(v41);
  objc_release(v16);
}