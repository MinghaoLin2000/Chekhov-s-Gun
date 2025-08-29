-[OSLogService _queue_getNextOSLogEntryWithReply:]
id __cdecl -[OSLogService _queue_getNextOSLogEntryWithReply:](OSLogService *self, SEL a2, id a3)
{
  void *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  dispatch_assert_queue_V2((dispatch_queue_t)self->_serial_queue);
  if ( self->_done || !-[NSMutableArray count](self->_events, "count") )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndexedSubscript:](self->_events, "objectAtIndexedSubscript:", 0LL));
    -[NSMutableArray removeObjectAtIndex:](self->_events, "removeObjectAtIndex:", 0LL);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}