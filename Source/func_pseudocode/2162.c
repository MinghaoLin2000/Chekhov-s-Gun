-[AMPProgressBarView accessibilityValueDescription]
id __cdecl -[AMPProgressBarView accessibilityValueDescription](AMPProgressBarView *self, SEL a2)
{
  id v3; // x19
  double v4; // d0
  NSNumber *v5; // x22
  void *v6; // x20
  NSBundle *v7; // x22
  NSString *v8; // x21
  NSString *v9; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_alloc_init((Class)&OBJC_CLASS___NSNumberFormatter);
  -[AMPProgressBarView fractionCompleted](self, "fractionCompleted");
  v5 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v4 * 100.0));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "stringFromNumber:", v5));
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v7,
           "localizedStringForKey:value:table:",
           CFSTR("%@ percent completed"),
           &stru_1000BA220,
           0LL));
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v8, v6));
  objc_release(v8);
  objc_release(v6);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}