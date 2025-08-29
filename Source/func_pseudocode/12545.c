+[NSArray tsu_arrayByUnioningArray:withArray:]
id __cdecl +[NSArray tsu_arrayByUnioningArray:withArray:](id a1, SEL a2, id a3, id a4)
{
  if ( a3 )
    return _objc_msgSend(a3, "tsu_arrayByAddingNonContainedObjectsFromArray:", a4);
  else
    return a4;
}