+[NSSet tsu_set:isEqualToSet:]
bool __cdecl +[NSSet tsu_set:isEqualToSet:](id a1, SEL a2, id a3, id a4)
{
  NSSet *v5; // x19
  NSSet *v6; // x0
  NSSet *v7; // x20
  unsigned __int8 v8; // w21

  v5 = (NSSet *)objc_retain(a3);
  v6 = (NSSet *)objc_retain(a4);
  if ( v5 == v6 )
  {
    v8 = 1;
    v7 = v5;
    goto LABEL_6;
  }
  v7 = v6;
  if ( !v5 )
  {
    v5 = objc_retainAutoreleasedReturnValue(+[NSSet set](&OBJC_CLASS___NSSet, "set"));
    if ( v7 )
      goto LABEL_4;
LABEL_8:
    v7 = objc_retainAutoreleasedReturnValue(+[NSSet set](&OBJC_CLASS___NSSet, "set"));
    goto LABEL_4;
  }
  if ( !v6 )
    goto LABEL_8;
LABEL_4:
  v8 = -[NSSet isEqualToSet:](v5, "isEqualToSet:", v7);
LABEL_6:
  objc_release(v7);
  objc_release(v5);
  return v8;
}