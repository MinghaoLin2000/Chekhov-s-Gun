-[NSString tsu_stringByIncrementingCounterAfterDuplicateTitleModifierWithUniquenessTest:]
id __cdecl -[NSString tsu_stringByIncrementingCounterAfterDuplicateTitleModifierWithUniquenessTest:](
        NSString *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  id v5; // x22
  void *v6; // x19
  id v7; // x22
  void *v8; // x25
  id v9; // x22
  void *v10; // x23
  id v11; // x22
  id v12; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(SFUMainBundle());
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "localizedStringForKey:value:table:", CFSTR("copy"), &stru_1001DFAA0, CFSTR("TSUtility")));
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(SFUMainBundle());
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "localizedStringForKey:value:table:", CFSTR("%1$@ %2$@"), &stru_1001DFAA0, CFSTR("TSUtility")));
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(SFUMainBundle());
  v10 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v9,
            "localizedStringForKey:value:table:",
            CFSTR("%1$@ %2$@ %3$@"),
            &stru_1001DFAA0,
            CFSTR("TSUtility")));
  objc_release(v9);
  v11 = objc_alloc_init((Class)&OBJC_CLASS___NSNumberFormatter);
  v12 = objc_retainAutoreleasedReturnValue(
          -[NSString tsu_stringByIncrementingCounterAfterDuplicateTitleModifierWithLocalizedCopyString:firstCopyFormatString:generalCopyFormatString:numberFormatter:uniquenessTest:](
            self,
            "tsu_stringByIncrementingCounterAfterDuplicateTitleModifierWithLocalizedCopyString:firstCopyFormatString:gene"
            "ralCopyFormatString:numberFormatter:uniquenessTest:",
            v6,
            v8,
            v10,
            v11,
            v4));
  objc_release(v4);
  objc_release(v11);
  objc_release(v10);
  objc_release(v8);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}