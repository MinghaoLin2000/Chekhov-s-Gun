-[EAFirmwareUpdater getPersonalizationID]
unsigned __int8 __cdecl -[EAFirmwareUpdater getPersonalizationID](EAFirmwareUpdater *self, SEL a2)
{
  NSArray *manifestList; // x0
  unsigned __int64 manifestIndex; // x23

  manifestList = self->_manifestList;
  if ( !manifestList )
  {
    -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("Error: _manifestList = NULL n"));
    return 1;
  }
  if ( !self->_manifestIDs )
    return 1;
  manifestIndex = self->_manifestIndex;
  if ( -[NSArray count](manifestList, "count") <= manifestIndex )
    return 1;
  return (unsigned __int8)objc_msgSend(
                            -[NSDictionary objectForKey:](
                              self->_manifestIDs,
                              "objectForKey:",
                              -[NSArray objectAtIndexedSubscript:](
                                self->_manifestList,
                                "objectAtIndexedSubscript:",
                                self->_manifestIndex)),
                            "intValue") | 1;
}