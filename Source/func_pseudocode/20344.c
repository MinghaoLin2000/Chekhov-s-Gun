-[PKiCloudDataController createiCloudPrinterInfo:newPrinterInfo:]
id __cdecl -[PKiCloudDataController createiCloudPrinterInfo:newPrinterInfo:](
        PKiCloudDataController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x26
  id v6; // x27
  NSMutableDictionary *v7; // x21
  __int64 v8; // x20
  void *v9; // x19
  __int64 v10; // x19
  void *v11; // x20
  __int64 v12; // x19
  void *v13; // x22
  __int64 v14; // x19
  void *v15; // x23
  __int64 v16; // x19
  void *v17; // x24
  NSDate *v18; // x19
  void *v19; // x28
  __int64 v20; // x19
  void *v21; // x0
  void *v22; // x25
  id v23; // x23
  void *v24; // x25
  void *v25; // x19
  __int64 v26; // x28
  void *v27; // x0
  void *v28; // x22
  void *v29; // x0
  void *v30; // x24
  id v31; // x19
  void *v32; // x20
  __int64 v33; // x26
  void *v34; // x0
  void *v35; // x25
  void *v36; // x0
  void *v37; // x28
  void *v38; // x27
  id v40; // [xsp+10h] [xbp-120h]
  id v41; // [xsp+18h] [xbp-118h]
  id v42; // [xsp+20h] [xbp-110h]
  id v43; // [xsp+28h] [xbp-108h]
  id v44; // [xsp+30h] [xbp-100h]
  id v45; // [xsp+38h] [xbp-F8h]
  id v46; // [xsp+40h] [xbp-F0h]
  id v47; // [xsp+48h] [xbp-E8h]
  _QWORD v48[4]; // [xsp+50h] [xbp-E0h] BYREF
  id v49; // [xsp+70h] [xbp-C0h]
  _QWORD v50[4]; // [xsp+78h] [xbp-B8h] BYREF
  id v51; // [xsp+98h] [xbp-98h]
  _QWORD v52[4]; // [xsp+A0h] [xbp-90h] BYREF
  id v53; // [xsp+C0h] [xbp-70h]
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v45 = v6;
  v46 = v5;
  if ( v5 )
  {
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSMutableDictionary dictionaryWithDictionary:](
             &OBJC_CLASS___NSMutableDictionary,
             "dictionaryWithDictionary:",
             v5));
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    v8 = PKPrinterUUIDKey;
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", PKPrinterUUIDKey));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v9, v8);
    objc_release(v9);
  }
  v10 = PKPrinterNameKey;
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", PKPrinterNameKey));
  v44 = v11;
  if ( v11 )
    -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v11, v10);
  v12 = PKPrinterDisplayNameKey;
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", PKPrinterDisplayNameKey));
  v43 = v13;
  if ( v13 )
    -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v13, v12);
  v14 = PKPrinterLocationKey;
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", PKPrinterLocationKey));
  v42 = v15;
  if ( v15 )
    -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v15, v14);
  v16 = PKPrinterImageDataKey;
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", PKPrinterImageDataKey));
  v41 = v17;
  if ( v17 )
    -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v17, v16);
  v18 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v18, PKPrinterLastUsedDateKey);
  objc_release(v18);
  v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", PKPrinterEndpointKey));
  v20 = PKPrinterEndPointsKey;
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", PKPrinterEndPointsKey));
  v22 = v21;
  v40 = v21;
  if ( v21 )
    v47 = objc_msgSend(v21, "mutableCopy");
  else
    v47 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v52[0] = _NSConcreteStackBlock;
  v52[1] = 3254779904LL;
  v52[2] = sub_10004616C;
  v52[3] = &unk_10009EED8;
  v23 = objc_retain(v19);
  v53 = v23;
  v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "indexesOfObjectsPassingTest:", v52));
  if ( v24 )
    objc_msgSend(v47, "removeObjectsAtIndexes:", v24);
  if ( v23 )
    objc_msgSend(v47, "insertObject:atIndex:", v23, 0LL);
  -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v47, v20);
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", PKPrinterURLKey));
  v26 = PKPrinterURLsKey;
  v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", PKPrinterURLsKey, v25));
  v28 = v27;
  if ( v27 )
    v29 = objc_msgSend(v27, "mutableCopy");
  else
    v29 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v30 = v29;
  v50[0] = _NSConcreteStackBlock;
  v50[1] = 3254779904LL;
  v50[2] = sub_100046178;
  v50[3] = &unk_10009EF08;
  v31 = objc_retain(v25);
  v51 = v31;
  v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "indexesOfObjectsPassingTest:", v50));
  objc_release(v24);
  if ( v32 )
    objc_msgSend(v30, "removeObjectsAtIndexes:", v32);
  if ( v31 )
    objc_msgSend(v30, "insertObject:atIndex:", v31, 0LL);
  -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v30, v26);
  v33 = PKPrinterNetworksKey;
  v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v46, "objectForKeyedSubscript:", PKPrinterNetworksKey));
  v35 = v34;
  if ( v34 )
    v36 = objc_msgSend(v34, "mutableCopy");
  else
    v36 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v37 = v36;
  v48[0] = _NSConcreteStackBlock;
  v48[1] = 3254779904LL;
  v48[2] = sub_100046184;
  v48[3] = &unk_10009EF08;
  v49 = CFSTR("<simulator-wifi>");
  v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "indexesOfObjectsPassingTest:", v48));
  objc_release(v32);
  if ( v38 )
    objc_msgSend(v37, "removeObjectsAtIndexes:", v38);
  objc_msgSend(v37, "insertObject:atIndex:", CFSTR("<simulator-wifi>"), 0LL);
  -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v37, v33);
  objc_release(v49);
  objc_release(v37);
  objc_release(v35);
  objc_release(v51);
  objc_release(v30);
  objc_release(v28);
  objc_release(v31);
  objc_release(v38);
  objc_release(v53);
  objc_release(v47);
  objc_release(v40);
  objc_release(v23);
  objc_release(v41);
  objc_release(v42);
  objc_release(v43);
  objc_release(v44);
  objc_release(v45);
  objc_release(v46);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}