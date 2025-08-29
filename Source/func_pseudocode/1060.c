+[AMPCapacityBarViewController capacityInfoForType:size:items:]
id __cdecl +[AMPCapacityBarViewController capacityInfoForType:size:items:](
        id a1,
        SEL a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  NSMutableDictionary *v8; // x0
  NSMutableDictionary *v9; // x19
  __int64 v10; // x22
  NSBundle *v11; // x23
  NSString *v12; // x22
  NSNumber *v13; // x21
  NSNumber *v14; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = objc_retainAutoreleasedReturnValue(
         +[NSMutableDictionary dictionaryWithCapacity:](
           &OBJC_CLASS___NSMutableDictionary,
           "dictionaryWithCapacity:",
           4LL));
  v9 = v8;
  if ( a3 > 0xC )
    v10 = 0LL;
  else
    v10 = (__int64)*(&off_1000B92C0 + a3);
  -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v10, CFSTR("ID"));
  v11 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v12 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v11,
            "localizedStringForKey:value:table:",
            v10,
            &stru_1000BA220,
            CFSTR("CapacityBar")));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v9, "setObject:forKeyedSubscript:", v12, CFSTR("NAME"));
  objc_release(v12);
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", a4));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v9, "setObject:forKeyedSubscript:", v13, CFSTR("SIZE"));
  objc_release(v13);
  v14 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", a5));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v9, "setObject:forKeyedSubscript:", v14, CFSTR("ITEMS"));
  objc_release(v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}