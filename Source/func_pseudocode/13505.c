-[NSString tsu_stringByIncrementingCounterAfterDuplicateTitleModifierWithLocalizedCopyString:firstCopyFormatString:generalCopyFormatString:numberFormatter:uniquenessTest:]
id __cdecl -[NSString tsu_stringByIncrementingCounterAfterDuplicateTitleModifierWithLocalizedCopyString:firstCopyFormatString:generalCopyFormatString:numberFormatter:uniquenessTest:](
        NSString *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v12; // x19
  id v13; // x20
  id v14; // x21
  id v15; // x23
  unsigned int (__fastcall **v16)(id, void *); // x24
  id v17; // x0
  void *v18; // x25
  NSDictionary *v19; // x26
  void *v20; // x27
  void *i; // x26
  __int64 v22; // x8
  __int64 v23; // x19
  void *v24; // x0
  id v25; // x28
  NSNumber *v26; // x19
  void *v27; // x25
  void *v28; // x19
  id v30; // [xsp+8h] [xbp-98h]
  id v31; // [xsp+10h] [xbp-90h]
  __int64 v32; // [xsp+20h] [xbp-80h] BYREF
  _QWORD v33[2]; // [xsp+28h] [xbp-78h] BYREF
  _QWORD v34[2]; // [xsp+38h] [xbp-68h] BYREF
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v12 = objc_retain(a3);
  v13 = objc_retain(a4);
  v14 = objc_retain(a5);
  v15 = objc_retain(a6);
  v16 = (unsigned int (__fastcall **)(id, void *))objc_retain(a7);
  v32 = 0LL;
  v17 = objc_retainAutoreleasedReturnValue(
          -[NSString tsu_parseBaseTitleWithLocalizedCopyString:firstCopyFormatString:generalCopyFormatString:outNumber:](
            self,
            "tsu_parseBaseTitleWithLocalizedCopyString:firstCopyFormatString:generalCopyFormatString:outNumber:",
            v12,
            v13,
            v14,
            &v32));
  v18 = v17;
  if ( v17 )
  {
    v33[0] = CFSTR("%1$@");
    v33[1] = CFSTR("%2$@");
    v30 = v17;
    v31 = v12;
    v34[0] = v17;
    v34[1] = v12;
    v19 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v34,
              v33,
              2LL));
    v20 = -[NSDictionary mutableCopy](v19, "mutableCopy");
    objc_release(v19);
    for ( i = -[NSString copy](self, "copy");
          -[NSString isEqualToString:](self, "isEqualToString:", i) || v16[2](v16, i);
          i = v28 )
    {
      v22 = v32;
      v23 = ++v32;
      if ( v22 )
        v24 = v14;
      else
        v24 = v13;
      v25 = objc_retain(v24);
      v26 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", v23));
      v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "stringFromNumber:", v26));
      objc_msgSend(v20, "setObject:forKeyedSubscript:", v27, CFSTR("%3$@"));
      objc_release(v27);
      objc_release(v26);
      v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "tsu_stringByApplyingSubstitutions:", v20));
      objc_release(v25);
      objc_release(i);
    }
    objc_release(v20);
    v18 = v30;
    v12 = v31;
  }
  else
  {
    i = -[NSString copy](self, "copy");
  }
  objc_release(v18);
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(i);
}