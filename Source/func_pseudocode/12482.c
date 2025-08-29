+[NSObject tsu_object:isEqualToObject:]
bool __cdecl +[NSObject tsu_object:isEqualToObject:](id a1, SEL a2, id a3, id a4)
{
  id v4; // x0
  id v5; // x2

  if ( a3 == a4 )
    return 1;
  if ( a3 )
  {
    v4 = a3;
    v5 = a4;
    return (unsigned __int8)objc_msgSend(v4, "isEqual:", v5);
  }
  if ( a4 )
  {
    v4 = a4;
    v5 = 0LL;
    return (unsigned __int8)objc_msgSend(v4, "isEqual:", v5);
  }
  return 0;
}