+[NSArray tsu_arrayWithNonNilObject:]
id __cdecl +[NSArray tsu_arrayWithNonNilObject:](id a1, SEL a2, id a3)
{
  id v4; // [xsp+0h] [xbp-10h] BYREF

  if ( !a3 )
    return &__NSArray0__struct;
  v4 = a3;
  return +[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v4, 1LL);
}