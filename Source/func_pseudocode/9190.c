+[NSError tsp_dataCorruptionErrorWithError:reason:data:dataProperties:actualDataDigest:isLikelyOSCorruption:isLikelyZeroBytesCorruption:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[NSError tsp_dataCorruptionErrorWithError:reason:data:dataProperties:actualDataDigest:isLikelyOSCorruption:isLikelyZeroBytesCorruption:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        DataProperties *a6,
        id a7,
        bool a8,
        bool a9)
{
  _BOOL8 v9; // x27
  id v14; // x19
  id v15; // x20
  id v16; // x22
  id v17; // x23
  void *v18; // x24
  NSNumber *v19; // x28
  NSNumber *v20; // x27
  NSNumber *v21; // x26
  NSNumber *v22; // x26
  void *v23; // x0
  void *v24; // x26
  void *v25; // x27
  void *v26; // x27
  __int64 v27; // x2
  NSNumber *v28; // x27
  id v29; // x27
  id v30; // x28
  NSNumber *v31; // x28
  void *v32; // x28
  void *v33; // x25
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v9 = a8;
  v14 = objc_retain(a3);
  v15 = objc_retain(a4);
  v16 = objc_retain(a5);
  v17 = objc_retain(a7);
  v18 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithCapacity:", 14LL);
  objc_msgSend(v18, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, CFSTR("TSPIsDataCorruptionError"));
  v19 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", a6->var0 == 1));
  objc_msgSend(v18, "setObject:forKeyedSubscript:", v19, CFSTR("TSPExpectedDataDigestMatch"));
  objc_release(v19);
  v20 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v9));
  objc_msgSend(v18, "setObject:forKeyedSubscript:", v20, CFSTR("TSPIsLikelyOSCorruption"));
  objc_release(v20);
  v21 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", a9));
  objc_msgSend(v18, "setObject:forKeyedSubscript:", v21, CFSTR("TSPIsLikelyZeroBytesCorruption"));
  objc_release(v21);
  if ( v15 )
    objc_msgSend(v18, "setObject:forKeyedSubscript:", v15, CFSTR("TSPDataValidationReason"));
  v22 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithLongLong:](
            &OBJC_CLASS___NSNumber,
            "numberWithLongLong:",
            objc_msgSend(v16, "identifier")));
  objc_msgSend(v18, "setObject:forKeyedSubscript:", v22, CFSTR("TSPDataIdentifier"));
  objc_release(v22);
  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "digest"));
  v24 = v23;
  if ( v23 )
  {
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "digestString"));
    objc_msgSend(v18, "setObject:forKeyedSubscript:", v25, CFSTR("TSPExpectedDataDigest"));
    objc_release(v25);
  }
  if ( v17 )
  {
    v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "digestString"));
    objc_msgSend(v18, "setObject:forKeyedSubscript:", v26, CFSTR("TSPActualDataDigest"));
    objc_release(v26);
    if ( v24 )
      v27 = (unsigned int)objc_msgSend(v24, "isEqual:", v17) ^ 1;
    else
      v27 = 0LL;
    v28 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v27));
    objc_msgSend(v18, "setObject:forKeyedSubscript:", v28, CFSTR("TSPIsDataDigestMismatchError"));
    objc_release(v28);
  }
  v29 = objc_retain(a6->var1);
  if ( v29 )
    objc_msgSend(v18, "setObject:forKeyedSubscript:", v29, CFSTR("TSPDataCreationTime"));
  if ( a6->var2 )
  {
    v30 = objc_retainAutoreleasedReturnValue((id)NSStringFromTSPVersion());
    objc_msgSend(v18, "setObject:forKeyedSubscript:", v30, CFSTR("TSPDataCreationVersion"));
    objc_release(v30);
  }
  v31 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedLongLong:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedLongLong:",
            objc_msgSend(v16, "length")));
  objc_msgSend(v18, "setObject:forKeyedSubscript:", v31, CFSTR("TSPDataLength"));
  objc_release(v31);
  v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "type"));
  if ( v32 )
    objc_msgSend(v18, "setObject:forKeyedSubscript:", v32, CFSTR("TSPDataType"));
  if ( v14 )
    objc_msgSend(v18, "setObject:forKeyedSubscript:", v14, NSUnderlyingErrorKey);
  v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_readCorruptedDocumentErrorWithUserInfo:", v18));
  objc_release(v32);
  objc_release(v29);
  objc_release(v24);
  objc_release(v18);
  objc_release(v17);
  objc_release(a6->var3);
  objc_release(a6->var1);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v33);
}