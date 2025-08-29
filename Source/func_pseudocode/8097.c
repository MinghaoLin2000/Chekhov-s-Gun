-[XPCSignpostReader updateMXSignpostsForProcess:withInterval:]
void __cdecl -[XPCSignpostReader updateMXSignpostsForProcess:withInterval:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  __int64 v8; // x9
  void *v9; // x21
  NSMutableDictionary *summarizedSignpostDurations; // x21
  id v11; // x23
  NSMutableDictionary *summarizedSignpostMetrics; // x21
  id v13; // x23
  NSMutableDictionary *numAppSignposts; // x21
  SignpostCounter *v15; // x23
  _QWORD *v16; // x21
  __int64 v17; // x8
  void *v18; // x24
  __CFString *v19; // x25
  void *v20; // x26
  void *v21; // x27
  NSArray *v22; // x23
  void *v23; // x25
  id v24; // x24
  void *v25; // x25
  float v26; // s0
  NSNumber *v27; // x25
  void *v28; // x25
  void *v29; // x0
  void *v30; // x26
  void *v31; // x27
  void *v32; // x28
  void *v33; // x26
  __int64 v34; // x0
  void *v35; // x0
  id v36; // x26
  void *v37; // x22
  void *v38; // x27
  NSMutableDictionary *v39; // x22
  SignpostIntervalMetrics *v40; // x28
  SignpostIntervalMetrics *v41; // x28
  void *v42; // [xsp+10h] [xbp-60h]
  id v43; // [xsp+18h] [xbp-58h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = qword_100019568++;
  if ( v8 <= 49999 )
  {
    v9 = objc_retainAutoreleasedReturnValue(
           -[NSMutableDictionary objectForKeyedSubscript:](
             self->_summarizedSignpostDurations,
             "objectForKeyedSubscript:",
             v6));
    objc_release(v9);
    if ( !v9 )
    {
      summarizedSignpostDurations = self->_summarizedSignpostDurations;
      v11 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
      -[NSMutableDictionary setObject:forKey:](summarizedSignpostDurations, "setObject:forKey:", v11, v6);
      objc_release(v11);
      summarizedSignpostMetrics = self->_summarizedSignpostMetrics;
      v13 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
      -[NSMutableDictionary setObject:forKey:](summarizedSignpostMetrics, "setObject:forKey:", v13, v6);
      objc_release(v13);
      numAppSignposts = self->_numAppSignposts;
      v15 = objc_alloc_init(&OBJC_CLASS___SignpostCounter);
      -[NSMutableDictionary setObject:forKey:](numAppSignposts, "setObject:forKey:", v15, v6);
      objc_release(v15);
    }
    v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_numAppSignposts, "objectForKeyedSubscript:", v6));
    v17 = v16[1];
    v16[1] = v17 + 1;
    if ( v17 > 999 )
      goto LABEL_26;
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "category"));
    if ( v18 )
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "category"));
    else
      v19 = &stru_100014858;
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "name"));
    if ( v20 )
    {
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "name"));
      v22 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:](&OBJC_CLASS___NSArray, "arrayWithObjects:", v19, v21, 0LL));
      objc_release(v21);
    }
    else
    {
      v22 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:](&OBJC_CLASS___NSArray, "arrayWithObjects:", v19, &stru_100014858, 0LL));
    }
    objc_release(v20);
    if ( v18 )
      objc_release(v19);
    objc_release(v18);
    v23 = objc_retainAutoreleasedReturnValue(
            -[NSMutableDictionary objectForKeyedSubscript:](
              self->_summarizedSignpostDurations,
              "objectForKeyedSubscript:",
              v6));
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "objectForKeyedSubscript:", v22));
    objc_release(v23);
    if ( !v24 )
    {
      v24 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
      v25 = objc_retainAutoreleasedReturnValue(
              -[NSMutableDictionary objectForKeyedSubscript:](
                self->_summarizedSignpostDurations,
                "objectForKeyedSubscript:",
                v6));
      objc_msgSend(v25, "setObject:forKey:", v24, v22);
      objc_release(v25);
    }
    objc_msgSend(v7, "durationSeconds");
    v27 = objc_retainAutoreleasedReturnValue(
            +[NSNumber numberWithUnsignedLongLong:](
              &OBJC_CLASS___NSNumber,
              "numberWithUnsignedLongLong:",
              (unsigned __int64)(float)(v26 * 1000.0)));
    objc_msgSend(v24, "addObject:", v27);
    objc_release(v27);
    v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "beginEvent"));
    v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "metrics"));
    if ( v29 )
    {
      v30 = v29;
      v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "endEvent"));
      v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "metrics"));
      objc_release(v32);
      objc_release(v31);
      objc_release(v30);
      objc_release(v28);
      if ( !v32 )
      {
LABEL_25:
        objc_release(v24);
        objc_release(v22);
LABEL_26:
        objc_release(v16);
        goto LABEL_27;
      }
      v33 = objc_retainAutoreleasedReturnValue(
              -[NSMutableDictionary objectForKeyedSubscript:](
                self->_summarizedSignpostMetrics,
                "objectForKeyedSubscript:",
                v6));
      v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v33, "objectForKeyedSubscript:", v22));
      objc_release(v33);
      objc_msgSend(v16, "updateMxSignpostOverlapStatistics:", v7);
      v34 = objc_opt_class(&OBJC_CLASS___SignpostAnimationInterval);
      if ( (objc_opt_isKindOfClass(v7, v34) & 1) != 0 )
        v35 = v7;
      else
        v35 = 0LL;
      if ( v28 )
      {
        v36 = objc_retain(v35);
        v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "beginEvent"));
        v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "endEvent"));
        objc_msgSend(v28, "updateSummary:endSnapshot:animationInterval:", v37, v38, v36);
      }
      else
      {
        v39 = self->_summarizedSignpostMetrics;
        v43 = objc_retain(v35);
        v42 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v39, "objectForKeyedSubscript:", v6));
        v40 = objc_alloc(&OBJC_CLASS___SignpostIntervalMetrics);
        v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "beginEvent"));
        v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "endEvent"));
        v41 = -[SignpostIntervalMetrics initWithBeginSnapshot:endSnapshot:animationInterval:](
                v40,
                "initWithBeginSnapshot:endSnapshot:animationInterval:",
                v38,
                v36,
                v43);
        v37 = v42;
        objc_release(v43);
        objc_msgSend(v42, "setObject:forKey:", v41, v22);
        objc_release(v41);
      }
      objc_release(v36);
      objc_release(v38);
      objc_release(v37);
    }
    objc_release(v28);
    goto LABEL_25;
  }
LABEL_27:
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}